#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirInverso(char *texto)
{
  int length = strlen(texto);
  int i;
  for (i = length - 1; i >= 0; i--)
    printf("%c", *(texto + i));
}

int main()
{
  // Implementar una función que imprima
  // un texto de forma inversa.

  char *texto = (char *)malloc(sizeof(char) * 100);
  printf("Ingrese el texto: ");
  gets(texto);

  imprimirInverso(texto);
  return 0;
}