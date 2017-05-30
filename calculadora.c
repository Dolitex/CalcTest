#include <stdio.h>

int main()
{
	char comando;

	printf("A calculadora está pronta para uso!\n");

	printf("Por favor digite o sinal respectivo da operação que você deseja fazer.\n");

	scanf("%c", &comando);

	if(comando == '+')
	{
		int n1,n2;
		printf("Digite os números para a soma.\n");
		scanf("%d %d", &n1, &n2);

		int result = n1 + n2;

		printf("O resultado da soma é %d", result);
	}


	return 0;
}