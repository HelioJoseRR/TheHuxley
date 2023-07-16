#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
	double raio;
	double area;
	double volume;

	scanf("%lf", &raio);

	area = 4 * 3.1416 * pow(raio, 2);
	volume = (4 * 3.1416 * pow(raio, 3) / 3);

	printf("%.2lf\n %.2lf", area , volume);

	return 0;
}