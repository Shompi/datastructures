//Pointer in C
/* Calcular el factorial de un numero utilizando paso por referencia. */

#include <stdio.h>

void factorial(int *p);
int main(){
  printf("Ingrese un valor para calcular su factorial: ");
  int f;
  scanf("%i", &f);
  //int *pf = &f;
  factorial(&f);
  printf("\nEl resultado del factorial es: %i", f);

}

void factorial(int *x){
  int i;
  if(*x == 0){
    *x = *x * 1;
  }
  for (i=*x-1; i>=1; i--){
    *x = *x * i;
  } 
}