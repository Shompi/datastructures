#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Funciones*/
int estaContenido(char *subTexto, char *texto){
  char *seEncuentra;
  seEncuentra = strstr(texto, subTexto); //Devolverá NULL si no se encuentra la ocurrencia
  if(seEncuentra == NULL) return 0; 
  return 1;
}
int main(){
  //strstr(stringPrincipal, stringABuscar);
  printf("\nEjercicio 4\n");
  char *texto, *palabra;
  texto = (char *)malloc(sizeof(char) * 100);
  palabra = (char*)malloc(sizeof(char) * 50);

  printf("\nIngrese el la cadena principal: ");
  scanf("%s", texto);
  printf("Ingrese la subcadena a buscar: ");
  scanf("%s", palabra);

  int contenido = estaContenido(palabra, texto);

  if (contenido == 0) printf("la cadena '%s' NO se encuentra dentro de la cadena principal.", palabra);
  if (contenido == 1) printf("la cadena '%s' SI se encuentra dentro de la cadena principal.", palabra);

}