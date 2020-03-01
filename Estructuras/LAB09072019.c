#include <stdio.h>
#define MAX_SIZE 10
struct alumno
{
  char nombre[20];
  char apellido[20];
  float nota;
};
typedef struct alumno Alumno;

Alumno crear();
void agregarAlumno(Alumno p[], int indice, int registrados);
void showInfo(Alumno p[], int total);
void agregarAlumnoEntremedio(Alumno p[], Alumno insertar, int total, int pos);
int main()
{
  Alumno estudiantes[MAX_SIZE];
  Alumno alumnoAInsertar = {"Alumno", "Insertado", 3.2};
  int i, registrar = 5;
  int registrados = 0;
  for (i = 0; i < registrar; i++)
  {
    agregarAlumno(estudiantes, i, &registrados);
  }
  printf("\nAlumnos registrados: %i", registrados);
  showInfo(estudiantes, registrados);
  int pos = 1; //Posicion para insertar al estudiante.

  agregarAlumnoEntremedio(estudiantes, alumnoAInsertar, registrados, pos);
  printf("\nAlumnos registrados: %i", registrados);

  printf("\nAlumno insertado en el arreglo:\n");
  showInfo(estudiantes, registrados);
  return 0;
}

Alumno crear()
{
  Alumno nuevo = {"Nuevo", "Alumno", 3.4};

  while (nuevo.nota < 1.0 || nuevo.nota > 7.0)
  {
    printf("La nota es invalida.\n");
    nuevo.nota = 2.4;
  }
  return nuevo;
}

void agregarAlumno(Alumno p[], int indice, int registrados)
{
  if (indice == MAX_SIZE)
  {
    printf("La lista esta llena.\n");
  }
  else
  {
    p[indice] = crear();
    registrados++;
  }
}

void agregarAlumnoEntremedio(Alumno p[], Alumno insertar, int total, int pos)
{
  if (total == MAX_SIZE)
  {
    printf("\nEl arreglo esta lleno.");
  }
  else
  {
    //int i;
    //Alumno aux;
    //for (i = 0; i < total; i++)
    //{
    //if (i == pos)
    //{
    int j;
    for (j = total-1; j >=0 ; j--)
    {
      p[j+1] = p[j];
    }
    p[pos] = insertar;
    total++;
    //}
  }
}

void showInfo(Alumno lista[], int total)
{
  int i;
  for (i = 0; i < total; i++)
  {
    printf("\nPos %i: %s %s %.2f", i, lista[i].nombre, lista[i].apellido, lista[i].nota);
  }
}