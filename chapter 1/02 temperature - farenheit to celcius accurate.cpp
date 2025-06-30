// 01 temperature - farenheit to celcius.cpp : 
#include <stdio.h>
#include <iostream>

int main()
{
	// ºC = 5/9 * (ºF - 32)
	/* print farenheit to celcius from 0 to 300 into 20 steps */
		
	float step = 20;
	
	float farenheit = 0;
	float maximumF = 300;

	float celcius;

	printf(" ====== Farenheit to Celcius Calculator Accurate =====\n\n");

	printf("Farenheit\tCelcius\n");
	while (farenheit <= maximumF)
	{
		celcius = 5.0 / 9.0 * (farenheit - 32);
		
		printf("%3.0f\t\t%6.2f C\n", farenheit, celcius);

		farenheit += step;
	}

	printf(" =====================================================\n\n");
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración