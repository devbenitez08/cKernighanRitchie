#include <stdio.h>

void main()
{
	
	int character;
	int numberLine = 0;

	printf("============ Contador de lineas ============ \n");

	while ((character = getchar()) != '+')		
		if (character == '\n')
			++numberLine;		//numberLine++;
		
	printf("\nNumero de lineas en el texto es: %d", ++numberLine);
	
	printf("\n============ Contador de lineas ============ \n\n");
}