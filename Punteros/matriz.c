#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int i, j;
  int **matriz = NULL;
  matriz = (int **)malloc(sizeof(int *) * 5);
  for(i = 0; i < 5; i++){
    *(matriz + i) = (int *)malloc(sizeof(int) * 5);
  }
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      *(*(matriz + i) + j) = rand() % 10;
      printf("[%i]", *(*(matriz + i) + j));
    }
    printf("\n");
  }
}