//Atividade 42
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <time.h>

	int main(){
	 	setlocale(LC_ALL, "Portuguese");		
	 	
	 	srand(time(NULL));
	 	
	 	int i, quant;
	 	
	 	
	 	printf("Informe a quantidade de números aleatórios: ");
	 	scanf("%d", &quant);
	 	
	 	for (i=0; i < quant; i++){
	 		int  aleatorio = (rand() % 100) + 1;
			printf("%d ", aleatorio);
		 }	 
		 return 0;		 	
	}
	
