#include <stdio.h>

int main() {
	
	int valor_usuario, soma_valores = 0, media_valores = 0;
	
	printf("| Calcular a media de 10 valores\n\n");
	
	for (int i = 1; i <= 10; i++) {
		printf("- Insira o valor %d: ", i);
		scanf("%d", &valor_usuario);
		
		soma_valores += valor_usuario;
	}
	media_valores = soma_valores / 10;
	
 	printf("\n- A media dos valores inseridos e: %d", media_valores);
 
	return 0;
}
