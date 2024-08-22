//Atividade 10

#include <stdio.h>

	int main() {
		
		int contador, numero = 10;		
		
		printf("A contagem regressiva: ");
		for (contador = 0; contador < numero; numero = numero - 1) {			
		
			printf("%d ", numero);			
		}
		return 0;				
	}
