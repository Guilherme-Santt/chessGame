#include <stdio.h>

int main() {
    char Torre[] = "Torre"; 
    char Bispo[] = "Bispo";
    char rainha[] = "Rainha";
    char Cavalo[] = "Cavalo";
    int contagem = 1;

    // --- Simulação do Movimento da Torre ---
    printf("--- Movimento da %s ---\n", Torre);
    for(int i = 1; i <= 5; i++) {
        printf("Jogada: %i. Direita\n", i);
    }
    printf("\n"); 

    // --- Simulação do Movimento do Bispo ---
    printf("--- Movimento do %s ---\n", Bispo);
    while(contagem <= 5){
        printf("Jogada: %i. Cima, Direita\n", contagem);
        contagem++;
    }
    printf("\n");

    // --- Simulação do Movimento da Rainha ---
    contagem = 1; 
    printf("--- Movimento da %s ---\n", rainha);
    do{
        printf("Jogada: %i. Esquerda\n", contagem);
        contagem++;
    }while(contagem <= 8);
    printf("\n");

    // --- Simulação do Movimento do Cavalo ---
    printf("--- Movimento do %s ---\n", Cavalo);
    // O Cavalo se move duas casas para baixo e uma para a esquerda.
    
    // Variáveis para o movimento
    const int casas_verticais = 2; // Duas casas para baixo
    const int casas_horizontais = 1; // Uma casa para a esquerda
    
    // Loop for para simular o movimento vertical (duas casas para baixo)
    for (int i = 0; i < casas_verticais; i++) {
        printf("Baixo\n");
    }

    // Loop do-while para simular o movimento horizontal (uma casa para a esquerda)
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casas_horizontais);

    return 0;
}