#include <stdio.h>


// Funções recursivas para Torre, Bispo e Rainha


// --- TORRE ---
// Move-se 5 casas para a direita (recursivo)
void moverTorre(int casas, int atual) {
    if (atual > casas) return;  // Caso base: terminou o movimento
    printf("Direita (%d casa)\n", atual);
    moverTorre(casas, atual + 1);  // Chamada recursiva
}

// --- BISPO ---
// Move-se 5 casas na diagonal (cima + direita)
// Implementado com recursividade + loops aninhados
void moverBispo(int casas, int atual) {
    if (atual > casas) return; // Caso base

    // Loop externo: movimento vertical
    for (int i = 0; i < 1; i++) {
        // Loop interno: movimento horizontal
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita (%d casa)\n", atual);
        }
    }

    moverBispo(casas, atual + 1); // Chamada recursiva
}

// --- RAINHA ---
// Move-se 8 casas para a esquerda (recursivo)
void moverRainha(int casas, int atual) {
    if (atual > casas) return;  // Caso base
    printf("Esquerda (%d casa)\n", atual);
    moverRainha(casas, atual + 1);
}


// Função com loops complexos para o CAVALO


void moverCavalo() {
    // O cavalo se move 2 casas para cima e 1 para a direita (em “L”)
    // Aqui usamos loops aninhados com múltiplas condições,
    // e controlamos o fluxo com break e continue.

    printf("Movimento do CAVALO:\n");

    int movimentoCima = 2;
    int movimentoDireita = 1;

    for (int i = 1; i <= movimentoCima; i++) {
        if (i == 2) {
            
        }
        printf("Cima (%d casa)\n", i);

        // Loop interno controla a parte horizontal (direita)
        for (int j = 1; j <= movimentoDireita; j++) {
            // Condição para demonstrar controle de fluxo
            if (i > movimentoCima) break;
            if (i == movimentoCima && j == 1) {
                printf("Direita (%d casa)\n", j);
            }
        }
    }
}


// Função principal


int main() {
    // Quantidade de casas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

   
    // TORRE (recursividade simples)
    
    printf("Movimento da TORRE:\n");
    moverTorre(casasTorre, 1);
    printf("\n");

   
    // BISPO (recursividade + loops)
    
    printf("Movimento do BISPO:\n");
    moverBispo(casasBispo, 1);
    printf("\n");

    
    // RAINHA (recursividade simples)
    
    printf("Movimento da RAINHA:\n");
    moverRainha(casasRainha, 1);
    printf("\n");

    
    // CAVALO (loops complexos)
    
    moverCavalo();

    printf("\nSimulação concluída com sucesso!\n");
    return 0;
}
