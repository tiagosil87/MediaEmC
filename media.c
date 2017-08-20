#include <stdio.h>

float fazMedia(float n1, float n2) {
	return (n1 + n2) / 2;
}

int main() {

	float n1, n2;

	printf("Calculadora de média\n\n");

	printf("Digite o primeiro número: ");
	scanf("%f", &n1);

	printf("Digite o segundo número: ");
	scanf("%f", &n2);
	
	printf("\nA média é: %.2f\n", fazMedia(n1, n2));

	return 0;
}
