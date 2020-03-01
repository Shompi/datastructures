#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Crear una matriz usando punteros y llenarla con numeros enteros.*/

int **crearMatriz_Int(int n, int m, int autoLlenado)
{
  int **Matriz;

  //Se reserva la memoria en relacion a la cantidad de filas de la matriz
  Matriz = (int **)malloc(sizeof(int *) * n);
  int i = 0, j = 0;

  for (i = 0; i < n; i++)
  {
    //Por cada posición en relación a i se reserva la cantidad de memoria dependiendo a la cantidad de columnas.
    *(Matriz + i) = (int *)malloc(sizeof(int) * m);
  }
  int valor;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      if (autoLlenado == 0)
      {
        scanf("%i", &valor);
        *(*(Matriz + i) + j) = valor;
      }
      else
      {
        *(*(Matriz + i) + j) = rand() % 10;
      }
    }
  }
  return Matriz;
}

int main()
{
  srand(time(NULL));
  int n, m, autoLlenado = 0;
  printf("Ingrese el largo de la matriz: ");
  do
  {
    scanf("%i", &n);
    if (n < 1)
      printf("Error, el valor debe ser mayor o igual a 1.\n");
  } while (n < 1);
  printf("Ingrese el alto de la matriz: ");
  do
  {
    scanf("%i", &m);
    if (m < 1)
      printf("Error, el valor debe ser mayor o igual a 1.\n");
  } while (m < 1);

  printf("\nQuiere autollenar la matriz?:\n0 = No\n1 = Si\nRespuesta: ");
  do
  {
    scanf("%i", &autoLlenado);
  } while (autoLlenado != 0 && autoLlenado != 1);
  int **pMatriz = crearMatriz_Int(n, m, autoLlenado);

  //Imprimir la matriz
  int i = 0, j = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++) //Obteniendo valores
      printf("%d\t", *(*(pMatriz + i) + j));
    printf("\n");
  }
  return 0;
}