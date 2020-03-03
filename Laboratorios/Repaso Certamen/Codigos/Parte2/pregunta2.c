#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int eliminarTodos(int *v, int n, int numeroEliminar)
{
  /*
    NOTA: Está función debe retornar el nuevo LARGO
    del array.
  */

  int elementos_quitados = 0, i, j;
  for (i = 0; i < n; i++)
  {
    if (*(v + i) == numeroEliminar)
    {
      //Si encuentro una coincidencia, muevo
      //el array completo hacia atrás desde la posición
      //en la que está el número que quiero eliminar.
      for (j = i; j < n; j++)
      {
        *(v + j) = *(v + j + 1);
      }
      //Le sumo 1 a elementos quitados.
      elementos_quitados++;
      //Devuelvo el contador hacia atras para no saltarme
      //un potencial numero repetido.
      i--;
    }
  }

  //El nuevo largo será el largo anterior menos los elementos que quité.
  return n - elementos_quitados;
}

int main()
{
  srand(time(NULL));
  int *vector = (int *)malloc(sizeof(int) * 10);

  int i, n = 10;
  for (i = 0; i < n; i++)
  {
    *(vector + i) = rand() % 5;

    printf("[%i] ", *(vector + i));
  }

  printf("\nIngrese el numero a eliminar: ");
  int eliminar;
  scanf("%i", &eliminar);

  int nuevoLargo = eliminarTodos(vector, n, eliminar);
  printf("\nNueva dimension del Array: %i\n", nuevoLargo);

  for (int i = 0; i < nuevoLargo; i++)
  {
    printf("[%i] ", *(vector + i));
  }
  printf("\n");

  return 0;
}