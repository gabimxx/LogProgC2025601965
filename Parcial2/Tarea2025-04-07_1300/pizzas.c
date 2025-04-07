#include <stdio.h>

int main() {
    int pizza;
    int opcion;
    char* ingrediente;

    printf("¿Quiere una pizza vegetariana o no? (1 = si, 0 = no):\n");
    scanf("%d", &pizza);

    if (pizza == 1) {
        printf("Ingredientes vegetarianos: 1. Pimiento  2. Tofu\n");
        printf("Elija una opcion:\n");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Pimiento\n");
            ingrediente = "Pimiento";
        } else {
            printf("Tofu\n");
            ingrediente = "Tofu";
        }
    } else {
        printf("Ingredientes no vegetarianos: 1. Peperoni  2. Jamon  3. Salmon\n");
        printf("Elija una opcion:\n");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Peperoni\n");
            ingrediente = "Peperoni";
        } else if (opcion == 2) {
            printf("Jamon\n");
            ingrediente = "Jamon ";
        } else {
            printf("Salmon\n");
            ingrediente = "Salmon";
        }
    }

    printf("La pizza que se eligio fue:\n");
    if (pizza == 1) {
        printf("Vegetariana\n");
    } else {
        printf("No vegetariana\n");
    }

    printf("Ingredientes: Mozzarella, Tomate y ", ingrediente);

    return 0;
}
