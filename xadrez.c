#include <stdio.h>  // Inclusão da biblioteca padrão de entrada/saída

// Função que simula o movimento do bispo no xadrez
void movimentoBispo(int cima, int direita) {
    // Caso base: quando ambos os contadores chegam a zero
    if (cima <= 0 && direita <= 0) {
        return;  // Retorna sem fazer nada quando não há mais movimentos
    }
    
    // Loop for para movimentos para cima (agora com recursão)
    for (; cima > 0; cima--) {
        printf("Cima\n");  // Imprime movimento para cima
        
        // Loop for interno para movimentos para direita
        for (int d = direita; d > 0; d--) {
            printf("Direita\n");  // Imprime movimento para direita
        }
        
        // Chamada recursiva com valores atualizados
        movimentoBispo(cima - 1, direita);
        return;  // Importante para não repetir chamadas desnecessárias
    }
}

// Função que simula o movimento da torre no xadrez
void movimentoTorre(int direita){
    // Loop while para movimentos horizontais
    while (direita > 0){
        printf("Direita\n");  // Imprime movimento para direita
        movimentoTorre(direita - 1);  // Chamada recursiva
        return;  // Retorna após uma iteração
    }
}

// Função que simula o movimento da rainha no xadrez
void movimentoRainha(int esquerda){
    // Loop while para movimentos horizontais
    while (esquerda > 0){
        printf("Esquerda\n");  // Imprime movimento para esquerda
        movimentoRainha(esquerda - 1);  // Chamada recursiva
        return;  // Retorna após uma iteração
    }
}

// Função principal do programa
int main(){
    // Demonstração do movimento do bispo
    printf("Movimento do Bispo...!\n");  // Mensagem de cabeçalho
    movimentoBispo(5, 1);  // Chama a função com parâmetros 5 e 1
    printf("\n");  // Quebra de linha

    // Demonstração do movimento da torre
    printf("Movimento Torre...!\n");  // Mensagem de cabeçalho
    movimentoTorre(5);  // Chama a função com parâmetro 5
    printf("\n");  // Quebra de linha

    // Demonstração do movimento da rainha
    printf("Movimento Rainha...!\n");  // Mensagem de cabeçalho
    movimentoRainha(8);  // Chama a função com parâmetro 8
    printf("\n");  // Quebra de linha

    // Demonstração do movimento do cavalo
    printf("Movimento do Cavalo...!\n");  // Mensagem de cabeçalho
    // Loop for para simular movimento em L (2 cima, 1 direita)
    for (int direita = 1; direita > 0; direita--){
        // Loop interno para movimento vertical
        for (int cima = 2; cima > 0; cima--){
            printf("Cima\n");  // Imprime movimento para cima
        }
        printf("Direita\n");  // Imprime movimento para direita
    }
    return 0;  // Retorno padrão indicando sucesso
}