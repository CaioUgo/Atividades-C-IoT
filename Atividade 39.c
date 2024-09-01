//Atividade 39
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#define MAX 50


typedef struct {
    int topo;               // Índice do topo da pilha
    double itens[MAX];      // Array que armazena os valores dos operandos
} Pilha;


void inicializaPilha(Pilha *p) {
    p->topo = -1;
}


int pilhaVazia(Pilha *p) {
    return p->topo == -1; 
}


int pilhaCheia(Pilha *p) {
    return p->topo == MAX - 1;
}

void empilha(Pilha *p, double valor) {
    if (!pilhaCheia(p)) {           
        p->itens[++(p->topo)] = valor; 
    }
}

double desempilha(Pilha *p) {
    if (!pilhaVazia(p)) {              
        return p->itens[(p->topo)--];    
    }
    return 0;
}

double avaliaPosfixa(const char* expr) {
    Pilha pilha;             
    inicializaPilha(&pilha);  


    for (int i = 0; expr[i] != '\0'; i++) {
        char token = expr[i]; 

        if (isspace(token)) { 
            continue;
        }

        if (isdigit(token)) {
            double num = token - '0';
            empilha(&pilha, num);    
        } else { 
            double operando2 = desempilha(&pilha);
            double operando1 = desempilha(&pilha);

            switch (token) {
                case '+':
                    empilha(&pilha, operando1 + operando2); 
                    break;
                case '-':
                    empilha(&pilha, operando1 - operando2); 
                    break;
                case '*':
                    empilha(&pilha, operando1 * operando2);
                    break;
                case '/':
                    empilha(&pilha, operando1 / operando2); 
                    break;
                default: 
                    printf("Operador desconhecido: %c\n", token);
                    exit(EXIT_FAILURE);
            }
        }
    }

    return desempilha(&pilha);
}

int main() {
        	setlocale(LC_ALL, "Portuguese");

	char expr[MAX];  

    printf("Digite a expressão pós-fixa: ");
    fgets(expr, MAX, stdin); 

    double resultado = avaliaPosfixa(expr);
    printf("Resultado: %.2f\n", resultado);

    return 0;
}
