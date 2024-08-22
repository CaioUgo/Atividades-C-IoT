//Atividade 15

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	int main() {
		
		setlocale(LC_ALL, "Portuguese");
		
		int potencia,  numero, expoente;
		
		printf("Informe a base: ");
		scanf("%d", &numero);
		
		printf("Informe o expoente: ");
		scanf("%d", &expoente);
		
		potencia = pow(numero, expoente);
		
		printf("O resultado da exponenciação é %d", potencia);
	}
