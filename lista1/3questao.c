#include <stdio.h>

int main() {
	
	float preco_maca;
	int num_macas;
	
	printf("| Insira quantas macas voce comprou: ");
	scanf("%d", &num_macas);
	
	if (num_macas < 12) preco_maca = 1.30;
	else preco_maca = 1.0;
	
	printf("\n- Preco total: R$%.2f", preco_maca * num_macas);
	
	
	return 0;
}