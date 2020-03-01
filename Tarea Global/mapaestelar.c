#include <stdio.h>
#include <stdlib.h>
struct estrella
{
  float coordx;
  float coordy;
  struct estrella *next;
};
typedef struct constelacion
{
  char *nombre;
  int cantEstrellas;
  struct estrella *estrellas;
  struct constelacion *next;
} * Constelacion;

int main()
{
  return 0;
}