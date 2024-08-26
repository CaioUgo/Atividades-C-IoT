//Atividade 16

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 30
int main (void){


    char palavra[tam], palavra_copia[tam];
    int len, i=0;

    printf("Digite uma palavra: ");
    scanf("%s",palavra);

    len = strlen(palavra);

    for(i = 0 ; i <= strlen(palavra) ; i++){
        palavra_copia[i] = palavra[len-1];
        len--;
    }
    palavra_copia[i]='\0';
    printf("\nPalavra digitada   : %s\n", palavra);
    printf("Palavra comparacao : %s\n",palavra_copia);

    for(int x = 0 ; x < strlen(palavra) ; x++){
        if(palavra[x] != palavra_copia[x]){
            printf("Nao eh palindroma...\n");
            break;
        }
        else{
            printf("EH PALINDROMA!\n");
            break;
        }
    }

	return 0;
}
