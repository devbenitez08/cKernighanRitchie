#include <stdio.h>

#define STEP 20
#define LOWER 0
#define UPPER 300

/* print celcius to kelvin from 0 to 300 into 20 steps */
// ºC = ºK - 273.15 

int main()
{
	
	int kelvin = 0;

	printf(" ====== Kelvin to Celcius Conversor Accurate =====\n\n");

	printf("Kelvin \tCelcius\n");
	for (kelvin = LOWER; kelvin <= UPPER; kelvin += STEP)
		printf("%3.0d\t\t%6.2f C\n", kelvin, kelvin - 273.15);

	printf(" =====================================================\n\n");
}