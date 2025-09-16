#include <stdio.h>

int main() {
    /*
    Incremento (++)
    Pré-incremento ++a
    Pós-incremento a++
    Decremento (--)
    Pré-decremento --a
    Pós-decremento a--
    */

    int numero1 = 4, numero2 = 2, numero3 = 8, resultado, resultado2;

    printf("Antes incremento %d\n", numero1);
    numero1++; // código para incrementar
    printf("Depois incremento %d\n", numero1);
    numero1--; // código para decrementar
    printf("Depois decremento %d\n", numero1);
    
    resultado = ++numero2; // pré-incremento 
    printf("Resultado de numero2 é %d e do pré-incremento %d\n", numero2, resultado);

    resultado = numero2++; // pós-incremento
    printf("Resultado de numero2 é %d e do pós-incremento %d\n", numero2, resultado);

    resultado2 = --numero3; // pré-decremento
    printf("Resultado de numero3 é %d e do pré-decremento %d\n", numero3, resultado2);

    resultado2 = numero3--; // pós-decremento
    printf("Resultado de numero3 é %d e do pós-decremento %d\n", numero3, resultado2);



    return 0;

}