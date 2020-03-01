/*Arreglo con puntero*/
#include <stdio.h>

int main(){
  int v[20];
  int i;
  int *puntero;
  for(i=0; i<20; i++){
    v[i] = i+1;
  }

  puntero = v;

  for(i=0; i<20; i++){
    printf("[%i] ", puntero[i]);
  }
}

