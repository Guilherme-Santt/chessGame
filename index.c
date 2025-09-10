#include <stdio.h>

// --- Funções Recursivas para Movimento ---

// Função recursiva para o movimento da Torre
// Move a peça para a direita por 'casas' número de vezes.
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Jogada: %i. Direita\n", 6 - casas);
        moverTorre(casas - 1); // Chama a si mesma para a próxima jogada
    }
}

// Função recursiva para o movimento do Bispo
// Move a peça na diagonal (Cima, Direita) por 'casas' número de vezes.
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Jogada: %i. Cima, Direita\n", 6 - casas);
        moverBispo(casas - 1);
    }
}

// Função recursiva para o movimento da Rainha
// Move a peça para a esquerda por 'casas' número de vezes.
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Jogada: %i. Esquerda\n", 9 - casas);
        moverRainha(casas - 1);
    }
}

int main() {
    char Torre[] = "Torre"; 
    char Bispo[] = "Bispo";
    char rainha[] = "Rainha";
    char Cavalo[] = "Cavalo";
    
    // --- Simulação do Movimento da Torre com Recursividade ---
    printf("--- Movimento da %s (Recursividade)---\n", Torre);
    moverTorre(5); // Inicia o movimento da Torre com 5 casas
    printf("\n"); 

    // --- Simulação do Movimento do Bispo com Recursividade ---
    printf("--- Movimento do %s (Recursividade)---\n", Bispo);
    moverBispo(5); // Inicia o movimento do Bispo com 5 casas
    printf("\n");

    // --- Simulação do Movimento da Rainha com Recursividade ---
    printf("--- Movimento da %s (Recursividade)---\n", rainha);
    moverRainha(8); // Inicia o movimento da Rainha com 8 casas
    printf("\n");

    // --- Simulação do Movimento do Cavalo com Loops Aninhados e Controles ---
    printf("--- Movimento do %s (Loops Complexos)---\n", Cavalo);
    // O Cavalo se move duas casas para cima e uma para a direita.
    
    // Variáveis para o movimento do Cavalo
    int casas_verticais = 2;
    int casas_horizontais = 1;

    // Loop externo para o movimento vertical (para cima)
    for (int i = 1; i <= casas_verticais + casas_horizontais; i++) {
        // Se a jogada for 1 ou 2, move para cima
        if (i <= casas_verticais) {
            printf("Jogada: %i. Cima\n", i);
            continue; // Pula para a próxima iteração do loop
        }
        
        // Se a jogada for 3, move para a direita e encerra o loop
        if (i > casas_verticais) {
            printf("Jogada: %i. Direita\n", i);
            break; // Encerra o loop após o movimento horizontal
        }
    }
    printf("\n");
    
    // --- Simulação do Movimento do Bispo com Loops Aninhados ---
    printf("--- Movimento do %s (Loops Aninhados)---\n", Bispo);
    int vertical = 5;
    int horizontal = 5;
    
    // Loop externo (vertical)
    for (int i = 1; i <= vertical; i++) {
        // Loop interno (horizontal) para a mesma jogada
        for (int j = 1; j <= horizontal; j++) {
            if (i == j) { // Move na diagonal
                printf("Jogada: %i. Cima, Direita\n", i);
            }
        }
    }

    return 0;
}