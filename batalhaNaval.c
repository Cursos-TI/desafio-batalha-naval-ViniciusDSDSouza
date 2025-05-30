#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Criação do tabuleiro 5x5 (inicializado com 0)
    int tabuleiro[5][5] = {0};

    // --- Variáveis para entrada manual (valores definidos no código) ---

    // Navio vertical: começa na linha 1, coluna 2 e ocupa 3 posições
    int linha_inicial_vertical = 1;
    int coluna_vertical = 2;
    int tamanho_vertical = 3;

    // Navio horizontal: começa na linha 4, coluna 0 e ocupa 3 posições
    int linha_horizontal = 4;
    int coluna_inicial_horizontal = 0;
    int tamanho_horizontal = 3;

    // --- Posicionamento dos navios ---

    // Posiciona o navio vertical no tabuleiro
    for (int i = 0; i < tamanho_vertical; i++) {
        int linha = linha_inicial_vertical + i;
        tabuleiro[linha][coluna_vertical] = 1;
        printf("Navio vertical - Coordenada: (%d, %d)\n", linha, coluna_vertical);
    }

    // Posiciona o navio horizontal no tabuleiro
    for (int j = 0; j < tamanho_horizontal; j++) {
        int coluna = coluna_inicial_horizontal + j;
        tabuleiro[linha_horizontal][coluna] = 1;
        printf("Navio horizontal - Coordenada: (%d, %d)\n", linha_horizontal, coluna);
    }

    return 0;
}
