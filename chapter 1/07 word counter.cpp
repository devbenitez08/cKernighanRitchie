#include <stdio.h>

#define OUT 0
#define INT 1


void main()
{
	
	int character;
	int newLine = 0;
	int newWord = 0;
	int newCharacter = 0;
	int state = OUT;

	printf("============ Contador de palabras ============ \n");

	while ((character = getchar()) != '+') {
	
		newCharacter++;	//cuantos caracteres hay en el texto

		if (character == '\n')	//numero de lineas
			++newLine;
		if (character == ' ' || character == '\n' || character == '\t')
			state = OUT;
		else if (state == OUT) {
			state = INT;
			newWord++;	//numero de palabras
		}
	}
		
		
	printf("\ncaracteres: %d \t saltos: %d \t palabras: %d \n", newCharacter, ++newLine, newWord);
	
	printf("\n============ Contador de palabras ============ \n\n");
}