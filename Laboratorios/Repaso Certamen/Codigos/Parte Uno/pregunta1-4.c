/*
Basándose en la pregunta1.2. 
¿Qué pasaría si ejecuto el siguiente código? 
Nodo duda = b -> next -> next -> next -> next -> next;
*/

//Respuesta: Probablemente el programa crashee,
//por que estaría accediento a memoria que no está
//asignada.

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

  a->valor = 1;
  b->valor = 2;
  c->valor = 3;
  d->valor = 4;

  b->next = d;
  d->next = c;
  c->next = a;
  a->next = NULL;

  NODO duda = b->next->next->next->next->next; //Segmentation fault.
  return (0);
}