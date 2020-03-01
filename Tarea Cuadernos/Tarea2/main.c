#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int **transformar(char **matriz, int n, int m)
{
  int **matrizTemp = NULL, i, j;
  matrizTemp = (int **)malloc(sizeof(int *) * n);
  for (i = 0; i < n; i++)
  {
    *(matrizTemp + i) = (int *)malloc(sizeof(int) * m);
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      *(*(matrizTemp + i) + j) = *(*(matriz + i) + j);
    }
  }
  return matrizTemp;
}
/*Ejercicio 2*/
/*Ejercicio 3*/
int *reducirMatriz(int **matriz, int n, int m)
{
  //n = filas;
  int *sumaFilas = NULL;
  int i, j, suma;

  sumaFilas = (int *)malloc(sizeof(int) * n);
  printf("\nSuma por filas.");
  printf("\nMatriz recibida:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("[%i]", *(*(matriz + i) + j));
    }
    printf("\n");
  }

  for (i = 0; i < n; i++)
  {
    suma = 0;
    for (j = 0; j < m; j++)
    {
      suma = suma + *(*(matriz + i) + j);
    }
    *(sumaFilas + i) = suma;
  }
  return sumaFilas;
}

int main()
{
  /*Ejercicio 1*/
  srand(time(NULL));
  char **matrizChar = NULL;
  int i, j, n, m;
  do
  {
    printf("Ingrese la cantidad de filas de la matriz: ");
    scanf("%i", &n);
    if (n <= 0)
      printf("Error: El valor debe ser mayor o igual a 0.\n");
  } while (n <= 0);
  do
  {
    printf("Ingrese la cantidad de columnas de la matriz: ");
    scanf("%i", &m);
    if (m <= 0)
      printf("Error: El valor debe ser mayor o igual a 0.");
  } while (m <= 0);

  /*Reserva de Memoria*/
  matrizChar = (char **)malloc(sizeof(char *) * n);
  for (i = 0; i < n; i++)
    *(matrizChar + i) = (char *)malloc(sizeof(char) * m);

  /*Llenado de la matriz*/
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
      *(*(matrizChar + i) + j) = rand() % 57 + 'A';

  int **matrizInt = NULL;
  matrizInt = transformar(matrizChar, n, m);
  /*Impresion de las matrices*/
  printf("\nMatriz de tipo Char:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
      printf("[%c]", *(*(matrizChar + i) + j));

    printf("\n");
  }
  printf("\nMatriz de tipo Int:\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
      printf("[%i]", *(*(matrizInt + i) + j));

    printf("\n");
  }

  /*Ejercicio 3*/
  int *sumaMatriz = NULL, **matrizASumar = NULL;
  //Reservo la memoria
  matrizASumar = (int **)malloc(sizeof(int *) * n);
  for(i = 0; i < n; i++){
    *(matrizASumar + i) = (int *)malloc(sizeof(int) * m);
  }
  //Relleno la matriz
  for(i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      *(*(matrizASumar + i) + j) = rand() % 5;
    }
  }
  sumaMatriz = reducirMatriz(matrizASumar, n ,m);
  printf("\nSuma de las filas\n");
  for (i = 0; i < n; i++)
  {
    printf("[%i] ", *(sumaMatriz + i));
  }
  printf("\n");
  return 0;
}