#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumarArreglo(int *v, int n)
{
  if (n == 0)
    return 0;

  printf("[%d] + ", *v);
  return *(v) + sumarArreglo(v + 1, n - 1);
}

int main()
{
  srand(time(NULL));
  // Implementar una función que reciba un arreglo de enteros.
  // Retornar la suma total de los valores contenidos.

  //Observación: La implementación debe ser recursiva.

  int i, n;

  printf("Ingrese el largo del arreglo: ");
  scanf("%d", &n);

  int *vector = (int *)malloc(sizeof(int) * n);
  for (i = 0; i < n; i++)
    *(vector + i) = rand() % 10;

  int sumaTotal = sumarArreglo(vector, n);

  printf("\nLa suma total del arreglo es: %d", sumaTotal);

  return (0);
}