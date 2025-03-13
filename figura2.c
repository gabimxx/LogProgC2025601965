#include <stdio.h>
#include <math.h>


int main()
{
	//Calcular el area total y perimetro total de las sig. figuras
	
	float L = 7, at, pt, h;
	h = sqrt( pow (L, 2) + pow(L,2));
	at = 8 * L + 3 * h;
	pt = 3 * L * L/2 + L * L + 2 * L * L;
	
	printf("at= %f\n", at);
	printf("pt= %f\n", pt);
    return 0;
}