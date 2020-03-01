#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cifradoCesar(char *texto, int desplazamiento);
void cifradoCesar_r(char *texto, int desplazamiento);
int contarSimbolos(char *texto, char simbolo);
int contarSimbolos_r(char *texto, char simbolo);
char *aMayusculas(char *texto);
char *palabraOrdenada(char *texto);
int main()
{

  char *texto = NULL;
  texto = (char *)malloc(sizeof(char) * 100);
  char *n_texto = NULL;
  n_texto = (char *)malloc(sizeof(char) * 100);
  int desplazamiento = 2, cantidad;
  char simbolo, b;
  printf("Ingrese el texto: ");
  scanf("%s", texto);

  //cifradoCesar(texto, desplazamiento);
  //cifradoCesar_r(texto, desplazamiento);
  //printf("\nIngrese un caracter: ");
  //scanf("%c %c", &b, &simbolo);
  //cantidad = contarSimbolos(texto, simbolo);
  //cantidad = contarSimbolos_r(texto, simbolo);
  //printf("\nEl caracter %c se repite %i veces en la palabra %s\n", simbolo, cantidad, texto);
  //n_texto = aMayusculas(texto);
  printf("\n%s", n_texto);
}
char *palabraOrdenada(char *texto)
{
  char *n_palabra = NULL;
  n_palabra = texto;

  int i, j, n = strlen(texto);
  for (i = 1; i < n - i; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (NULL)
        return;
    }
  }
}

char *aMayusculas(char *texto)
{
  //-32;
  char *n_texto = NULL;
  n_texto = (char *)malloc(sizeof(char) * 100);

  int i, n = strlen(texto);
  for (i = 0; i < n; i++)
  {
    *(n_texto + i) = *(texto + i) - 32;
  }

  return n_texto;
}

int contarSimbolos_r(char *texto, char simbolo)
{
  if (*texto == '\0')
    return 0;
  if (*texto == simbolo)
    return 1 + contarSimbolos_r(texto + 1, simbolo);

  return (contarSimbolos_r(texto + 1, simbolo));
}

int contarSimbolos(char *texto, char simbolo)
{
  int i, n = strlen(texto), contador = 0;

  for (i = 0; i < n; i++)
  {
    if (simbolo == *(texto + i))
    {
      contador++;
    }
  }
  return contador;
}
void cifradoCesar_r(char *texto, int desplazamiento)
{
  if (*texto == '\0')
    return;

  *(texto) = *(texto) + desplazamiento;
  return cifradoCesar_r(texto + 1, desplazamiento);
}
void cifradoCesar(char *texto, int desplazamiento)
{
  int i, n = strlen(texto);
  for (i = 0; i < n; i++)
  {
    *(texto + i) = *(texto + i) + desplazamiento;
  }
}