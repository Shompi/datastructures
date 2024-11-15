#include <stdio.h>
#include <string.h>

/*Estructuras*/
// NOTA: Tener en cuenta el orden en el que se definen las estructuras.
typedef struct ramos
{
	int codigo;
	char nombre[30];
} RAMO;

typedef struct alumnos
{
	char nombre[20];
	char apellido[20];
	int edad;
	RAMO ramo;
} ALU;

/*Declaracion de funciones*/
void registroInformacion(ALU[], int);
void mostrarInfo(ALU[], int);
/*Main*/
int main()
{
	int s = 2;
	ALU alumnos[s];
	registroInformacion(alumnos, s);
	mostrarInfo(alumnos, s);
	return 0;
}

/*Funciones*/
void registroInformacion(ALU alumno[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("Ingrese el nombre del alumno [%i]: ", i);
		scanf("%s", &alumno[i].nombre);
		printf("Ingrese el apellido del alumno [%i]: ", i);
		scanf("%s", &alumno[i].apellido);
		printf("Ingrese la edad del alumno [%i]: ", i);
		scanf("%i", &alumno[i].edad);
		printf("Ingrese el nombre del ramo para el alumno [%i]: ", i);
		scanf("%s", &alumno[i].ramo.nombre);
		printf("\n");
	}
}

void mostrarInfo(ALU alumno[], int size)
{
	int i;
	printf("Informacion de los alumnos:\n");
	for (i = 0; i < size; i++)
	{
		printf("Nombre: %s %s, Edad: %i, Ramo: %s", alumno[i].nombre, alumno[i].apellido, alumno[i].edad, alumno[i].ramo.nombre);
	}
}