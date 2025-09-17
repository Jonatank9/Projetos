#include <stdio.h>

int main() {
    int nota1, nota2, nota3;
    float media;

    printf("***Cálculo da Média dos Alunos***\n");

    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%d", &nota3);

    // caso, nota1, nota2 e nota3 fossem do tipo float, não seria necessário o casting (float)
    media = (float)(nota1 + nota2 + nota3) / 3;
    printf("A média do aluno é: %.2f\n", media);



    return 0;
}