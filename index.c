#include <stdio.h>

int main() {
    char Torre[] = "Torre"; 
    char Bispo[] = "Bispo";
    char rainha[] = "Rainha";
    int contagem = 1;

    // --- Simulação do Movimento da Torre ---
+    printf("--- Movimento da %s ---\n", Torre);
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

    return 0;
}