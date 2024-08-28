//Atividade 5

#include <stdio.h>

	int main() {
		
		int numero1, numero2, numero3;
		float media;
		
		printf("Informe o primeiro numero: ");
		scanf("%d", &numero1);
		
		printf("Informe o segundo numero: ");
		scanf("%d", &numero2);
		
		printf("Informe o terceiro numero: ");
		scanf("%d", &numero3);
		
		media = (numero1 + numero2 + numero3) / 3;
		
		printf("A media dos numeros e %f", media);
	}
