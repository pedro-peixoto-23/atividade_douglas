#include <stdio.h>

int main() {
	
	int codigoProduto, qtdConsumida, resposta;
	float valorTotal = 0.0;
	
	printf(" -------------------------------------- \n");
	printf("|  Especificacao  |  Codigo  |  Preco  |\n");
	printf(" -------------------------------------- \n");
	printf("| Cachorro Quente |   100    |  1.20   |\n"); 
	printf("| Bauru Simples   |   101    |  1.30   |\n");
	printf("| Bauru com ovo   |   102    |  1.50   |\n");
	printf("| Hamburguer      |   103    |  1.20   |\n");
	printf("| Cheeseburguer   |   104    |  1.30   |\n");
	printf("| Refrigerante    |   105    |  1.00   |\n");
	printf(" -------------------------------------- \n");
	
	do {
		
		printf("---------------------------------");
		printf("\n| Codigo do produto: ");
		scanf("%d", &codigoProduto);
		
		printf("| Quantidade do produto: ");
		scanf("%d", &qtdConsumida);
		
		switch (codigoProduto) {
			
			case 100:
				valorTotal += qtdConsumida * 1.20;
			break;
			
			case 101:
				valorTotal += qtdConsumida * 1.30;
			break;
			
			case 102:
				valorTotal += qtdConsumida * 1.50;
			break;
			
			case 103:
				valorTotal += qtdConsumida * 1.20;
			break;
			
			case 104:
				valorTotal += qtdConsumida * 1.30;
			break;
			
			case 105:
				valorTotal += qtdConsumida * 1.00;
			break; 
			
		}
		
		printf("| Deseja inserir um novo produto (0- sim / 1- nao/)? ");
		scanf("%d", &resposta);
		printf("---------------------------------\n");		
		
	} while (resposta == 0);
	
	printf("---------------------------------");
	printf("\n- Valor total a ser pago: R$%.2f\n", valorTotal);
	printf("---------------------------------");
	
	return 0;
}
