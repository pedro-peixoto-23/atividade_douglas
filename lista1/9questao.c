#include <stdio.h>

int main() {
	
	int valor_usuario;
	
	printf("| Tabuada\n\n");
	
	printf("| Insira um numero inteiro entre 1 e 10: ");
	scanf("%d", &valor_usuario);
 
 	if (valor_usuario < 1 || valor_usuario > 10) {
 		printf("\n- Programa terminado: digite apenas numeros entre 1 e 10.");
	} else {
		for (int i = 1; i <= 10; i++) {
			printf("%d x %d = %d\n", valor_usuario, i, valor_usuario * i);
		}
	}
 	
	return 0;
}
