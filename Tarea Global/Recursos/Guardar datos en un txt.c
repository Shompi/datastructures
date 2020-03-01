#include<stdio.h>
#include<stdlib.h>

void guardarDatos(char *texto, int numero);

int main()
{
	int numero = 0;
	char *texto = (char*)malloc(sizeof(char)*1000);
    
	printf("Escriba un texto: ");
    fflush(stdin);
    gets(texto);
    
    printf("\nIngrese un numero: ");
    scanf("%d", &numero);
    
    guardarDatos(texto, numero);
    printf("Archivo creado.\nDatos guardados.");
    
    return 0;
}

void guardarDatos(char *texto, int numero)
{
    FILE *fp;
	fp = fopen ("datos_guardados.txt", "w");//Abrimos archivo "w" -> "Write"        
	if (fp == NULL) { printf("Archivo no encontrado"); return;}
	
	/*Los datos se guardarán de la misma forma como si se mostraran por consola*/
	fprintf(fp, "El texto ingresado fue: %s", texto);
    fprintf(fp, "\nNúmero ingresado: %d", numero);
    
    fclose (fp);    
}
