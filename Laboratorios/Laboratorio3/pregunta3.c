#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int sonIguales(int **mA, int **mB, int n, int m)
{
	int iguales = TRUE;
	for (int i = 0; i < n; i++)
	{
		int *filaA = *(mA + i);
		int *filaB = *(mB + i);
		for (int j = 0; j < m; j++)
		{
			if (*(filaA + j) != *(filaB + j))
			{
				iguales = FALSE;
				break;
			}
		}
	}

	return iguales;
}

int main()
{
	int n = 5;
	int m = 5;

	int **mA = (int **)malloc(sizeof(int *) * n);
	for (int i = 0; i < n; i++)
	{
		int *fila = (int *)malloc(sizeof(int) * m);
		*(mA + i) = fila;

		for (int j = 0; j < m; j++)
		{
			*(fila + j) = j;
		}
	}

	int **mB = (int **)malloc(sizeof(int *) * n);
	for (int i = 0; i < n; i++)
	{
		int *fila = (int *)malloc(sizeof(int) * m);
		*(mB + i) = fila;

		for (int j = 0; j < m; j++)
		{
			*(fila + j) = j;
		}
	}

	int iguales = sonIguales(mA, mB, n, m);

	if (iguales)
	{
		printf("Las matrices son iguales\n");
	}
	else
	{
		printf("Las matrices no son iguales\n");
	}

	return 0;
}