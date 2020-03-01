#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void buscarElemento(int **matriz, int n, int m, int buscado, int *x, int *y)
{
  int i, j;
  *x = -1;
  *y = -1;

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      if (*(*(matriz + i) + j) == buscado)
      {
        *x = i;
        *y = j;
        i = n;
        j = m;
      }
    }
  }
}

int main()
{
  srand(time(NULL));
  int **matriz, n, m, x, y, elemento;
  printf("Ingrese la cantidad de filas de la matriz: ");
  do
  {
    scanf("%i", &n);
    if (n <= 0) printf("Error, la dimension debe ser igual o superior a 1.\n");
  } while (n <= 0);

  printf("Ingrese la cantidad de columnas de la matriz: ");
  do
  {
    scanf("%i", &m);
    if (m <= 0) printf("Error, la dimension debe ser igual o superior a 1.\n");
  } while (m <= 0);

  matriz = (int **)malloc(sizeof(int *) * n);
  int i, j;
  for (i = 0; i < n; i++)
  {
    *(matriz + i) = (int *)malloc(sizeof(int) * m);
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      *(*(matriz + i) + j) = rand() % 100;

      printf("[%i]", *(*(matriz + i) + j));
    }
    printf("\n");
  }

  printf("\nIngrese el elemento a buscar: ");
  scanf("%i", &elemento);

  buscarElemento(matriz, n, m, elemento, &x, &y);

  if (x == -1 && y == -1)
    return printf("\nEl elemento ingresado no existe en la matriz.");
  printf("Las coordenadas del elemento son: i = %i, j = %i", x, y);
}