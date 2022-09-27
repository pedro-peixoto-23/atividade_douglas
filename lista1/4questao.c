#include <stdio.h>

int main() {
	
	char nome_time1[15], nome_time2[15];
	int gols_time1, gols_time2;
	
	printf("- Nome do time 1: ");
	scanf("%s", nome_time1); // nao se usa "&" com strings
	printf("- Quantidade de gols do %s: ", nome_time1);
	scanf("%d", &gols_time1);
	
	printf("\n- Nome do time 2: ");
	scanf("%s", nome_time2); // nao se usa "&" com strings
	printf("- Quantidade de gols do %s: ", nome_time2);
	scanf("%d", &gols_time2);
		
	if (gols_time1 > gols_time2) {
		printf("\n- O %s ganhou!", nome_time1);
	} else if (gols_time2 > gols_time1) {
		printf("\n- O %s ganhou!", nome_time2);
	} else {
		printf("\n- Ocorreu um empate!");
	}
	
	printf("\n- Placar: (%s) %d x %d (%s)", nome_time1, gols_time1, gols_time2, nome_time2);
	
	return 0;
}