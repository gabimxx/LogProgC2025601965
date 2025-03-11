#include <stdio.h>
#include <math.h>

int main() 
{
    double L = 7; 
    double pt, at;

        double semiCirc = (M_PI * L) / 2;
        double ladosVert = 2 * L;
        double base = (3.0 / 5.0) * L;
        double ladosSal = (6.0 / 5.0) * L;
        double horzSal = (2.0 / 5.0) * L;
        double vertInf = (2.0 / 5.0) * L;

    pt = semiCirc + ladosVert + base + ladosSal + horzSal + vertInf;

        double areaRect = L * L;
        double areaSemi = (M_PI * pow(L / 2, 2)) / 2;
        double areaSal = 2 * ((3.0 / 5.0 * L) * (1.0 / 5.0 * L));
        double areaInf = 2 * pow((1.0 / 5.0 * L), 2);

    at = areaRect + areaSemi + areaSal + areaInf;

        printf("perimetro total = %.4f\n", pt);
        printf("area total = %.4f\n", at);

    return 0;
}