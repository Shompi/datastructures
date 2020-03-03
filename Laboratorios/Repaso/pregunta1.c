#include <stdio.h>
#include <stdlib.h>

int main()
{

  //Corrija el siguiente código para que compile y funcione correctamente.

  //Las variables son inicializadas como punteros con un valor,
  //Pero no tienen asignada una posición de memoria.
  
  int *z = (int *)malloc(sizeof(int));
  int *x = (int *)malloc(sizeof(int));
  *z = 1, *x = 2;

  printf("(%d - %p) - (%d - %p)", *z, z, *x, x);

  return (0);
}