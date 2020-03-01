#include<stdio.h>
#include<stdlib.h>

typedef struct nodo
{
	int valor;
	struct nodo *next;
}*Nodo;

Nodo agregarNodo(Nodo lista, int valor);
Nodo agregarNodo_R(Nodo lista, int valor);
void imprimir(Nodo lista);

int main()
{
	/*
		Crear una función que agregue nodos a una lista enlazada
		- Iterativo.
		- Recursivo.		
	*/
	
	/*Versión Iterativa*/
	Nodo listaA = NULL;
	
	listaA = agregarNodo(listaA, 20);
	listaA = agregarNodo(listaA, 50);
	listaA = agregarNodo(listaA, 10);
	listaA = agregarNodo(listaA, 30);
	
	/*Versión Recursiva*/
	Nodo listaB = NULL;
	
	listaB = agregarNodo_R(listaB, 20);
	listaB = agregarNodo_R(listaB, 50);
	listaB = agregarNodo_R(listaB, 10);
	listaB = agregarNodo_R(listaB, 30);
	
	printf("Lista Enlazada(Forma Iterativa):\n");
	imprimir(listaA);
	
	printf("\n\nLista Enlazada(Forma Recursiva):\n");
	imprimir(listaB);	
	
	return 0;
}

/*Iterativo*/
Nodo agregarNodo(Nodo lista, int valor)
{
	Nodo nuevo = (Nodo)malloc(sizeof(struct nodo));
	nuevo->valor = valor;
	nuevo->next = NULL;
	
	if(lista == NULL)
		return nuevo;
		
	Nodo aux = lista;
		
	while(aux->next!=NULL)
	 aux = aux->next;
	 
	aux->next = nuevo;
	 
	 return lista;
}

/*Recursivo*/
Nodo agregarNodo_R(Nodo lista, int valor)
{
	if(lista == NULL)
	{
		Nodo nuevo  = (Nodo)malloc(sizeof(struct nodo));
		nuevo->valor = valor;
		nuevo->next = NULL;
		return nuevo;
	}
	else
		lista->next = agregarNodo_R(lista->next, valor);
	
	return lista; 
}

void imprimir(Nodo lista)
{
	while(lista!=NULL)
	{
		printf("%d -> ", lista->valor);
		lista = lista->next;
	}
	
	printf("NULL");	
}
