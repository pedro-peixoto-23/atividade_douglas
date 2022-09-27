#include <stdio.h>

int main() {
	
	float salario, maior_salario = 0.0, soma_salario = 0.0;
	int numero_filhos, soma_filhos = 0, cont_salario100 = 0, contador_pessoas = 0, ind_pessoas = 1;
	
	printf("| Insira os dados e insira um salario negativo para finalizar\n");
	
	do {
		printf("\n- Insira o salario (hab. %d): R$", ind_pessoas);
		scanf("%f", &salario);
		
		if (salario >= 0) {
			soma_salario += salario;
			
			if (salario > maior_salario) {
				maior_salario = salario;
			}
			 
			if (salario <= 100) {
				cont_salario100++;
			}
			
			printf("- Insira o numero de filhos (hab. %d): ", ind_pessoas);
			scanf("%d", &numero_filhos);
			
			soma_filhos += numero_filhos;
		
			contador_pessoas++;
			ind_pessoas++;
		}
		
	} while (salario >= 0);
 	
 	float med_salario = soma_salario / contador_pessoas;
 	float med_filhos = (float) soma_filhos / contador_pessoas;
 	
 	float per_salario100 =  ((float) cont_salario100 / contador_pessoas) * 100;
 	
 	printf("\n\n| Dados da pesquisa");
 	printf("\n\n- Media salarial da populacao: R$%.2f", med_salario);
 	printf("\n- Media de filhos por pessoa: %.1f", med_filhos);
 	printf("\n- Maior salario da populacao entrevistada: R$%.2f", maior_salario);
 	printf("\n- Percentual de pessoas com salario ate R$100: %.1f por cento", per_salario100);
 	
	return 0;
}