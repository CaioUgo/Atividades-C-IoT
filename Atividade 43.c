//Atividade 43

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void longestIncreasingSubsequence(int arr[], int size) {
    setlocale(LC_ALL, "Portuguese");
	if (size == 0) {
        printf("Array vazio.\n");
        return;
    }

    int *lis = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        lis[i] = 1;
    }

    for (int i = 1; i < size; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
    }

    int maxLength = 0;
    for (int i = 0; i < size; i++) {
        if (lis[i] > maxLength) {
            maxLength = lis[i];
        }
    }

    printf("Maior subsequência crescente:\n");
    int* sequence = (int*)malloc(maxLength * sizeof(int));
    int index = maxLength - 1;

    for (int i = size - 1; i >= 0; i--) {
        if (lis[i] == maxLength) {
            sequence[index--] = arr[i];
            maxLength--;
        }
    }

     for (int i = 0; i < maxLength; i++) {
        printf("%d ", sequence[i]);
    }
    printf("\n");

    free(lis);
    free(sequence);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int size;
	setlocale(LC_ALL, "Portuguese");
	At3
    printf("Digite o tamanho do array: ");
    scanf("%d", &size);

    int* array = (int*)malloc(size * sizeof(int));

    printf("Digite %d elementos:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("Array fornecido: \n");
    printArray(array, size);

    longestIncreasingSubsequence(array, size);

    free(array);

    return 0;
}
