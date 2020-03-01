/*Ejercicio 5*/

#include <stdio.h>
#include <string.h>

typedef struct Persona{
  char nombre[20];
  char apellido[20];
  int edad;
}PERS;

PERS modificarInfo();
void mostrarInfo(PERS p);
int main(){
  //Nota comilla simple '' para caracter, comillas dobles "" para strings.
  PERS p1 = {"Pablo", "Escobar", 44}, p2 = {"Avril", "Lavigne", 35}, p3 = {"john", "Connor", 32};
  mostrarInfo(p1);
  mostrarInfo(p2);
  mostrarInfo(p3);

  p2 = modificarInfo(p2); //Modifica la info de Avril Lavigne

  printf("Informacion modificada:\n");
  mostrarInfo(p2);

  getchar; getchar;
  return 0;

}
void modi(PERS *p)
{
  PERS m = *p;
  gets(m.nombre);

  *p=m;
}

void mostrarInfo(PERS p){
  printf("Nombre: %s, Apellido: %s, Edad: %i\n",p.nombre, p.apellido, p.edad);
}

PERS modificarInfo(){
  PERS nuevo;
  printf("\n");
  printf("Ingrese el nuevo nombre: ");
  gets(nuevo.nombre);
  printf("Ingrese el nuevo apellido: ");
  gets(nuevo.apellido);
  printf("Ingrese la nueva edad: ");
  scanf("%i", &nuevo.edad);
  return nuevo;
}