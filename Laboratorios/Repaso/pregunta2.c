#include <stdio.h>
#include <stdlib.h>

int main()
{

  //Corrija el siguiente código para que compile y funcione correctamente.

  /*   int a, *b = NULL;
  printf("A:");
  scanf("%d", a);
  printf("B:");
  scanf("%d", *b); //Segmentation fault.
  printf("%d %d", a, b);
 */

  //Inicializamos las variables:
  int a, *b = NULL;

  printf("A: ");
  //a no es un puntero, por lo que hay que usar & para guardar el valor.
  scanf("%d", &a);

  printf("B: ");
  //No podemos guardar un dato en b, ya que no tiene memoria asignada.
  b = (int *)malloc(sizeof(int));

  scanf("%d", b);

  printf("%d %d", a, *b);

  // ✅
  return 0;
}