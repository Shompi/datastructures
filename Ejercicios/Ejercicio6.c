#include <stdio.h>
#include <stdlib.H>
#include <string.h>
char *abc(char *texto);
int main(){
  char *texto = "kvjsaskjdkjjsakksals";
  char *n_texto = NULL;
  n_texto = (char *)malloc(sizeof(char) * strlen(texto));
  n_texto = abc(texto);
  printf("%s\n", n_texto);

  return 0;
}

char *abc(char *texto){
  char *n_texto = NULL;
  char aux;
  n_texto = (char *)malloc(sizeof(char) * strlen(texto));
  strcpy(n_texto, texto);
  int i, j, n = strlen(texto);
  for(i = 1; i < n; i++){
    for(j = 0; j < n-i; j++){
      if(*(n_texto + j) > *(n_texto + j + 1)){
        aux = *(n_texto + j);
        *(n_texto +j) = *(n_texto + j + 1);
        *(n_texto + j + 1) = aux;
      }
    }
  }

  return n_texto;
}