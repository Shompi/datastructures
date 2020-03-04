#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *aMayusculas(char *texto)
{
  // Reservamos memoria para la copia,
  // con el largo del texto que llega a la función.

  char *copia = (char *)malloc(sizeof(char) * strlen(texto));
  strcpy(copia, texto);
  printf("\nCopia: %s", copia);

  /*
    Según la tabla ascii, la distancia entre una letra
    minúscula y una letra mayúscula es -32.
  */

  int i;
  for (i = 0; i < strlen(copia) && *(copia + i) != '\0'; i++)
  {
    if (*(copia + i) >= 97 && *(copia + i) <= 122)
      // Si el caractér está dentro del rango de las minúsculas.
      *(copia + i) = *(copia + i) - 32;
  }

  return copia;
}
int main()
{
  char *texto = (char *)malloc(sizeof(char) * 100);

  puts("Ingrese el texto:");
  scanf("%s", texto);

  char *mayusculas = NULL;
  mayusculas = aMayusculas(texto);

  printf("\nTexto en Mayusculas: %s", mayusculas);
  return (0);
}