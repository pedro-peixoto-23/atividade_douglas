#include <stdio.h>

int main() {
	
	int numero;
	
	printf("Insira o numero maximo do intervalo: ");
	scanf("%d", &numero);
	
	printf("\nNumeros: ");
	
	for (int i = 1; i <= numero; i++) {
		printf("%d ", i);
	}
 
	return 0;
}
