#include<stdio.h>
#include<string.h>

typedef struct 
{
	int edad;
	char nombre[100];
}Persona;

Persona menorEdad(Persona personas[], int n);

int main()
{
	Persona personas[3];
	
	personas[0].edad = 15;
	strcpy(personas[0].nombre, "Juan");
	
	personas[1].edad = 20;
	strcpy(personas[1].nombre, "Pedro");
	
	personas[2].edad = 5;
	strcpy(personas[2].nombre, "Diego");	
	
	Persona personaMenorEdad =  menorEdad(personas, 3);

	printf("Nombre: %s Edad: %d", personaMenorEdad.nombre, personaMenorEdad.edad);

	
	return 0;
}

Persona menorEdad(Persona personas[], int n)
{
	Persona aux = personas[0];
	int i;
	
	for(i=0;i < n; i++)
	if(personas[i].edad < aux.edad)
		aux = personas[i];
		
		
	return aux;				
}
