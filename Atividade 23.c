//Atividade 23

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<time.h>

		int main() {
				setlocale(LC_ALL, "Portuguese");
				
				int i, number, random;
				
				srand(time(NULL));
				
				random = rand() %100;
				
				printf("JOGO DA ADIVINHAÇÃO\n Escolha um numero de 0 a 100: ");
				
				while (number != random){
					scanf("%d", &number);
					if (number < random){
						printf("Muito baixo\n");
					}
					if (number > random){
						printf("Muito alto\n");
					}
					if (number == random){
						printf("Você acertou");
					}
				}	  
}
