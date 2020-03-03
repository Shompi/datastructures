/*Estructura como argumento en una función*/

#include <stdio.h>
#include <string.h>
struct libro{
 int id;
 char titulo[30];
 char autor[30];
};
void mostrarLibro(struct libro variable_name);

int main(){
  struct libro librito;

  strcpy(librito.titulo, "La tregua");
  strcpy(librito.autor, "Mario Benedetti");
  librito.id = 2;
  mostrarLibro(librito);
  return 0;
}

void mostrarLibro(struct libro variable){
  printf("Titulo: %s, Autor: %s, ID: %i", variable.titulo, variable.autor, variable.id);
}