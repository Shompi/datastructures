#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float promedio(int **matriz, int n, int m)
{
	int suma = 0;
	int total = n * m;
	for (int i = 0; i < n; i++)
	{
		int *fila = *(matriz + i);

		for (int j = 0; j < m; j++)
		{
			suma += *(fila + j);
		}
	}

	return (float)suma / (float)total;
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

int main()
{
	srand(time(NULL));

	int n = 3;
	int m = 3;
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

	imprimir_matriz(matriz, n, m);
	float prom = promedio(matriz, n, m);
	printf("El promedio de la matriz es: %.2f\n", prom);
	return 0;
}