/*Estrutura común*/

#include <stdio.h>
#include <string.h>
struct libros
{
	int id;
	char titulo[30];
	char autor[30];
};

int main()
{
	struct libros librito;
	strcpy(librito.titulo, "La tregua");
	strcpy(librito.autor, "Mario Benedetti");
	librito.id = 1;

	printf("Titulo: %s, Autor: %s, Id: %i", librito.titulo, librito.autor, librito.id);
	return 0;
}