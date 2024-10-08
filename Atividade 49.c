//Atividade 49

#include <stdio.h>
#include <string.h>
#include <locale.h>

void searchPattern(const char *text, const char *pattern) {
     setlocale(LC_ALL, "Portuguese");
	
	int textLen = strlen(text);
    int patternLen = strlen(pattern);

    for (int i = 0; i <= textLen - patternLen; i++) {
        int j;
        for (j = 0; j < patternLen; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == patternLen) {
            printf("Padrão encontrado na posição %d\n", i);
        }
    }
}

int main() {
     setlocale(LC_ALL, "Portuguese");
	
	char text[100], pattern[100];

    printf("Digite o texto: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("Digite o padrão: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0';

    searchPattern(text, pattern);

    return 0;
}
