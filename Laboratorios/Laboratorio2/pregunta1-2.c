#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cifradoCesar_r(char *texto, int desplazamiento)
{
  if (*texto == '\0')
    return;

  *texto = (*texto + desplazamiento);
  return cifradoCesar_r(texto + 1, desplazamiento);
}

int main()
{
  /*Cifrado cesar recursivo*/

  char *texto = (char *)malloc(sizeof(char) * 50);
  int desplazamiento = 0;

  printf("Ingrese una palabra: ");
  scanf("%s", texto);

  /* strcpy(texto, "ShompiFlen"); */

  printf("Ingrese el valor de desplazamiento: ");
  scanf("%i", &desplazamiento);
  cifradoCesar_r(texto, desplazamiento);

  printf("Texto desplazado: %s", texto);

  return 0;
}