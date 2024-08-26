//Atividade 17

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	int main() {
		
		setlocale(LC_ALL, "Portuguese");
		
			int numero1, numero2, resto, a, b;
			
			printf("Digite dois número: ");
			scanf("%d %d", &numero1, &numero2);
			
			a = numero1; b = numero2;
			do{
				resto = a % b;
				a = b;
				b = resto;				
			}
			while (resto!=0);
				printf("O MDC ente %d e %d é %d\n", numero1, numero2, a);		
			
	return 0;
}
		
