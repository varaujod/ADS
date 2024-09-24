#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int maior, menor, i, qtdEscolhida;
	
	printf("Escolha a Quantidade de numeros que ira entrar: \n");
	scanf("%d", &qtdEscolhida);
	
	int numeros[qtdEscolhida];

	printf("Digite %d numeros: \n", qtdEscolhida);
	
	for(i = 0; i < qtdEscolhida; i++){
		printf("Elemento %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	maior = numeros[0];
	menor = numeros[0];
	
	for(i = 1; i < qtdEscolhida; i++){
		if(numeros[i] < menor){
			menor = numeros[i];
		}
		
		else if(numeros[i] > maior){
			maior = numeros[i];
		}
	}
	
	printf("O maior numero da sequencia sera: %d\n", maior);
	printf("O menor numero da sequencia sera: %d\n", menor);
	
	return 0;
}
