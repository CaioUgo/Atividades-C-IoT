//Atividade 7

#include <stdio.h>

	int main() {
		
		float celsius, fahrenheit;
		
		printf("Informe a temperatura em Celsius: ");
		scanf("%f", &celsius);
		
		fahrenheit = (celsius * 9/5) + 32;
		
		printf("A conversão e de %.2f Fahrenheit", fahrenheit);
		
	}
