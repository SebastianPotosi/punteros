#include <stdio.h>

int comparar_cadenas(char* cadena1, char* cadena2) {
    while (*cadena1 && *cadena2) {   //para comprobar si los caracteres a los que apuntan los punteros cadena1 y cadena2 no son caracteres nulos '\0'.
        if (*cadena1 != *cadena2) {
            return 0; // Las cadenas no son iguales
        }
        
        cadena1++;  // avanza al siguiente caracter de la cadena para realizar la comparacion uno por uno
        cadena2++;
    }
    
    if (*cadena1 == *cadena2) {
        return 1; // Las cadenas son iguales
    }

    return 0; // Las cadenas son diferentes en longitud
}

int main() {
    char cadena1[100];
    char cadena2[100];
    
    printf("Ingrese la cadena 1: ");
    scanf("%s", cadena1);
    
    printf("Ingrese la cadena 2: ");
    scanf("%s", cadena2);
    
    int resultado = comparar_cadenas(cadena1, cadena2);
    
    if (resultado) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }
    
    return 0;
}