#include <stdio.h>

int main()
{
	float res;
	int x = 2, y = 4;
	
	float A = 1/(float) x;
	float B = (x+y)/ 3.0;
	float C = 2*((float) x/y);
	
	res = A+B+C;  
    printf("res = %f", res);
	return 0;
}