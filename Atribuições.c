#include <stdio.h>

int main() {
    /*
    Atribuição Simples (=)
    Atribuição Composta (+=, -=, *=, /=)
    */

    int numero1 = 10, numero2, resultado;

    resultado = 10; // Atribuição Simples
    printf("Resultado: %d\n", resultado);

    resultado += 20; // Atribuição Composta (equivalente a resultado = resultado + 20)
    printf("Resultado: %d\n", resultado);

    resultado -= numero1; // Atribuição Composta (equivalente a resultado = resultado - numero1)
    printf("Resultado: %d\n", resultado);

    resultado *= 5; // Atribuição Composta (equivalente a resultado = resultado * 5)
    printf("Resultado: %d\n", resultado);

    resultado /= 2; // Atribuição Composta (equivalente a resultado = resultado / 2)
    printf("Resultado: %d\n", resultado);



    return 0;
}