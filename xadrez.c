# include <stdio.h>

int main(){

    int bispo = 1, torre = 1, rainha, movimentoCavalo, cavalo;  // Variáveis 


    printf("A Torre se Move 5 vezes para a direita\n");
    while (torre <= 5){    // Estrutua de Repetição para gerar o movimento da torre, enquanto a variável for menor ou igual a 5
                            // Enquanto a condição for verdadeira o looping continuará rodando
        printf("Direita\n"); 
        torre ++;    // incremento para fazer a estruta de repetição rodar
    }

    printf("\n"); // Comando para pular 1 linha
    printf("O Bispo se move 5 vezes na diagonal\n");

    do {   // Estrutura de Repetição para gerar o movimento da torre

        printf("Cima\n");    // Direção do movimento do bispo
        printf("Direita\n");
        bispo ++; // incremento para fazer o looping girar


    } while (bispo <= 5); // Condição para que o looping continue rodando, enquanto o bispo valer menos ou igual a 5

    printf("\n"); // Comando para pular 1 linha
    printf("A Rainha se move 8 casas para a esquerda\n");

    for (rainha = 1; rainha <= 8; rainha ++)   // Estrutura de repetição com a variável recebendo valor, condição e incremento
    {
        printf("esquerda\n");  // Movimento da rainha

    }

    printf("\n"); // Comando para pular 1 linha
    printf("O cavalo se move em forma de "L", duas casas na horizontal ou vertical e uma casa para o lado");

    for (movimentoCavalo = 0; movimentoCavalo < 1; movimentoCavalo++){ // Loop externo , será executado depois que o loop interno executar completamente
        for (cavalo = 0; cavalo < 2; cavalo++){ // Loop interno, que será executado antes do loop externo
            printf("Baixo"); // Movimento será feito para baixo quantas vezes a estrutura de repetição indicar
            
        }

        printf("Esquerda"); // Movimento será feito para a esquerda quantas vezes a estrutura de repetição indicar

    }

return 0;

}