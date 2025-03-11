#include <stdio.h>
#include <math.h>

int main() {
    double L = 7, r = L, B = 3 * L, b = L, h_trape =       3* L, h_recta = L, pt, at;
   
    double perimetrosemi = M_PI * r;
    double lado_obli = sqrt(pow((B - b) / 2, 2) + pow(h_trape, 2));
    double perimetrotrape = B + b + 2 * lado_obli;
    double perimetrorecta = 2 * (B + h_recta);
    pt = perimetrosemi + perimetrotrape + perimetrorecta - B;
    
    double areasemi = (1.0 / 2.0) * M_PI * pow(r, 2);
    double areatrape= (1.0 / 2.0) * (B + b) *                      h_trape;
    double arearecta = B * h_recta;
    at = areasemi + areatrape + arearecta; 
    
    printf("pt: %.4f\n", pt);
    printf("at: %.4f\n", at);
    
    return 0;
}