#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char caracteres[] = "amszmcvljd";

char *ordenamientoBurbuja(char *caracteres)
{

	char *copia = (char *)malloc(sizeof(char) * strlen(caracteres));

	for (int i = 0; i < strlen(caracteres); i++)
	{
		*(copia + i) = *(caracteres + i);
	}

	for (int i = 0; i < strlen(copia) - 1; i++)
	{

		for (int j = 0; j < strlen(copia) - 1 - i; j++)
		{
			if (*(copia + j) > *(copia + j + 1))
			{
				char aux = *(copia + j);
				*(copia + j) = *(copia + j + 1);
				*(copia + j + 1) = aux;
			}
		}
	}

	return copia;
}

int main()
{
	printf("string sin ordenar: %s\n", caracteres);

	char *copiaOrdenada = ordenamientoBurbuja(caracteres);

	printf("string ordenada: %s\n", copiaOrdenada);
	printf("string original: %s\n", caracteres);
	return 0;
}