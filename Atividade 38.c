//Atividade 38

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#define MAX 100

int precedencia(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

void infixaParaPosfixa(const char* infixa, char* posfixa) {
    char operadores[MAX];
    int topo = -1; 
    int k = 0; 

    for (int i = 0; infixa[i] != '\0'; i++) {
        char token = infixa[i];

        if (isspace(token)) {
            continue;
        }

        if (isalnum(token)) {
            posfixa[k++] = token;
        } else if (token == '(') {
            operadores[++topo] = token; 
        } else if (token == ')') {
            while (topo >= 0 && operadores[topo] != '(') {
                posfixa[k++] = operadores[topo--]; 
            }
            topo--; 
        } else {
            while (topo >= 0 && precedencia(operadores[topo]) >= precedencia(token)) {
                posfixa[k++] = operadores[topo--]; 
            }
            operadores[++topo] = token; 
        }
    }

    while (topo >= 0) {
        posfixa[k++] = operadores[topo--];
    }

    posfixa[k] = '\0';
}

int main() {
    	setlocale(LC_ALL, "Portuguese");
	char infixa[MAX];
    char posfixa[MAX];

    printf("Digite a expressão infixa: ");
    fgets(infixa, MAX, stdin);

    infixa[strcspn(infixa, "\n")] = '\0';

    infixaParaPosfixa(infixa, posfixa);

    printf("Expressão pós-fixa: %s\n", posfixa);

    return 0;
}
			
			
		
		
		
