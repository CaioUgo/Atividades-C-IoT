//Atividade 11

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	int main() {
		
		setlocale(LC_ALL, "Portuguese");
		
		int numero, contador;
		
		printf ("Digite um número: ");
		scanf("%d", &numero);
		
		if ( numero <= 1){
			printf("Não é primo");
		
		}else {
			for (contador = 2; contador < numero; contador++){
				if (numero % contador==0){
				printf("Não é primo");
				break;
				}
			}
			if (contador==numero) {
				printf("É primo");
			}
		}
	}
