#include <stdio.h>

int main() {
	
	float ind_poluicao;
	
	printf("| Insira o indice de poluicao (0.05 - 0.25): ");
	scanf("%f", &ind_poluicao);
	
	if (ind_poluicao < 0.3) {
		printf("\n- Indice de poluicao aceitavel!");
	} else if (ind_poluicao < 0.4) { // maior ou igual a 0.3 e menor que 0.4
		printf("\n- Grupo 1: seu indice de poluicao esta em %f e e necessario a suspensao das atividades!", ind_poluicao);
	} else if (ind_poluicao < 0.5) { // maior ou igual a 0.4 e menor que 0.5
		printf("\n- Grupo 1 e 2: seu indice de poluicao esta em %f e e necessario a suspensao das atividades!", ind_poluicao);
	} else { // maior ou igual a 0.5
		printf("\n- Grupo 1, 2 e 3: seu indice de poluicao esta em %f e e necessario a suspensao das atividades!", ind_poluicao);
	}
 
	return 0;
}
