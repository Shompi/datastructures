/*Arreglo con puntero*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  // Creamos un puntero y le alocamos 10 espacios de memoria.
  int *vector = (int)malloc(sizeof(int) * 10);

  // Llenamos el puntero con datos.
  int i;
  for (i = 0; i < 10; i++)
  {
    *(vector + i) = i + 1; //1-2-3-4-5-6-7-8-9-10
    printf("[%i]", *(vector + i));
  }

  return (0);
}
