#include <stdio.h>
#include <stdlib.h>

//No es posible modificar la función,
//y todas las variables declaradas deben ser
//punteros.

void potencia(int *a, int *b, int *r)
{
  int *i = (int *)malloc(sizeof(int));

  for (*i = 0; *i < *b; *i = *i + 1) {
    *r = *r * *a;
  }
}

int main()
{
  //Implementar una funcion que calcule la potencia
  //de un número.

  printf("Ingrese la base y el exponente: ");
  int a = 1, b = 1;
  scanf("%i %i", &a, &b);

  int resultado = 1;

  potencia(&a, &b, &resultado);

  printf("\nEl resultado es: %i\n", resultado);
}