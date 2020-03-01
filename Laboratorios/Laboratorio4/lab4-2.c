#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void frecuencia(int **matriz, int n, int m){
  int i, j, k, l, elemento, contador;
  for (i = 0; i<n; i++){
    for(j = 0; j<m; j++){
      elemento = *(*(matriz + i) + j);
      contador = 1;
      for(k = 0; k < n; k++){
        for (l = 0; l < m; l++){
          if(i == k && j == l) continue;
          if (elemento != *(*(matriz + k) + l)) continue;
          contador++;
        }
      }

      printf("[%i] = %i veces.\n", *(*(matriz + i) + j), contador);
    }
  }
}
int main(){
  srand(time(NULL));

  int **matriz, i, j, n = 5, m = 5;
  matriz = (int **)malloc(sizeof(int *) + n);
  for(i = 0; i < n; i++){
    *(matriz + i) = (int *)malloc(sizeof(int) * m);
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      *(*(matriz + i) + j) = rand() % 3;

      printf("[%i]", *(*(matriz + i) + j));
    }
    printf("\n");
  }
  frecuencia(matriz, n, m);

  return 0;
}