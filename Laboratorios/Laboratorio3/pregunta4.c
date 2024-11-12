#include <stdio.h>

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

int main()
{
}