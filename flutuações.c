#include <stdio.h>

int main() {
    /*
    Flutuações de ponto flutuante
    float (4 bytes) - precisão simples
    double (8 bytes) - precisão dupla
    long double (16 bytes) - precisão estendida

    %f - float e double
    %Lf - long double

    */

    int a = 10, b = 3;
    float resultado1 = (float) a / b; // divisão de menor precisão
    double resultado2 = (double) a / b; // divisão de média precisão
    long double resultado3 = (long double) a / b; // divisão de maior precisão

    printf("Resultado da divisão entre %d e %d é: %.2f\n", a, b, resultado1);
    printf("Resultado da divisão entre %d e %d é: %.5lf\n", a, b, resultado2);
    printf("Resultado da divisão entre %d e %d é: %.10Lf\n", a, b, resultado3);

    return 0;
}