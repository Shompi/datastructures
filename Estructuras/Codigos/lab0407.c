/*Ejercicio 1*/

#include <stdio.h>
#include <string.h>
typedef struct Persona
{
	char nombre[20];
	int edad;
} PER;

typedef struct Automovil
{
	char marca[20];
	int year;
} AUTO;

typedef struct Pais
{
	char nombre[20];
	int poblacion;
} PAIS;

int main()
{
	PER persona1, persona2;
	PAIS pais1, pais2;
	AUTO auto1, auto2;
	// Personas
	strcpy(persona1.nombre, "Pablo Escobar");
	persona1.edad = 53;
	strcpy(persona2.nombre, "Bryan Adams");
	persona2.edad = 49;

	// Automoviles
	strcpy(auto1.marca, "Citroen");
	auto1.year = 1998;
	strcpy(auto2.marca, "Chevrolet");
	auto2.year = 1950;

	// Paises
	strcpy(pais1.nombre, "Chile");
	pais1.poblacion = 16000000;
	strcpy(pais2.nombre, "Argentina");
	pais2.poblacion = 13002200;

	return 0;
}