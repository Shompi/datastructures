#include <stdio.h>
#include <stdlib.h>

int main(){
  int *p;
  p = (int *)malloc(sizeof(int));
  int i = 0;
  for (i = 0; i<9999999; i++){
    printf("%d", *(p + i));
  }
  return 0;
}