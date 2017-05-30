#include <stdio.h>

int main()
{
	char comando;
	int n1, n2, result;

	printf("A calculadora está pronta para uso!\n");

	printf("Por favor digite o sinal respectivo da operação que você deseja fazer.\n");

	scanf("%c", &comando);

	if(comando == '+')
	{
		printf("Digite os números para a soma.\n");
		scanf("%d %d", &n1, &n2);

		result = n1 + n2;

		printf("O resultado da soma é %d\n", result);
		scanf("");
	}

	else if(comando == '-')
	{
		printf("Digite os números para a subtração.\n");
		scanf("%d %d", &n1, &n2);

		result = n1 - n2;

		printf("O resultado da subtração é %d\n", result);
		scanf("");
	}

	else if(comando == '*')
	{
		printf("Digite os números para a multiplicação.\n");
		scanf("%d %d", &n1, &n2);

		result = n1 * n2;

		printf("O resultado da multiplicação é %d", result);
		scanf("");
	}


	return 0;
}