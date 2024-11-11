#include <stdio.h>
#include <stdlib.h>

int contarSimbolos_r(char *text, char simbolo)
{

	if (*text == '\0')
	{
		return 0;
	}

	if (*(text) == simbolo)
		return 1 + contarSimbolos_r(text + 1, simbolo);
	else
		return 0 + contarSimbolos_r(text + 1, simbolo);
}

int main()
{

	char *texto = (char *)malloc(sizeof(char) * 50);
	texto = "Hola Mundo aaaaaaaaaaaaaa\0";
	int result = contarSimbolos_r(texto, 'a');

	printf("%i\n", result);

	return 0;
}