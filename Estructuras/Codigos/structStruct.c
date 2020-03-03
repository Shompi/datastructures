/*Struct dentro de struct*/
/*Struct dentro de struct*/
#include <stdio.h>
#include <string.h>
struct TipoProducto
{
  char nombre[30];
  char categoria[30];
  int id;
};

struct Producto
{
  char marca[20];
  int id;
  struct TipoProducto tipo;
};

//Para enlazar, siempre comienza entrando por la estructura que contiene a la otra,
//en este caso, marca contiene a producto dentro.
int main()
{
  struct Producto prod;
  strcpy(prod.marca, "SOPROLE");
  prod.id = 1;
  strcpy(prod.tipo.nombre, "LECHE");
  strcpy(prod.tipo.categoria, "LACTEOS");
  prod.tipo.id = 1;
  //Se imprimen
  printf("Marca: %s\n", prod.marca);
  printf("ID: %i\n", prod.id);
  printf("TIPO: %s\n", prod.tipo.nombre);
  printf("CATEGORIA: %s\n", prod.tipo.categoria);
  printf("ID: %s\n", prod.tipo.id);
  return 0;
} 
