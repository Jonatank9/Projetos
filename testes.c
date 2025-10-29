#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    
    int rodadas;
    int jogador1_pontos = 0;
    int jogador2_pontos = 0;
    
    for (rodadas = 1; rodadas <= 5; rodadas++) {
        
        int jogador1_carta = rand() % 52 + 1;
        int jogador2_carta = rand() % 52 + 1;

        printf("Rodada %d:\n", rodadas);
        printf("Jogador 1 tirou a carta: %d\n", jogador1_carta);
        printf("Jogador 2 tirou a carta: %d\n", jogador2_carta);

        if (jogador1_carta > jogador2_carta) {
            printf("Jogador 1 vence a rodada!\n\n");
            jogador1_pontos++;
        } else if (jogador2_carta > jogador1_carta) {
            printf("Jogador 2 vence a rodada!\n\n");
            jogador2_pontos++;
        } else {
            printf("Empate na rodada!\n\n");
        }

        if (rodadas == 5) {
            if (jogador1_pontos > jogador2_pontos) {
                printf("Jogador 1 vence o jogo com %d pontos!\n", jogador1_pontos);
            } else if (jogador2_pontos > jogador1_pontos) {
                printf("Jogador 2 vence o jogo com %d pontos!\n", jogador2_pontos);
            } else {
                printf("O jogo terminou em empate com %d pontos cada!\n", jogador1_pontos);
            }
            printf("Fim do jogo!\n");
    } 
    }


    return 0;
}