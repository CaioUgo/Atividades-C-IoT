//Atividade 33

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

	int main() {
		setlocale(LC_ALL, "Portuguese");
		
		int aux, i, j, quant;
		
		printf("Informe o tamanho do vetor: ");
		scanf("%d", &quant);
		
		int vetor[i];
		
		printf("\n");
		for(i=0; i < quant; i++){
			printf("DIgite o número na posição %d: ", i);
			scanf("%d", &vetor[i]);
		}
		
		for (i=1; i < quant; i++){
			j=i;
			aux=vetor[j];
				while (j>0 && aux < vetor[j-1]){
					vetor[j] = vetor[j-1];
					j--; 
				}
			vetor[j]=aux;
				}
		printf("\nO vetor ordenado é: ");
		for(i=0; i<quant; i++){
			printf("%d ", vetor[i]);
		}
	
	return 0;
	}
