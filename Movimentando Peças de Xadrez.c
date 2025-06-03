#include <stdio.h>

int main() {
    // Torre: 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

   
 // Bispo: 5 casas na diagonal (Cima + Direita)
    int casasBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // Rainha: 8 casas para a esquerda
    int casasRainha = 8;
    int j = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    return 0;
}
