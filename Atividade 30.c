//Atividade 30

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

	int main() {
		setlocale(LC_ALL, "Portuguese");
			
		char palavra[30];
		
		printf("Digite um número: ");
		scanf("%s", &palavra);
		
		int x = atoi(palavra);
		
		printf("%d", x);
	
	
		
	}
