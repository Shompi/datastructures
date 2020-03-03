#include <stdio.h>
#include <stdlib.h>

struct nodo
{
  int valor;
  struct nodo *next;
} typedef *NODO;

NODO unificar(NODO inicialA, NODO inicialB, int orden)
{
  /*
    Si orden == 1, A -> B
    Si orden == 0, B -> A.
  */
  NODO head;
  if (orden == 1)
  {
    head = inicialA;
    while (head->next != NULL)
      head = head->next;

    head->next = inicialB;

    return inicialA;
  }
  else if (orden == 0)
  {
    head = inicialB;
    while (head->next != NULL)
      head = head->next;

    head->next = inicialA;

    return inicialB;
  }
}

int main()
{

  /*
  Implemente una función que reciba una lista A
  y una lista B. Se pide implementar un código
  que unifique ambas listas.

  Por lo demás, la función recibe un tercer parámetro
  el cual indica el orden de unificación.

  Si orden == 1, A -> B
  Si orden == 0, B -> A.

  Retorne la lista resultante.
  */

  NODO a = (NODO *)malloc(sizeof(NODO));
  NODO b = (NODO *)malloc(sizeof(NODO));
  NODO c = (NODO *)malloc(sizeof(NODO));
  NODO d = (NODO *)malloc(sizeof(NODO));

  NODO e = (NODO *)malloc(sizeof(NODO));
  NODO f = (NODO *)malloc(sizeof(NODO));
  NODO g = (NODO *)malloc(sizeof(NODO));
  NODO h = (NODO *)malloc(sizeof(NODO));

  //Lista A:
  a->valor = 1;
  a->next = b;
  b->valor = 3;
  b->next = c;
  c->valor = 8;
  c->next = d;
  d->valor = 10;
  d->next = NULL;

  //Lista B:
  e->valor = 3;
  e->next = f;
  f->valor = 2;
  f->next = g;
  g->valor = 0;
  g->next = h;
  h->valor = 20;
  h->next = NULL;

  int orden = 1;

  if (orden != 0 && orden != 1)
    return printf("El orden ingresado no es válido. (Valor fuera de rango 0 - 1)\n");

  NODO listaFinal = unificar(a, e, orden);

  NODO head = listaFinal;

  while (head != NULL)
  {
    printf("[%i] -> ", head->valor);
    head = head->next;
  }

  return 0;
}