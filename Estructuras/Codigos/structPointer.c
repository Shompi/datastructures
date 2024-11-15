/*Estructura con puntero*/

#include <stdio.h>
#include <string.h>

struct libro
{
	int id;
	char titulo[30];
	char autor[30];
};

void mostrarLibro(struct libro *variable_name); //*Indica que es un puntero a una ubicacion de memoria

int main()
{
	struct libro librito;
	strcpy(librito.titulo, "La tregua");
	strcpy(librito.autor, "Mario Benedetti");
	librito.id = 3;
	mostrarLibro(&librito); //& Para entregar la ubicacion en la memoria de la estructura;
	return 0;
}

void mostrarLibro(struct libro *variable)
{
	printf("Titulo: %s, Autor: %s, ID: %i", variable->titulo, variable->autor, variable->id);
}