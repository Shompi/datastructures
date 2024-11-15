#include <stdio.h>
#include <stdlib.h>

void potencia(int *a, int *b, int *r)
{
	int *i = (int *)malloc(sizeof(int));

	// Cuidado con la última parte del for, no se puede hacer:
	// *(i)++, *i++, (*i ++).

	for (*i = 0; *i < *b; *i = *i + 1)
	{
		printf("%i\n", *i);
		*r = *r * *a;
	}
}

int main()
{
	/* 5. Implementar una función que calcule la potencia de un número.
Ejecute su función en el Main e imprima el resultado obtenido.
Restricción 1: Para todas las declaraciones de variables que se utilicen dentro de su
función deberán ser punteros.
Restricción 2: Utilice el siguiente prototipo de función. (No es posible modificar)
Observación: En el argumento int *r debe guardar el resultado. */

	// int a, b, resultado = 1;
	int *a = NULL, *b = NULL, *resultado = NULL;

	a = (int *)malloc(sizeof(int));
	b = (int *)malloc(sizeof(int));
	resultado = (int *)malloc(sizeof(int));
	printf("Ingrese base y exponente: ");
	// scanf("%i %i", &a, &b);
	scanf("%i %i", a, b);

	// potencia(&a, &b, &resultado);
	potencia(a, b, resultado);
	printf("Resultado: %i", resultado);

	return 0;
}