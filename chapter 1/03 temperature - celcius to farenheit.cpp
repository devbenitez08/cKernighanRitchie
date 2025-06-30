#include <stdio.h>

// ºF = (ºC * 9/5) + 32
/* print celcius to farenheit  from 0 to 300 into 20 steps */

int main()
{

		
	float step = 20;
	
	float celcius = 0;
	float maximumC = 300;

	float farenheit = 0;

	printf(" ====== Celcius to Farenheit Calculator Accurate =====\n\n");

	printf("Celcius \tFarenheit\n");
	while (celcius <= maximumC)
	{
		farenheit = (5.0 / 9.0 * celcius) + 32;
		
		printf("%3.0f\t\t%6.2f C\n", celcius, farenheit);

		celcius += step;
	}

	printf(" =====================================================\n\n");
}