#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void recursividadeRainha(int rainha){

    if (rainha >= 0){
        printf("Esquerda. \n");


        recursividadeRainha(rainha - 1);
        rainha --;
    }

}

void recursividadeBispo(int bispo){
    for(int i = 0; i <= 0; i++){
        printf("Baixo. \n");
        for(int j = 0; j <= 3; j++){
            printf("Direita. \n");
        }
    }
}

void recursividadeTorre(int torre){
    if (torre > 0){
        printf("Direita. \n");

        recursividadeRainha(torre - 1);
    }

}

void recursividadeCavalo(int cavalo){
    for(int i = 0; i <= 0; i++){
        printf("Cima. \n");
        for(int j = 0; j <= 2; j++){
            printf("Direita. \n");
        }
    }
}




int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int bispo = 0, torre = 5, rainha = 8, cavalo;
    int i, j, k = 0, l = 0, n = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
     while (bispo <= 5)
    {
        printf("Diagonal. \n");
        bispo++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    do{
        printf("Direita. \n");
        n++;

    }while (n <= 5);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    //rainha.
    for (int m = 0; m <= 7; m++)
    {
        printf("Esquerda. \n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    //movimentaçao do CAVALO. FOR

    for (i = 0; i <= 0; i++)
    {
        printf("Direita. \n");
        for(j = 0; j <= 2; j++)
        {
            printf("Baixo. \n");
        }
    }

    // Movimento Aninhado WHILE CAVALO.

    while (k <= 0)
    {
        printf("Esquerda. \n");
        while (l <= 2)
        {
            printf("Cima. \n");
            l++;
        }

        k++;

    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
