//Atividade 14


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	int main() {
		
		setlocale(LC_ALL, "Portuguese");
		
		int numero, invertido = 0, resto;
		
		printf("Informe um numero: ");
		scanf("%d", &numero);
		
		while (numero != 0) {
			resto = numero % 10;
			invertido = invertido * 10 + resto;
			numero /= 10;
		}
		
		printf("O número invertido é %d", invertido);
		return 0;
	}
 		
