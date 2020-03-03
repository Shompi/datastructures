/*
1.3.Basándose en la pregunta anterior, 
¿Cómo podría llegar a la referencia del Nodo a
desde el Nodo b en una sola instrucción?
*/
#include <stdio.h>
#include <stdlib.h>

struct nodo
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
  a->valor = 10;
  b->next = d;
  d->next = c;
  c->next = a;
  a->next = NULL;

  //Respuesta:
  //b->next->next->next
  printf("valor nodo a: %i", b->next->next->next->valor);
  return 0;
}