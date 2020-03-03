/*Editar y mostrar un libro con punteros.*/
#include <stdio.h>
#include <string.h>
struct libro
{
  char titulo[30];
  char autor[30];
  int id;
};
void editarLibro(struct libro *variable_name);
void mostrarLibro(struct libro *variable_name);

int main()
{
  struct libro librito;
  editarLibro(&librito);
  mostrarLibro(&librito);
  return 0;
}

void editarLibro(struct libro *variable){
  strcpy(variable->titulo,"La tregua");
  strcpy(variable->autor, "Mario Benedetti");
  variable->id = 3;
}

void mostrarLibro(struct libro *variable){
  printf("Titulo: %s", variable->titulo);
  printf("Autor: %s", variable->autor);
  printf("ID: %i", variable->id);
}