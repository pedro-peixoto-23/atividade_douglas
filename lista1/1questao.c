// Escreva um algoritmo para ler um valor inteiro e escrever o seu antecessor.

#include <stdio.h>

int main() {
	
	int valor;
	
	printf("| Insira um valor inteiro: ");
	scanf("%d", &valor);
	
	printf("\n- Antecessor: %d\n- Sucessor: %d", valor - 1, valor + 1);
	
	return 0;
}