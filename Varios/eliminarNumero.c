#include <stdio.h>
#include <stdlib.h>

/*
Implementar una función que elimine todos los números iguales a eliminar.
Retorne la nueva dimensión del arreglo.
*/
//OBS: n representa la dimension del arreglo
int eliminarNumeros(int *v, int n, int eliminar)
{
  int nDimension = 0, i, j;
  for (i = 0; i < n; i++)
  {
    if (*(v + i) == eliminar)
    {
      for (j = i; j < n - 1; j++)
      {
        *(v + j) = *(v + j + 1);
      }
      nDimension++;
    }
  }
  return (n - nDimension);
}
void imprimirArreglo(int *v, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("[%i] ", *(v + i));
  }
}
int main()
{
  int *v = NULL, n, eliminar, i;
  printf("Ingrese la dimension del arreglo: ");
  scanf("%i", &n);

  v = (int *)malloc(sizeof(int) * n);
  for (i = 0; i < n; i++)
  {
    *(v + i) = i % 2;
  }
  imprimirArreglo(v, n);
  printf("Ingrese el numero que quiere eliminar: ");
  scanf("%i", &eliminar);
  int nuevaDimension = eliminarNumeros(v, n, eliminar);
  printf("La nueva dimension del arreglo es: %i\n", nuevaDimension);
  imprimirArreglo(v, nuevaDimension);
  return 0;
}