#include <stdio.h>

void main()
{
	
	int character;
	int numberCharacter = 0;

	printf("============ Contador de caracteres ============ \n");

	while ((character = getchar()) != '+') {
		
		putchar(character);
		numberCharacter++;
	
	}
	
	//el ultimo caracter leido es un espacio o fin de linea o enter);
	//printf("\n el numero de caracteres leidos es: %d", numberCharacter);

	//ahorra el ultimo caracter leido es un '+', que indica el fin de la lectura
	// el caracter '+' no se cuenta, o no es leido
	// los saltos de linea si se cuentan como un caracter
	printf("\nNumero de caracteres leidos: %d", numberCharacter);
	
	printf("\n============ Contador de caracteres ============\n\n");
}