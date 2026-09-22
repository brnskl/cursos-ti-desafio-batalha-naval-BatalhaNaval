#include <stdio.h>

int main() {

    // Tamanho do tabuleiro
    int tabuleiro[10][10] = {0};

    // Vetores que representam os dois navios
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios
    // O primeiro número representa a linha
    // O segundo número representa a coluna
    int linhaHorizontal = 2;
    int colunaHorizontal = 3;

    int linhaVertical = 5;
    int colunaVertical = 7;

    // Tamanho fixo dos navios
    int tamanhoNavio = 3;

    // ==========================================
    // VALIDAÇÃO DO NAVIO HORIZONTAL
    // ==========================================

    // Verifica se o navio horizontal cabe no tabuleiro
    if (linhaHorizontal >= 0 && linhaHorizontal < 10 &&
        colunaHorizontal >= 0 &&
        colunaHorizontal + tamanhoNavio <= 10) {

        // Posiciona cada parte do navio horizontal
        for (int i = 0; i < tamanhoNavio; i++) {

            // Verifica se a posição já está ocupada
            if (tabuleiro[linhaHorizontal][colunaHorizontal + i] == 0) {
                tabuleiro[linhaHorizontal][colunaHorizontal + i] =
                    navioHorizontal[i];
            } else {
                printf("Erro: o navio horizontal se sobrepoe a outro navio.\n");
                return 1;
            }
        }

    } else {
        printf("Erro: coordenadas do navio horizontal sao invalidas.\n");
        return 1;
    }

    // ==========================================
    // VALIDAÇÃO DO NAVIO VERTICAL
    // ==========================================

    // Verifica se o navio vertical cabe no tabuleiro
    if (linhaVertical >= 0 &&
        linhaVertical + tamanhoNavio <= 10 &&
        colunaVertical >= 0 &&
        colunaVertical < 10) {

        // Posiciona cada parte do navio vertical
        for (int i = 0; i < tamanhoNavio; i++) {

            // Verifica se a posição já está ocupada
            if (tabuleiro[linhaVertical + i][colunaVertical] == 0) {
                tabuleiro[linhaVertical + i][colunaVertical] =
                    navioVertical[i];
            } else {
                printf("Erro: o navio vertical se sobrepoe a outro navio.\n");
                return 1;
            }
        }

    } else {
        printf("Erro: coordenadas do navio vertical sao invalidas.\n");
        return 1;
    }

    // ==========================================
    // EXIBIÇÃO DO TABULEIRO
    // ==========================================

    printf("\nTabuleiro de Batalha Naval:\n\n");

    // Percorre as 10 linhas
    for (int i = 0; i < 10; i++) {

        // Percorre as 10 colunas
        for (int j = 0; j < 10; j++) {

            // Exibe cada posição do tabuleiro
            printf("%d ", tabuleiro[i][j]);
        }

        // Pula para a próxima linha
        printf("\n");
    }

    return 0;
}