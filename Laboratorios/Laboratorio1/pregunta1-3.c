#include <stdio.h>
#include <stdlib.h>

void factorial(int *n, int *r)
{

  for (*n = *n; *n > 1; *n = *n - 1)
  {
    *r = *r * *n;
  }
}

int main()
{
  /*
  Implementar una función que calcule el factorial
  de un número
  */

  int numero;
  int resultado = 1;
  do
  {
    printf("Ingrese un numero positivo para calcular su factorial: ");
    scanf("%i", &numero);
    if (numero < 0)
      printf("\nEl numero ingresado no es valido.\n");
  } while (numero < 0);
  factorial(&numero, &resultado);

  printf("\nEl resultado es: %i", resultado);
}