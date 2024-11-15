#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX 10
struct punto
{
	float x;
	float y;
};

float dist(int index, int index2, int cant, struct punto puntos[]);
void equilatero(int cant, struct punto puntos[]);
int main()
{
	srand(time(NULL));
	struct punto puntos[MAX];
	int cantPuntos = 3;
	int i;
	for (i = 0; i < cantPuntos; i++)
	{
		printf("Ingrese las coordenadas: ");
		scanf("%f %f", &puntos[i].x, &puntos[i].y);
	}
	printf("Puntos generados:\n");
	for (i = 0; i < cantPuntos; i++)
	{
		printf("%i - (%.0f, %.0f)\n", i, puntos[i].x, puntos[i].y);
	}

	printf("\n");
	int p1, p2;
	printf("Escoja los puntos a comparar: ");
	scanf("%i %i", &p1, &p2);
	float distancia = dist(p1, p2, cantPuntos, puntos);
	printf("Distancia entre (%.0f, %.0f) y (%.0f, %.0f) = %.2f\n", puntos[p1].x, puntos[p1].y, puntos[p2].x, puntos[p2].y, distancia);

	equilatero(cantPuntos, puntos);

	return 0;
}

void equilatero(int cant, struct punto puntos[])
{
	float distancias[MAX];
	float distanceX;
	float distanceY;
	float distFinal;
	int i;
	for (i = 0; i < cant - 1; i++)
	{
		distanceX = pow(puntos[i + 1].x - puntos[i].x, 2);
		distanceY = pow(puntos[i + 1].y - puntos[i].y, 2);
		distFinal = sqrt(distanceX + distanceY);
	}
	distanceX = pow(puntos[cant - 1].x - puntos[0].x, 2); // El primero con el ultimo
	distanceY = pow(puntos[cant - 1].y - puntos[0].y, 2);
	distFinal = sqrt(distanceX + distanceY);

	float paralela;
	for (i = 0; i < cant; i++)
	{
		if (puntos[i].y == puntos[i + 1].y)
			paralela = 1;
	}
	if (paralela == 1)
	{
		if (distancias[0] == distancias[1] && distancias[1] == distancias[2] && distancias[0] == distancias[2])
		{
			printf("El triangulo es equilatero\n");
		}
		else
		{
			printf("El triangulo no es equilatero\n");
		}
	}
	else
	{
		printf("No hay recta paralela al eje X\n");
	}
}

float dist(int p1, int p2, int cantPuntos, struct punto puntos[])
{
	/*
	 *Formula:
	 *d = pow(x2 - x1, 2) + pow(y2 - y1, 2);
	 *d = sqrt(d);
	 */
	float distanceX;
	float distanceY;
	float distFinal;
	distanceX = pow(puntos[p2].x - puntos[p1].x, 2);
	distanceY = pow(puntos[p2].y - puntos[p1].y, 2);
	distFinal = sqrt(distanceX + distanceY);
	return distFinal;
}