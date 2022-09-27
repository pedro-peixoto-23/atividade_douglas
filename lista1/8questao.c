#include <stdio.h>

int main() {
	
	int numero;
	
	printf("| Insira o numero maximo do intervalo: ");
	scanf("%d", &numero);
	
	if (numero <= 0) {
	    printf("\n- Voce digitou um numero invalido para este programa!");
    } else {
        printf("\n- Numeros: ");

        for (int i = 1; i <= numero; i++) {
        printf("%d ", i);
        }
    }
 
	return 0;
}
