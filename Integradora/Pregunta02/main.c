#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
  int n;
  struct nodo *next;
} * Nodo;

int esContenido(Nodo listaA, Nodo listaB);
Nodo crearNodo(int valor);
Nodo agregarNodo(Nodo lista, Nodo nuevo);
void imprimir(Nodo inicial);
int main()
{
  Nodo listaA = NULL;
  Nodo listaB = NULL;
  int i = 0;
  int n, a, b, c;

  printf("ingrese el tamaño de la primera lista :\n");
  scanf("%d", &n);
  printf("ingrese los valores de la lista\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a);
    listaA = agregarNodo(listaA, crearNodo(a));
  }
  printf("ingrese el tamaño de la segunda lista\n");
  scanf("%d", &b);
  printf("ingrese los valores de la lista\n");
  for (i = 0; i < b; i++)
  {
    scanf("%d", &c);
    listaB = agregarNodo(listaB, crearNodo(c));
  }
  imprimir(listaA);
  printf("\n");
  imprimir(listaB);

  printf("\n");

  printf("Es contenido: %i", esContenido(listaA, listaB));

  return (0);
}

int esContenido(Nodo listaA, Nodo listaB)
{

  if (listaA == NULL && listaB == NULL)
    return 1;

  Nodo headA = listaA;
  Nodo headB = listaB;

  while (headA != NULL)
    if (headA->n == headB->n)
      break;
    else
      headA = headA->next;

  while (headA != NULL && headB != NULL)
  {
    if (headB->n == headA->n)
    {
      headB = headB->next;
      headA = headA->next;
    }
    else
      return (0);
  }

  return (1);
}

Nodo crearNodo(int valor)
{
  Nodo nuevo = (Nodo)malloc(sizeof(struct nodo));
  nuevo->next = NULL;
  nuevo->n = valor;
  return nuevo;
}
Nodo agregarNodo(Nodo lista, Nodo nuevo)
{
  if (lista == NULL)
    return nuevo;

  Nodo aux = lista;

  while (aux->next != NULL)
    aux = aux->next;

  aux->next = nuevo;
  return lista;
}
void imprimir(Nodo inicial)
{
  while (inicial != NULL)
  {
    printf("%d -> ", inicial->n);
    inicial = inicial->next;
  }

  printf("NULL");
}