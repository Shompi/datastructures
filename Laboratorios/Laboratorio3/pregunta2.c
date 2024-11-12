#include <stdio.h>
#include <stdlib.h>

char **crearMatriz_char(int n)
{
	// n es la cantidad de LINEAS DE TEXTO a almacenar
	int capacidad = 100;

	char **texto = (char **)malloc(sizeof(char *) * n);

	for (int i = 0; i < n; i++)
	{
		*(texto + i) = (char *)malloc(sizeof(char) * capacidad);
	}

	for (int i = 0; i < n; i++)
	{
		char *fila = *(texto + i);
		printf("Ingrese una palabra: ");
		scanf("%s", fila);
	}

	return texto;
}

int main()
{
	int n = 2;
	char **texto = crearMatriz_char(n);

	for (int i = 0; i < n; i++)
	{
		printf("%s\n", *(texto + i));
	}

	return 0;
}