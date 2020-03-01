#include<stdio.h>
#include<stdlib.h>

typedef struct nodo
{
	int valor;
	struct nodo *next;
}*Nodo;

void imprimir(Nodo lista);

int main()
{
	Nodo a = NULL, b = NULL, c = NULL, d = NULL;
	
	a = (Nodo)malloc(sizeof(struct nodo));
	a->next = NULL;
	a->valor=5;
	
	b = (Nodo)malloc(sizeof(struct nodo));
	b->next = NULL;
	b->valor=2;
	
	c = (Nodo)malloc(sizeof(struct nodo));
	c->next = NULL;
	c->valor=3;	
	
	d = (Nodo)malloc(sizeof(struct nodo));
	d->next = NULL;
	d->valor=4;
	
	/*
	Teniendo los siguientes nodos : a(5) b(2) c(3) d(4)
	Enlazar en el siguiente orden:
	a(5) -> c(3) -> b(2) -> d(4)
	*/
	
	a->next = c;
	c->next = b;
	b->next = d;
	d->next = NULL;
	
	imprimir(a);//Iniciando de A
	printf("\n");
	/*
	Teniendo los siguientes nodos : a(5) b(2) c(3) d(4)
	Enlazar en el siguiente orden:
	b(2) -> a(5) -> d(4) -> c(3)
	*/
	
	/*Desenlazando - No es necesario realizar este paso*/
	a->next = NULL;
	c->next = NULL;
	b->next = NULL;
	d->next = NULL;
	/*-------------------------------------------------*/
	
	b->next = a;
	a->next = d;
	d->next = c;
	c->next = NULL;	
	
	imprimir(b);//Iniciando de B
	
	return 0;
}

void imprimir(Nodo lista)
{
	while(lista!=NULL)
	{
		printf("%d ->", lista->valor);
		lista = lista->next;
	}	
}
