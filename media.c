#include <stdio.h>

int main() {

	float n1, n2;

	printf("Calculadora de média\n\n");

	printf("Digite o primeiro número: ");
	scanf("%f", &n1);

	printf("Digite o segundo número: ");
	scanf("%f", &n2);

	float media = (n1 + n2) / 2;

	printf("\nA média é: %.2f\n", media);

	return 0;
}
