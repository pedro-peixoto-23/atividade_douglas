#include <stdio.h>

int main() {
	
	float ind_poluicao;
	
	printf("| Insira o indice de poluicao: ");
	scanf("%f", &ind_poluicao);
	
	if (ind_poluicao >= 0.05 && ind_poluicao <= 0.25) { // de 0.05 ate 0.25
		printf("\n- Indice de poluicao aceitavel!");
	} else if (ind_poluicao >= 0.3 && ind_poluicao < 0.4) { // de 0.3 ate 0.39
		printf("\n- As empresas do grupo 1 devem suspender as atividades!");
	} else if (ind_poluicao >= 0.4 && ind_poluicao < 0.5) { // de 0.4 ate 0.49
		printf("\n- As empresas do grupo 1 e 2 suspender as atividades!");
	} else if (ind_poluicao >= 0.5) { // de 0.5 em diante
		printf("\n- As empresas do grupo 1, 2 e 3 devem suspender as atividades!");
	}
 
	return 0;
}
