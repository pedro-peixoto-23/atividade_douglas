#include <stdio.h>

int main() {
	
	int escolha_usuario, quant_litros;
	float valor_final;
	const float valor_gasolina = 1.2, valor_alcool = 0.9;
	
	printf("Escolha uma das opcoes abaixo\n- 0. Alcool\n- 1. Gasolina\n\n");
	printf("- Opcao desejada: ");
	scanf("%d", &escolha_usuario);
	
	printf("- Quantidade de litros: ");
	scanf("%d", &quant_litros);
	
	switch (escolha_usuario) {
	    
	    case 0: // escolheu alcool
	        if (quant_litros <= 20) {
			    valor_final = quant_litros * (valor_alcool * 0.97);
		    } else {
			    valor_final = quant_litros * (valor_alcool * 0.95);
		    }
		break;
		
		case 1: // escolheu gasolina
		    if (quant_litros <= 20) {
			    valor_final = quant_litros * (valor_gasolina * 0.96);
		    } else {
			    valor_final = quant_litros * (valor_gasolina * 0.94);
		    }
		break;
		
		default:
		    printf("\n- Voce inseriu uma opcao invalida!");
		break;
	}
	
	printf("\n- O valor total a ser pago e: R$%.2f", valor_final);
		
	return 0;
}