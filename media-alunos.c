#include <stdio.h>

int main() {
    
    float nota1, nota2, media;

    printf("Digite as notas dos alunos \n");
    printf("Digite a primeira nota \n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("A media dos alunos é: %.2f\n", media);

    if (media >= 6) {
        printf("Parabéns, você foi aprovado!!!\n");
    } else {
        printf("Infelizmente, você foi reprovado.\n");
    }


    return 0;
}