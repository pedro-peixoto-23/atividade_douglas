#include <stdio.h>

int main() {
	
	int a = 10, b = 20, p;
	
	p = a;
	a = b;
	b = p;
	
	printf("Valor de a: %d", a);
	printf("\nValor de b: %d", b);
	
	return 0;
}
