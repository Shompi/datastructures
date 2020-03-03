#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
	int edad;
	
}Persona;

typedef struct
{
	Persona personas[100];
	int n;
}Resumen;

Resumen filtrar(Persona personas[], int n, int omitirEdad_1, int omitirEdad_2);

int main()
{
	/*
		Implemente un código que permita crear un nuevo conjunto de datos(Nueva estructura) de un arrays de tipo Persona, 
		el cual deberá contener todos las personas en la que su edad sea distinto de omitirEdad_1 y omitirEdad_2.
	*/

	Persona personas[5];
	
	personas[0].edad = 5;
	personas[1].edad = 7;
	personas[2].edad = 10;
	personas[3].edad = 56;
	personas[4].edad = 24;
	
	Resumen resum =  filtrar(personas, 5, 7, 56);			     
	int i=0;
	for(i=0; i < resum.n; i++)
		printf("%d\n", resum.personas[i].edad);

	return 0;
}

Resumen filtrar(Persona personas[], int n, int omitirEdad_1, int omitirEdad_2)			     
{
	Resumen resum;
	resum.n =0;
	int i=0;
	
	for(i=0; i < n ; i++)
		if(!(personas[i].edad == omitirEdad_1 || personas[i].edad == omitirEdad_2))
		{
			resum.personas[resum.n] = personas[i];
			resum.n++;
		}	
	
	return resum;	
}
