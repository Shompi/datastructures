#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **crearMatriz_Int(int n, int m, int autoLlenado)
{

	int **columnas = (int **)malloc(sizeof(int *) * n);

	for (int i = 0; i < m; i++)
	{
		*(columnas + i) = (int *)malloc(sizeof(int) * m);
	}

	if (autoLlenado > 0)
	{
		for (int i = 0; i < n; i++)
		{
			int *fila = *(columnas + i);

			for (int j = 0; j < m; j++)
			{
				*(fila + j) = rand() % 20;
			}
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			int *fila = *(columnas + i);

			for (int j = 0; j < m; j++)
			{
				printf("Ingrese el numero: ");
				*(fila + j) = scanf("%i", fila + j);
			}
		}
	}

	return columnas;
}

void imprimir_matriz(int n, int m, int **matriz)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("[%i]", *(*(matriz + i) + j));
		}
		printf("\n");
	}
}

int main()
{
	time(NULL);

	int n = 5;
	int m = 5;
	int autoLlenado = 1;

	int **matriz = crearMatriz_Int(n, m, autoLlenado);

	imprimir_matriz(n, m, matriz);
	return 0;
}