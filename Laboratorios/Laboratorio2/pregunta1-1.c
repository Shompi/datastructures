#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cifradoCesar(char *texto, int desplazamiento)
{
  /*  int *i = (int *)malloc(sizeof(int));

  for (*i = 0; *i < strlen(texto) && *(texto + *i) != '\0'; *i = *i + 1)
  {
    *(texto + *i) = *(texto + *i) + desplazamiento;
  } */

  while (*texto != '\0')
  {
    *texto = *texto + desplazamiento;
    texto = texto + 1;
  }
}

int main()
{
  /*Cifrado cesar*/

  char *texto = (char *)malloc(sizeof(char) * 50);
  int desplazamiento = 0;

  printf("Ingrese una palabra: ");
  scanf("%s", texto);

  /* strcpy(texto, "ShompiFlen"); */

  printf("Ingrese el valor de desplazamiento: ");
  scanf("%i", &desplazamiento);
  cifradoCesar(texto, desplazamiento);

  printf("Texto desplazado: %s", texto);
}