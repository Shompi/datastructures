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
  NODO b = (NODO *)malloc(sizeof(NODO));
  NODO c = (NODO *)malloc(sizeof(NODO));
  NODO d = (NODO *)malloc(sizeof(NODO));

  a->valor = 1;
  b->valor = 2;
  c->valor = 3;
  d->valor = 4;

  b->next = d;
  d->next = c;
  c->next = a;
  a->next = NULL;

  NODO head = b;

  while (head != NULL)
  {
    printf("%i-", head->valor);
    head = head->next;
  }

  return (0);
}