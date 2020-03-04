#include <stdio.h>
#include <stdlib.h>

//No es posible modificar la función,
//y todas las variables declaradas deben ser
//punteros.

void potencia_r(int *a, int *b, int *r)
{
  if (*b == 0)
    return 1;

  *r = *r * *a;
  *b = *b - 1;
  return potencia_r(a, b, r);
}

int main()
{ 
  //Implementar una funcion que calcule la potencia
  //de un número (RECURSIVO).

  printf("Ingrese la base y el exponente: ");
  int a = 1, b = 1;
  scanf("%i %i", &a, &b);

  int resultado = 1;

  potencia_r(&a, &b, &resultado);

  printf("\nEl resultado es: %i\n", resultado);
}