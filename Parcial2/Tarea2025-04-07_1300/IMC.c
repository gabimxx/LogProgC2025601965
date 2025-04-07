#include <stdio.h>

int main(){
    float imc, peso, altura;

    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("Su IMC es: %.2f\n", imc);

    if (imc <= 18.4) {
        printf("Bajo peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Normal\n");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Sobrepeso\n");
    } else if (imc >= 30.0 && imc <= 34.9) {
        printf("Obesidad clase 1\n");
    } else if (imc >= 35.0 && imc <= 39.9) {
        printf("Obesidad clase 2\n");
    } else {
        printf("Obesidad clase 3\n");
    }
    return 0;
}
