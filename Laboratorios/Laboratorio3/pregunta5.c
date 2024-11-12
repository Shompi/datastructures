#include <stdio.h>

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

int main()
{
	// Falta completar main
}
