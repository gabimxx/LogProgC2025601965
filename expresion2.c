#include <stdio.h>

int main()
{
	float x, res;
	x = 3; 
    float A = (float) 1/2 * (x);
	float B = (3 +(x))/ 2;
	float C = 2 * (x * x);
	float D = (2 + 3) * (x);
	
    res = (A+(B * C )) / D; 
    printf("res = %f\n", res);
    return 0;
}