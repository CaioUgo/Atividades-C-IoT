//Atividade 6

#include <stdio.h>

	int main() {
		
		float area, raio;
		
		printf("Informe o raio do circulo: ");
		scanf("%f", &raio);
		
		area = 3.14 * (raio * raio);
		
		printf("A area do circulo e %.2f ", area);
		
		return 0;
	}
