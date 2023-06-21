#include <stdio.h>

void sumarNumero(int* arreglo, int longitud, int numero) {
    int i;
    for (i = 0; i < longitud; i++) {
        *(arreglo + i) += numero;
    }
}

int main() {
    int arreglo[] = {1, 0, 0, 5, 3};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    sumarNumero(arreglo, longitud, numero);

    printf("El arreglo modificado es: ");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}