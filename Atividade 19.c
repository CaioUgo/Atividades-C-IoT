//Atividade 19	

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	int main() {
		
		setlocale(LC_ALL, "Portuguese");
		
			int numero, soma = 0, i;
			
			printf("Informe um número maior que zero: ");
			scanf("%d", &numero);
			
			for (i = 1; i < numero; i ++){
	
			if (numero % i == 0){
				soma += i;
			}
	}
			if (soma == numero){
				printf("%d é um número perfeito", numero);
			} else{
				printf("%d não é um número perfeito", numero);
			}
	
			
	return 0;
}
				
