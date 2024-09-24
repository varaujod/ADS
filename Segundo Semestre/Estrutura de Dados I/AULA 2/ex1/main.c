#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int expoente, i;
	float base, resultado = 1;
	
	printf("Digite o valor da base: \n");
	scanf("%f", &base);
	
	printf("Digite o valor do expoente: \n");
	scanf("%d", &expoente);
	
	for(i = 0; i < expoente; i++){
		resultado *= base;
	}
	
	printf("O resultado sera de: %.1f", resultado);
	
	return 0;
}