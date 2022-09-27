#include <stdio.h>

int main() {
	
	int valor_usuario, ind_numero = 1, contador_pares = 0, soma_pares = 0;
	
	printf("| Insira uma sequencia de valores e digite 0 para finalizar\n\n");
	
	do {
		printf("- Insira o valor %d: ", ind_numero);
		scanf("%d", &valor_usuario);
		
		if (valor_usuario == 0) {
			break;
		}
		
		if (valor_usuario % 2 == 0) {
			soma_pares += valor_usuario;
			contador_pares++;
		}
		
		ind_numero++;
		
	} while (1);
	
	float media = (float) soma_pares / contador_pares;
	
	printf("\n- A media dos valores pares inseridos e de: %.1f", media);
}
