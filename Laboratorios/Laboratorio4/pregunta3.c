#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void moverVector(int *v, int x, int n)
{
  int i;
  for (i = x; i < n; i++)
  {
    *(v + i) = *(v + i + 1);
  }
}
int borrarDuplicados(int *v, int n)
{
  
  int i, j, elemento;
  for (i = 0; i < n; i++)
  {
    
    elemento = *(v + i);
    for (j = i; i < n; j++)
    {
      
      if (j == i) continue;
      if (*(v + j) == elemento)
      {
        n--;
        moverVector(v, j,  n);
      }
    }
  }
  return n;
}

int main()
{
  srand(time(NULL));
  int *arreglo;

  int n = 10, i;
  arreglo = (int *)malloc(sizeof(int) * n);

  for (i = 0; i < n; i++)
  {
    *(arreglo + i) = rand() % 3;
  }
  for (i = 0; i < n; i++)
  {
    printf("[%i]", *(arreglo + i));
  }

  int dimension = borrarDuplicados(arreglo, n);
  printf("\n");
  for (i = 0; i < dimension; i++)
  {
    printf("[%i]", *(arreglo + i));
  }
}