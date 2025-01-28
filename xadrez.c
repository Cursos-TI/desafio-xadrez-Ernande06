#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    /* Sugestão: Declare variáveis constantes para 
    representar o número de casas que cada peça pode se mover.*/
    
    // Implementação de Movimentação do Bispo
    /* Sugestão: Utilize uma estrutura de repetição
     para simular a movimentação do Bispo em diagonal.*/

    // Implementação de Movimentação da Torre
    /*Sugestão: Utilize uma estrutura de repetição para simular
     a movimentação da Torre para a direita.*/

    // Implementação de Movimentação da Rainha    
    /* Sugestão: Utilize uma estrutura de repetição
     para simular a movimentação da Rainha para a esquerda.*/

    /*Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular
     a movimentação do Cavalo em L.*/

    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    /* Sugestão: Implemente a movimentação do 
    Cavalo utilizando loops com variáveis múltiplas e condições avançadas.*/
    // Inclua o uso de continue e break dentro dos loops.

    int cima, baixo, esq, dir;
    int opcao, movimento, i;

    do
    {   
        printf("\n   *** Vamos    *** \n");
        printf("--- Jogar Xadrez? ---\n");
        printf("==============\n");
        printf("[1] BISPO\n");
        printf("[2] TORRE\n");
        printf("[3] RAINHA\n");
        printf("[0] SAIR\n");
        printf("==============\n");
        printf("\nEscolha Movimentar uma Peça: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf(" Você escolheu BISPO\n");
            for ( i = 1; i <= 5; i++)
            {
                printf("Direita, Cima\n");
            }
            
            break;
        
        case 2:
            i = 1;
            printf(" Você escolheu TORRE\n");
            while (i <= 5)
            {
                printf("Direita\n");
                i++;
            }
            
        break;

        case 3:
            printf(" Você escolheu RAINHA\n");
        break;
        
        default:
           printf("Opção Inválida! Tente novamente...\n");
            break;
        }



    } while (opcao !=0);
    printf("Xadrez FINALIZADO !");
    

    return 0;
}
