#include <stdio.h>
#include <stdlib.h>

int contarSimbolos(char *texto, char simbolo)
{

  /*
    OBSERVACIÓN:
    El problema dice que se cuentan las "REPETICIONES",
    NO LAS OCURRENCIAS de un simbolo.

    Entonces, en la cadena "abc", el símbolo 'a' no
    se repite ninguna vez.

    En la cadena "aabc", el símbolo 'a' se repite una
    sola vez.
  */

  /*
    La variable "primera", la uso para ignorar la primera
    ocurrencia del simbolo.
  */

  int rep = 0, primera = 0;

  while (*texto != '\0')
  {
    if (*texto == simbolo)
      if (!primera)
        primera = 1;
      else
        rep++;

    texto = texto + 1;
  }

  return rep;
}

int main()
{
  /*
  Contar cuantas veces se repite un simbolo
  en un texto. Retornar la cantidad.
  */

  char *texto = (char *)malloc(sizeof(char) * 100);
  char *simbolo = (char *)malloc(sizeof(char));

  printf("Ingrese el texto: ");
  gets(texto);

  printf("Ingrese el simbolo a buscar: ");
  scanf("%c", simbolo);

  int repeticiones = contarSimbolos(texto, *simbolo);

  if (repeticiones >= 1)
    printf("El simbolo '%c' se repite %i veces.\n", *simbolo, repeticiones);

  if (repeticiones == 0)
    printf("El simbolo %c no se repite ninguna vez.\n");
  return 0;
}