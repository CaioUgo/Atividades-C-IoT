//Atividade 32

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

	int main() {
		setlocale(LC_ALL, "Portuguese");
	
		int i, j, contador, menor, quant;
		
		printf("Informe o tamanho do vetor: ");
		scanf("%d", &quant);
		
		int selectionsort[i];
		
		printf("\n");
			
		for (i=0; i<quant; i++){
			printf("Digite o número da posição %d: ", i);
			scanf("%d", &selectionsort[i]);			
		}
		
		for (i=0; i<quant; i++){
			menor=i;
				for (j=i+1; j<quant; j++)
					if (selectionsort[j] < selectionsort[menor])
						menor =j;
				
				int aux = selectionsort[i];
				selectionsort[i] = selectionsort[menor];
				selectionsort[menor] = aux;
		}		
			printf("\n VETOR ORDENADO: ");
		for (i=0; i<quant; i++){
			printf("%d ", selectionsort[i]);
		}

return 0;
	}
