#include <stdio.h>
#include <stdlib.h>

struct
{
  int valor;
  struct nodo *next;
} typedef *NODO;

int main()
{
  NODO a = (NODO *)malloc(sizeof(NODO));

  a->valor = 10;
  a->next = NULL;

  printf("%d\n", a->valor);
  return (0);
}