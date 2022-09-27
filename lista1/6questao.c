#include <stdio.h>

int main() {
	
	float kg_maca, kg_morango, preco_maca, preco_morango, valor_total;
	
	printf("| Tabela de precos");
	printf("\n| Ate 5Kg: Morango - R$2.00/Kg | Maca - R$1.50/Kg");
	printf("\n| Acima de 5Kg: Morango - R$1.80/Kg | Maca - R$1.10/Kg\n");	
	
	printf("\n| Insira quantos Kg de Maca voce esta levando: ");
	scanf("%f", &kg_maca);
	
	if (kg_maca <= 5) {
		preco_maca = 1.5 * kg_maca;
	} else {
		preco_maca = 1.1 * kg_maca;
	}
	
	printf("| Insira quantos Kg de Morango voce esta levando: ");
	scanf("%f", &kg_morango);
	
	if (kg_morango <= 5) {
		preco_morango = 2.0 * kg_morango;
	} else {
		preco_morango = 1.8 * kg_morango;
	}
	
	valor_total = preco_maca + preco_morango;
	
	if (valor_total > 25 || (kg_maca + kg_morango) > 8) {
		valor_total *= 0.90;
	}
	printf("\n- Valor total do Morango: R$ %.2f", preco_morango);
	printf("\n- Valor total da Maca: R$%.2f", preco_maca);
	printf("\n- Desconto sobre o valor total: R$%.2f", valor_total - (preco_maca + preco_morango));
	printf("\n- O valor final a ser pago e de R$%.2f", valor_total);
 
	return 0;
}
