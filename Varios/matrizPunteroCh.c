#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
2. Implementar una función que permita crear y llenar una matriz char.
Observación 1: “int n” representa la cantidad de líneas de texto que
almacenará.
Observación 2: Asuma que cada fila de la matriz tiene una capacidad de 100.
Observación 3: Cada fila de la matriz deberá ser llenada con un texto
ingresado por teclado.
char** crearMatriz_Char(int n)
Imprima el resultado en el main.
*/
char **crearMatriz_Char(int n)
{
  char **Matriz;
  char *palabra;
  Matriz = (char **)malloc(sizeof(char *) * n);
  palabra = (char *)malloc(sizeof(char) * 100);

  int i = 0, j = 0;
  for (i = 0; i < n; i++)
  {
    *(Matriz + i) = (char *)malloc(sizeof(char) * 100);
  }
  int largo = 0;
  for (i = 0; i < n; i++)
  {
    do
    {
      printf("Ingrese la palabra %i: ", i);
      scanf("%s", palabra);
      largo = strlen(palabra);
      if (largo > 100)
        printf("La palabra no puede exceder los 100 caracteres.\n");
    } while (largo > 100);
    strcpy(*(Matriz + i), palabra);
  }
  return Matriz;
}

int main()
{
  int n;
  char b;
  printf("Ingrese la cantidad de palabras que quiere ingresar: ");
  scanf("%i", &n);
  char **pMatriz = crearMatriz_Char(n);

  int i = 0, j = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; *(*(pMatriz + i) + j) != '\0'; j++) //Obteniendo valores
      printf("%c", *(*(pMatriz + i) + j));
    printf("\n");
  }
  return 0;
}