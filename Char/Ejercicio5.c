#include <stdio.h>
#include <ctype.h>  // Para la función isdigit()

int main() {
    char caracter;

    // Pedir al usuario que ingrese un carácter
    printf("Ingresa un carácter: ");
    scanf(" %c", &caracter);  

    // Verificar si es un dígito
    if (isdigit(caracter)) {
        printf("'%c' es un dígito numérico.\n", caracter);
    } else {
        printf("'%c' NO es un dígito numérico.\n", caracter);
    }

    return 0;
}
