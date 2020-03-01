#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int edad;
  char nombre[100];

} Persona;

int cargarDatos(Persona personas[]);

int main()
{
  Persona personas[100];

  int n = cargarDatos(personas);
  printf("Datos cargados: %d\n\n", n);

  int i = 0;
  for (i = 0; i < n; i++)
    printf("Nombre: %s \tEdad: %d\n", personas[i].nombre, personas[i].edad);

  getchar();
  getchar();
  return 0;
}

//Retorna la cantidad de datos cargados
int cargarDatos(Persona personas[])
{
  FILE *fp;
  fp = fopen("datos.txt", "r"); //Abrimos archivo "r" -> "Read"
  if (fp == NULL)
  {
    printf("Archivo no encontrado");
    return 0;
  }

  int i = 0;

  while (feof(fp) == 0) //Pregunta si lleg� al final de l�nea
  {
    fscanf(fp, "%s", personas[i].nombre);
    fscanf(fp, "%d", &personas[i].edad);
    i++;
  }

  fclose(fp);
  return i;
}
