#include <stdio.h>

int main() {
	
	int valor_usuario, ind_numero = 1, contador = 0;
	float media = 0.0;
	
	printf("| Insira uma sequencia de valores e digite 0 para finalizar\n\n");
	
	do {
		printf("- Insira o valor %d: ", ind_numero);
		scanf("%d", &valor_usuario);
		
		if (valor_usuario == 0) {
			break;
		}
		
		if (valor_usuario % 2 == 0) {
			media = ((media * contador) + valor_usuario) / (contador + 1); // media dos valores pares;
			contador++;
		}
		
		ind_numero++;
	} while (1);
	
	printf("\n- A media dos valores pares inseridos e de: %.1f", media);
}
