#include <stdio.h>

// =======================
// Funções Recursivas
// =======================

// Torre: move 5 casas para a Direita
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Rainha: move 8 casas para a Esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Bispo: recursivamente simula 5 movimentos na diagonal "Cima Direita"
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// =======================
// Função Principal
// =======================
int main() {
    // =======================
    // Movimento da Torre (Recursivo)
    // =======================
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // =======================
    // Movimento da Rainha (Recursivo)
    // =======================
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // =======================
    // Movimento do Bispo (Recursivo + Loops Aninhados)
    // =======================
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5);

    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    int passosVerticais = 5;
    int passosHorizontais = 1; // Uma casa horizontal por cada movimento
    for (int i = 0; i < passosVerticais; i++) {
        for (int j = 0; j < passosHorizontais; j++) {
            printf("Cima Direita\n");
        }
    }

    // =======================
    // Movimento do Cavalo (Loops Aninhados com múltiplas variáveis)
    // Cavalo agora se move: 2 para cima e 1 para a direita
    // =======================
    printf("\nMovimento do Cavalo:\n");

    int movimentosCavalo = 1; // Simular 1 movimento "L"
    for (int m = 0; m < movimentosCavalo; m++) {
        for (int i = 0, j = 0; i < 3; i++) {
            if (i < 2) {
                printf("Cima\n");
                continue; // continua subindo
            }

            // quando i == 2, faz o passo lateral
            while (j < 1) {
                printf("Direita\n");
                j++;
                break; // só anda uma vez pra direita
            }
        }
    }

    return 0;
}
