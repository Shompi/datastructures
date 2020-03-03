#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Doble Puntero;
void potencia(int a, int b, int **r);
int main()
{
  int *r = NULL;
  int a = 2, b = 3;
  potencia(a, b, &r);
  printf("%i", *r);
}

void potencia(int a, int b, int **r)
{
  int i, t = 1;
  if (*r == NULL)
  {
    *r = (int *)malloc(sizeof(int));
  }

  for (i = 0; i < b; i++)
  {
    t = t * a;
  }

  **r = t;
}