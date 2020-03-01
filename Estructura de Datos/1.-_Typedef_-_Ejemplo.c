#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int valores[100];
    int index;
    int n;    
}Nodo;

/*
O de esta forma
Declaración arriba y abajo para poder usar sin la palabra struct

typedef struct Nodo
{
	int valores[100];
	int index;
	int n;
}Nodo;

*/

//Reduciendo una declaración de vector a una palabra
typedef int MiLista[100];

int main()
{
    MiLista l;
    
    l[0]=1;
    l[1]=2;    
        
    printf("Imprimiendo el valor de la posicion 1 del vector: %d\n",l[1]);    

	Nodo nodo;
	nodo.n = 7;
	printf("Valor de N en estructura: %d", nodo.n);
    
    getchar();getchar();
    return 0;    
}
