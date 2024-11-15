#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calcularParImpar(int **matriz, int n, int m, int *par, int *impar)
{

	for (int i = 0; i < n; i++)
	{
		int *fila = *(matriz + i);

		for (int j = 0; j < m; j++)
		{
			if (*(fila + j) % 2 == 0)
			{
				*(par) += 1;
			}
			else
			{
				*(impar) += 1;
			}
		}
	}
}

void imprimir_matriz(int **matriz, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		int *fila = *(matriz + i);
		for (int j = 0; j < m; j++)
		{
			printf("[%i]", *(fila + j));
		}
		printf("\n");
	}
}

void free_memory(int **matriz, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		int *fila = *(matriz + i);
		free(fila);
		free(matriz + i);
	}
}

int main()
{
	srand(time(NULL));

	int n = 10;
	int m = 10;
	int **matriz = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < m; i++)
	{
		*(matriz + i) = (int *)malloc(sizeof(int) * m);
	}

	for (int i = 0; i < n; i++)
	{
		int *fila = *(matriz + i);
		for (int j = 0; j < m; j++)
		{
			*(fila + j) = rand() % 5 + 1;
		}
	}

	int *pares = (int *)malloc(sizeof(int));
	int *impares = (int *)malloc(sizeof(int));

	calcularParImpar(matriz, n, m, pares, impares);

	imprimir_matriz(matriz, n, m);

	printf("Numeros pares: %i\n", *(pares));
	printf("Numeros impares: %i\n", *(impares));
	free_memory(matriz, n, m);
	return 0;
}
