#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float adicao(float num1, float num2){
	float resposta;
	resposta = num1 + num2;
	return resposta;
}

float subtracao(float num1, float num2){
	float resposta;
	resposta = num1 - num2;
	return resposta;
}

float multiplicacao(float num1, float num2){
	float resposta;
	resposta = num1 * num2;
	return resposta;
}

float divisao(float num1, float num2){
	float resposta;
	resposta = num1 / num2;
	return resposta;
}

int main(int argc, char *argv[]) {
	float n1, n2, resposta;
	int op;
	char opcao, mensagem;
	
	do{
	printf("Digite o primeiro numero: \n");
	scanf("%f", &n1);
	
	printf("Digite o segundo numero: \n");
	scanf("%f", &n2);
	
	printf("Digite uma operacao para continuar: \n 1 = Adicao\n 2 = Subtracao\n 3 = Multiplicacao\n 4 = Divisao\n");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			resposta = adicao(n1, n2);
			break;
		
		case 2:
			resposta = subtracao(n1, n2);
			break;
			
		case 3:
			resposta = multiplicacao(n1, n2);
			break;
		
		case 4: 
			if(n1 == 0 || n2 == 0){
				system("cls");
				printf("Nao foi possivel completar sua operacao!\n");
				
				printf("Deseja fazer novamente? S ou N\n");
				scanf(" %c", &opcao);
				system("cls");
				continue;
			}	
			resposta = divisao(n1, n2);
			break;
			
		default:
			printf("Opcao invalida, tente novamente!");
			continue;
			
	}
	
	system("cls");
	
	printf("O resultado sera %.2f\n\n", resposta);
	
	printf("Deseja fazer novamente? S ou N\n");
	scanf(" %c", &opcao);
	
	system("cls");
	
	} while (opcao == 'S' || opcao == 's');
	
	return 0;
}