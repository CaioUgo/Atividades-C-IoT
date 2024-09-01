//Atividade 41
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>

	void cifradeCesar(char *texto, int deslocamento){
		int i;
		
		for (i = 0; texto[i] != '\0'; i++){
			char caracter = texto[i];
			
			if (isupper(caracter)){
				texto[i] = ((caracter - 'A' + deslocamento)) + 'A';
			} 
			else if (islower(caracter)){
				texto[i] = ((caracter - 'a' + deslocamento)) + 'a';
			}
		}		
	}
	int main(){
	 	setlocale(LC_ALL, "Portuguese");
	 	
	 	int deslocamento = 3;
	 	char texto[50];
	 	
	 	printf("Digite o texto que precisa ser criptografado: ");
	 	fgets(texto, sizeof(texto), stdin);
	 	texto[strcspn(texto, "\n")] = '\0';
	 	
	 	cifradeCesar(texto, deslocamento);
	 	
	 	printf("\nTexto criptografado: %s", texto);
 	
	 return 0;
	 }
