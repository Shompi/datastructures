#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct punto
{
  float x;
  float y;
} * Punto;

Punto crearPunto(float x, float y)
{
  Punto p;
  p = (Punto)malloc(sizeof(struct punto));
  p->x = x;
  p->y = y;
  return p;
}

Punto *generarArregloPuntos(float *xs, float *ys, int n)
{
  int i;

  Punto *Arreglo;
  Arreglo = (Punto *)malloc(sizeof(Punto) * n);
  for (i = 0; i < n; i++)
    *(Arreglo + i) = (Punto)malloc(sizeof(struct punto));
  for (i = 0; i < n; i++)
    *(Arreglo + i) = crearPunto(*(xs + i), *(ys + i));

  return Arreglo;
}

float distanciaTotal(Punto *puntos, int n)
{
  int i;
  float distancia = 0, parUno, parDos;
  for (i = 0; i < n - 1; i++)
  {
    Punto a = *(puntos + i);
    Punto b = *(puntos + i + 1);

    distancia += sqrt(pow(b->x - a->x, 2) + pow(b->y - a->y, 2));

  }
  return distancia;
}

int main()
{
  srand(time(NULL));
  printf("Ingrese x e y para el punto: ");
  float x, y;
  scanf("%f %f", &x, &y);
  Punto p = crearPunto(x, y);
  printf("Punto creado: %.2f, %.2f\n", p->x, p->y);

  int i, n = 10;
  float *xs = (float *)malloc(sizeof(float) * n);
  float *ys = (float *)malloc(sizeof(float) * n);

  for (i = 0; i < n; i++)
  {
    *(xs + i) = rand() % 10;
    *(ys + i) = rand() % 10;
  }
  Punto *nuevoArreglo = generarArregloPuntos(xs, ys, n);
  for (i = 0; i < n; i++)
  {
    printf("\nPunto Generado: %.2f, %.2f", (*(nuevoArreglo + i))->x, (*(nuevoArreglo + i))->y);
  }

  float total = distanciaTotal(nuevoArreglo, n);
  printf("\nLa distancia total entre los puntos es: %.3f\n");
  return 0;
}