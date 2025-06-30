// 01 temperature - farenheit to celcius.cpp : 
#include <stdio.h>
#include <iostream>

int main()
{
	// ºC = 5/9 * (ºF - 32)
	/* print farenheit to celcius from 0 to 300 into 20 steps */
		
	int step = 20;
	
	int farenheit = 0;
	int maximumF = 300;

	int celcius;

	printf(" ====== Farenheit to Celcius Calculator =====\n\n");

	while (farenheit <= maximumF)
	{
		celcius = 5 * (farenheit - 32) / 9;
		
		//std::cout << minimumF << " F = " << celcius << " C" << std::endl;
		printf("%6d F = %3d C\n", farenheit, celcius);
		//printf("%4d F \t = %d C\n", minimumF, celcius);

		farenheit += step;
	}

	printf(" ============================================\n\n");
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración