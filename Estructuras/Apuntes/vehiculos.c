#include <stdio.h>

struct autos
{ // se crea la estructura para los autos
	char marca[15];
	char patente[7];
	int anio;
	int precio;
};
typedef struct autos CAR; // se crea una nombre para la estructura

/* nota: no se puede utilizar el nombre "auto"
por ser palabra reservada del sistema, por eso
el struct se llama "autos"
*/
int main()
{
	int n; // variable que indica el tama�o del vector

	do
	{
		printf("ingrese cantidad de vehiculos");
		scanf("%d", &n);
	} while (n <= 0);
	//...:::INICIO PROBLEMA 1:::...
	CAR v_autos[n]; // se crea un vector de tipo CAR
	int i;
	for (i = 0; i < n; i++) // ciclo for para recorrer el vector
	{
		printf("Ingrese marca del vehiculo %d:\n", i + 1);
		scanf("%s", &v_autos[i].marca);
		printf("Ingrese patente del vehiculo %d:\n", i + 1);
		scanf("%s", &v_autos[i].patente);

		do
		{
			printf("Ingrese anio del vehiculo %d:\n", i + 1);
			scanf("%d", &v_autos[i].anio);
			// Se valida los a�os de los autos
		} while (v_autos[i].anio < 1900 || v_autos[i].anio > 2019);

		do
		{
			printf("Ingrese precio del vehiculo %d:\n", i + 1);
			scanf("%d", &v_autos[i].precio);
			// se valida que el precio este entre 500 mil y 50 millones
		} while (v_autos[i].precio < 500000 || v_autos[i].precio > 50000000);

	} // fin for que recorre vector

	//...:::FIN PROBLEMA 1:::...

	//...:::INICIO PROBLEMA 2:::...
	int menor = v_autos[0].precio; // varible auxiliar para menor precio
	int mayor = v_autos[0].precio; // varible auxiliar para mayor precio
	int suma = 0;									 // varible que acumula la suma de todos los precio para el promedio
	CAR autoBarato;								 // para almecenar los datos del auto m�s barato
	CAR autoCaro;									 // para almecenar los datos del auto m�s Caro

	for (i = 0; i < n; i++) // for que recorre el vector
	{												// Se pregunta si el menor actual es
		// mayor al precio actual del vector
		if (menor >= v_autos[i].precio)
		{ // se guarda la informaci�n del auto m�s barato
			menor = v_autos[i].precio;
			autoBarato = v_autos[i];
		}
		// Se pregunta si el mayor actual es
		// menor al precio actual del vector
		if (mayor <= v_autos[i].precio)
		{ // se guarda la informaci�n del auto m�s caro
			mayor = v_autos[i].precio;
			autoCaro = v_autos[i];
		}

		// se suma el precio del precio actual
		suma = suma + v_autos[i].precio;

	} // fin for que recorre el vector

	printf("El auto m�s barato es: \n");
	printf("Marca: %s\n", autoBarato.marca);
	printf("Patente: %s\n", autoBarato.patente);
	printf("Anio: %d\n", autoBarato.anio);
	printf("Precio: %d\n", autoBarato.precio);
	printf("\n ------------------------------\n");
	printf("El auto m�s Caro es: \n");
	printf("Marca: %s\n", autoCaro.marca);
	printf("Patente: %s\n", autoCaro.patente);
	printf("Anio: %d\n", autoCaro.anio);
	printf("Precio: %d\n", autoCaro.precio);
	printf("\n ------------------------------\n");
	printf("El promedio de todos los precios es: %d", suma / n);
	//...:::FIN PROBLEMA 2:::...
}
