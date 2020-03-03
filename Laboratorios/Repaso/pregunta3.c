#include <stdio.h>
#include <stdlib.h>

int main()
{

  /*
    int *a, *b;

    *a = (int *)malloc(sizeof(int));
    *b = (int *)malloc(sizeof(int));

    *a = *b = 2;

    printf("(%p - %d) (%p - %d)", &a, a, &b, b);

    a = b;

    printf("\n (%p - %d) (%p - %d)", &a, a, &b, b);
    */

  int *a, *b; //Se inicializan los punteros sin memoria.

  // Se le reserva memoria al puntero, sin el asterisco
  // por que si no estariamos asignando memoria al valor
  // del puntero, y eso daria un error.

  a = (int *)malloc(sizeof(int));
  b = (int *)malloc(sizeof(int));

  // Se asigna de derecha a izquierda el valor 2 para b, y luego
  // el valor de b se le asigna a a.
  *a = *b = 2;

  
  printf("(%p - %d) (%p - %d)", a, *a, b, *b);

  //Se enlaza a con b
  a = b;

  printf("\n(%p - %d) (%p - %d)", a, *a, b, *b);
  return (0);
}