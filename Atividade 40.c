//Atividade 40

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

char opcao[3][3] = {' '};

void Tabela () {
	
	printf("    %c | %c | %c\n",opcao[0][0], opcao[0][1], opcao[0][2]);
	printf("    --+---+--\n");
	printf("    %c | %c | %c\n",opcao[1][0], opcao[1][1], opcao[1][2]);
	printf("    --+---+--\n");
	printf("    %c | %c | %c\n",opcao[2][0], opcao[2][1], opcao[2][2]);
	
}

int Ganhador(char jogador1) {
	int contador;
	for (contador = 0; contador <= 9; contador++) {
		if ((opcao[contador][0] == jogador1 && opcao[contador][1] == jogador1 && opcao[contador][2] == jogador1) || 
		(opcao[0][contador] == jogador1 && opcao[1][contador] == jogador1 && opcao[2][contador] == jogador1)) {
			return 1;
		}
	}
	
	if ((opcao[0][0] == jogador1 && opcao[1][1] == jogador1 && opcao[2][2] == jogador1) || 
		(opcao[0][2] == jogador1 && opcao[1][1] == jogador1 && opcao[2][0] == jogador1)) {
			return 1;
	}
	
	return 0;
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
		
	char  jogador1 = 'X';
	int x, jogada, tentativa, i ,j;
	
	  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      opcao[i][j] = ' ';
    }
  }
	
	while (tentativa < 10) {

		
		system("cls");
		Tabela();
		printf("\njogador %c escolha uma posiçao (1-9): ", jogador1);
		scanf("%i",&jogada);
		tentativa = tentativa + 1;
		
		if (opcao[(jogada - 1) / 3][(jogada - 1) % 3] != ' ') {
            printf("\n Posição já ocupada! Tente novamente.\n");
            Sleep(1000);
            tentativa--;
            continue; 
        }
		
		switch(jogada) {
			case 1 :
			opcao[0][0] = jogador1;
			break;
			
			case 2 :
			opcao[0][1] = jogador1;
			break;
			
			case 3 :
			opcao[0][2] = jogador1;
			break;
			
			case 4 :
			opcao[1][0] = jogador1;
			break;
			
			case 5 :
			opcao[1][1] = jogador1;
			break;
			
			case 6 :
			opcao[1][2] = jogador1;
			break;
			
			case 7 :
			opcao[2][0] = jogador1;
			break;
			
			case 8 :
			opcao[2][1] = jogador1;
			break;
			
			case 9 :
			opcao[2][2] = jogador1;
			break;
			
			default :
			printf("Posiçao Invalida");
			tentativa--;
			break;
		}
				
		Ganhador(jogador1);
		
		if (Ganhador(jogador1)) {
			system("cls");
			Tabela();
			printf("O ganhador foi %c",jogador1);
			return 0;
		}
		
		jogador1 = (jogador1 == 'X') ? 'O' : 'X';
	}
	return 0;
}
