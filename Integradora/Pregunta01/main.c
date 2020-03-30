#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkDuplicate(int *a, int an, int num)
{
  int i;
  for (i = 0; i < an; i++)
    if (*(a + i) == num)
      return 1;

  return 0;
}

void arrayPush(int *a, int valor, int index)
{
  *(a + index) = valor;
}

int *generarArrayComun(int *a, int an, int *b, int bn, int *nNuevo)
{
  //Retornar solo los numeros que se encuentran en ambos arreglos,
  //Y no entregar repeticiones.

  //Creo un arreglo temporal en el que "Empujaré" los números que cumplan la condición.
  int tempSize = an + bn;
  int *temp = (int *)malloc(sizeof(int) * tempSize);
  int tempIndex = 0;
  int i, j;

  for (i = 0; i < an; i++)
  {
    int contenidoEnOtro = 0;
    int num = *(a + i);

    for (j = 0; j < bn; j++)
    {
      if (num == *(b + j))
      {
        contenidoEnOtro = 1;
        break;
      }
    }

    if (contenidoEnOtro)
    {
      int duplicado = checkDuplicate(a, tempIndex, num);
      //Si el numero está en el arreglo temporal, continuamos con la siguiente iteración.
      if (duplicado)
        continue;

      arrayPush(temp, num, tempIndex);
      tempIndex++;
      *nNuevo = *nNuevo + 1;
    }
  }

  return temp;
}

int main()
{
  srand(time(NULL));
  int an, bn;

  do
  {
    printf("Ingrese la dimension del arreglo A: ");
    scanf("%i", &an);
  } while (an < 0);

  do
  {
    printf("Ingrese la dimension del arreglo B: ");
    scanf("%i", &bn);
  } while (bn < 0);

  int *a = (int *)malloc(sizeof(int) * an);
  int *b = (int *)malloc(sizeof(int) * bn);

  int i;
  for (i = 0; i < an; i++)
    *(a + i) = rand() % 10;

  for (i = 0; i < bn; i++)
    *(b + i) = rand() % 10;

  for (i = 0; i < an; i++)
    printf("%i - ", *(a + i));

  printf("\n");

  for (i = 0; i < bn; i++)
    printf("%i - ", *(b + i));

  printf("\n");

  int newSize = 0;

  int *arregloRecivido = generarArrayComun(a, an, b, bn, &newSize);

  printf("\n");
  printf("Arreglo nuevo:\n");
  for (i = 0; i < newSize; i++)
    printf("[%i]", *(arregloRecivido + i));

  printf("\n");
  return (0);
}