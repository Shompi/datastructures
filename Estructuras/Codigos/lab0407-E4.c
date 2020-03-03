/*Ejercicio 4*/

#include <stdio.h>
#include <string.h>

typedef struct Persona{
  char nombre[20];
  char apellido[20];
  char estCivil[20];
  int edad;
}PER;

int main(){

  PER persona;

  strcpy(persona.nombre, "Pablo");
  strcpy(persona.apellido, "Escobar");
  strcpy(persona.estCivil, "XXXXX");
  persona.edad = 43;
}