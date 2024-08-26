//Atividade 18

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	int main() {
		
		setlocale(LC_ALL, "Portuguese");
		
			int numero1, numero2, resto, a, b, mmc;
			
			printf("Digite dois número: ");
			scanf("%d %d", &numero1, &numero2);
			
			a = numero1; b = numero2;
			do{
				resto = a % b;
				a = b;
				b = resto;
				mmc = numero1 * numero2 / a;				
			}
			while (resto!=0);
				printf("O MMC ente %d e %d é %d\n", numero1, numero2, mmc);		
			
	return 0;
}
		
