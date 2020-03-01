#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/*
*Felipe Hugo Ignacio Aguilera Suazo.
*02 de Octubre 2019.
*Estructura de Datos.
*Cuaderno de Ejercicios, Tarea 1.
*/

/*Funciones*/
/*Ejercicio 1*/
char *abc(char *texto)
{
  int i , valido = 1;
  do
  {
    printf("Ingresa la palabra a ordenar: ");
    scanf("%s", texto); //Hola
    
    for (i = 0; i < 100 && *(texto + i) != '\0'; i++)
    {
      valido = 1;
      if(*(texto + i) < 97 || *(texto + i) > 122){
        valido = 0;
        printf("\nLa palabra que has ingresado contiene un caracter invalido.\n");
        break;
      }
    }
  } while (valido == 0);

  char *copia;

  copia = (char *)malloc(sizeof(char) * strlen(texto));

  strcpy(copia, texto);

  int j, aux, largo = strlen(texto);

  for (i = 0; i < largo; i++)
  {
    for (j = 0; j < largo - 1; j++)
    {
      if (*(copia + j) > *(copia + j + 1))
      {
        aux = *(copia + j + 1);
        *(copia + j + 1) = *(copia + j);
        *(copia + j) = aux;
      }
    }
  }
  return copia;
}

/*Ejercicio 2*/
int eliminarNumeros(int *v, int n, int eliminar){
  int dimension = n, i, j;
  /*Implementar una función que elimine todos los números iguales a eliminar.
Retorne la nueva dimensión del arreglo.*/
  for(i = 0; i < dimension; i++){
    if (*(v + i) != eliminar) continue;
    dimension--;
    for(j = i; j < n; j++){
      *(v + j) = *(v+j+1);
    }
    i--;
  }
  return dimension;
}

/*Ejercicio 3*/
int estaContenido(char *subTexto, char *texto){
  char *seEncuentra;
  seEncuentra = strstr(texto, subTexto); //Devolverá NULL si no se encuentra la ocurrencia
  if(seEncuentra == NULL) return 0; 
  return 1;
}

/*Ejercicio 4*/
int sumarArreglo(int *v, int n){
  if(n <= 0) return 0;
  return *(v + n - 1) + sumarArreglo(v, n - 1);
}

int main()
{
  srand(time(NULL));
  int i;
  /*Pregunta 1 ordenar letras de una palabra de menor a mayor.*/
  printf("Ejercicio 1:\n");
  char *palabra;
  palabra = (char *)malloc(sizeof(char) * 100);

  char *ordenada = abc(palabra);
  printf("Cadena Ingresada: %s\n", palabra);
  printf("Cadena ordenada: %s\n", ordenada);

  /*Pregunta 2 eliminar valores de un arreglo iguales a eliminar*/
  printf("\nEjercicio 2:\n");
  int n, eliminar;
  do{
    printf("Ingrese el largo del arreglo de numeros: ");
    scanf("%i", &n);
    if(n <= 0) printf("Debes ingresar un valor mayor o igual a 1\n");
  }while(n <= 0);
  
  int *vector = (int *)malloc(sizeof(int) * n);
  for(i = 0; i < n; i++){
    *(vector + i) = rand() % 5;
    printf("[%i]", *(vector + i));
  }
  printf("\nIngrese el valor numerico que quiere eliminar del arreglo: ");
  scanf("%i", &eliminar);

  int nuevaDimension = eliminarNumeros(vector, n, eliminar);
  for(i = 0; i < nuevaDimension; i++){
    printf("[%i]", *(vector + i));
  }
  
  /*Pregunta 3 Hallar si una cadena de texto esta contenida dentro de otra*/
  printf("\n\nEjercicio 3");
  char *texto, *subCadena;
  texto = (char *)malloc(sizeof(char) * 100);
  subCadena = (char*)malloc(sizeof(char) * 50);

  printf("\nIngrese la cadena principal: ");
  scanf("%s", texto);
  printf("Ingrese la subcadena a buscar: ");
  scanf("%s", subCadena);

  int contenido = estaContenido(subCadena, texto);

  if (contenido == 0) printf("la cadena '%s' NO se encuentra dentro de la cadena principal.", subCadena);
  if (contenido == 1) printf("la cadena '%s' SI se encuentra dentro de la cadena principal.", subCadena);

  /*Pregunta 4 sumar arreglo de forma recursiva*/
  printf("\n\nEjercicio 4:\n");
  int *v;
  do{
    printf("Ingrese el largo del arreglo: ");
    scanf("%i", &n);
    if(n <= 0) printf("Debes ingresar un valor mayor o igual a 1\n");
  }while(n <= 0);

  v = (int*)malloc(sizeof(int) * n);
  for (i = 0; i < n; i++){
    *(v+i) = rand() % 5;
    printf("[%i]", *(v+i));
    if(i == n-1) continue;
    printf("+");
  }
  printf("\n");
  
  int sumaArreglo = sumarArreglo(v, 10);
  printf("La suma del arreglo es: %i\n", sumaArreglo);
  getchar();getchar();
  return 0;
}