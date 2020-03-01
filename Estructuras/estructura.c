#include <stdio.h>
typedef struct guitarra{
  int cuerdas; //1
  char marca[20]; //2
  char tipo[30]; // 3
}GTR;


int main(){
  int x;
  printf("Cuantas guitarras quiere ingresar: ");
  scanf("%i", &x);
  GTR Guitarras[x];
  int i;
  //Para llenar la estructura, para registrar la guitarra.
  for(i=0; i<x; i++){
    printf("\nIngrese la marca de la guitarra: ");
    scanf("%s", &Guitarras[i].marca);
    printf("\nIngrese tipo de la guitarra: ");
    scanf("%s", &Guitarras[i].tipo);
    printf("\nIngrese la cantidad de cuerdas de la guitarra: ");
    scanf("%i", &Guitarras[i].cuerdas);
  }

  for(i=0; i<x; i++){
    printf("%s ", Guitarras[i].marca);
    printf("%s ", Guitarras[i].tipo);
    printf("%i \n", Guitarras[i].cuerdas);
  }
  
}