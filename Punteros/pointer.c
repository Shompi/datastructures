/*Pointer*/
#include <stdio.h>

int main(){
  int p = 5;
  int *a = &p;
  int **ap = &a;
  int ***c = &ap;
  printf("%i\n", *a);
  printf("%i\n", **ap);
  printf("%i\n", ***c);
  printf("%i\n", *ap);
  printf("%i\n", a);
}