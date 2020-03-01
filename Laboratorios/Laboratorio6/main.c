#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
  int valor;
  struct nodo *next;
} * Nodo;
void imprimirLista(Nodo inicial)
{
  Nodo aux = inicial;
  while (aux != NULL)
  {
    printf("[%i]->", aux->valor);
    aux = aux->next;
  }
  printf("NULL\n");
}

Nodo segundoSucesor(Nodo inicial)
{
  if (inicial->next == NULL)
    return NULL;
  if (inicial->next->next == NULL)
    return NULL;
  return inicial->next->next;
}

int dimension(Nodo inicial)
{
  int contador = 0;
  Nodo aux = inicial;
  while (aux != NULL)
  {
    contador++;
    aux = aux->next;
  }
  return contador;
}

int dimension_R(Nodo inicial)
{
  if (inicial == NULL)
    return 0;

  return 1 + dimension_R(inicial->next);
}

int cuentaPares(Nodo inicial){
  Nodo aux = inicial;
  int contador = 0;
  while(aux != NULL){
    if(aux->valor % 2 == 0) contador++;
    aux = aux->next;
  }

  return contador;
}

Nodo ultimoNodo(Nodo inicial){
  while(inicial->next != NULL){
    inicial = inicial->next;
  }
  return inicial;
}
int main(int argc, char const *argv[])
{
  Nodo a = (Nodo)malloc(sizeof(struct nodo));
  Nodo b = (Nodo)malloc(sizeof(struct nodo));
  Nodo c = (Nodo)malloc(sizeof(struct nodo));
  Nodo d = (Nodo)malloc(sizeof(struct nodo));
  Nodo e = (Nodo)malloc(sizeof(struct nodo));
  Nodo f = (Nodo)malloc(sizeof(struct nodo));
  Nodo g = (Nodo)malloc(sizeof(struct nodo));
  Nodo h = (Nodo)malloc(sizeof(struct nodo));

  a->valor = 5;
  a->next = b;
  b->valor = 3;
  b->next = c;
  c->valor = 1;
  c->next = d;
  d->valor = 7;
  d->next = e;
  e->valor = 10;
  e->next = f;
  f->valor = 0;
  f->next = g;
  g->valor = 2;
  g->next = h;
  h->valor = 4;
  h->next = NULL;

  imprimirLista(a);
  Nodo sucesor = segundoSucesor(h);
  if (sucesor == NULL)
    printf("\nNodo Segundo Sucesor: NULL\n");
  else
    printf("\nNodo Sucesor: [%i]\n", sucesor->valor);

  int dimensionLista = dimension(a);
  printf("La dimension de la lista es: %i\n", dimensionLista);

  int dimensionListaR = dimension_R(a);
  printf("La dimension de la lista (Recursiva) es: %i\n", dimensionListaR);

  int pares = cuentaPares(a);
  printf("Cantidad de nodos con un numero par: %i\n", pares);

  Nodo ultimo = ultimoNodo(a);
  printf("Ultimo nodo en la lista: %i\n", ultimo->valor);
  return 0;
}
