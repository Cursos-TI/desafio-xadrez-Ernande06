#include <stdio.h>

int main() {

    // Variáveis
    int opcao, i;
    // Ultilizando DO WHILE
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

        //Menu Interativo Switch
        switch (opcao)
        {
        case 1:
            printf("================================================\n");
            printf(" Você escolheu BISPO\n");
            printf(" Bispo se move 5 casas Diagonal Superior Direita\n");
            printf("================================================\n");

            // Laço FOR para Movimentar Bispo
            for ( i = 1; i <= 5; i++)
            {
                printf("%d Direita, Cima\n", i);
            }
            printf("=============================\n");
            break;
        
        case 2:
            printf("=============================\n");
            printf(" Você escolheu TORRE\n");
            printf(" Torre se move 5 casas a Direita\n");
            printf("=============================\n");
            // Laço de Repetição WHILE para Movimentar a TORRE
            i = 1;
            while (i <= 5)
            {
                printf("%d Direita\n", i);
                i++;
            }
            printf("=============================\n");
        break;

        case 3:    
            printf("=============================\n");
            printf(" Você escolheu RAINHA\n");
            printf(" Rainha se move 8 casas a Esquerda\n");
            printf("=============================\n");
            i = 1;
            // Laço de Repetição WHILE para Movimentar a Rainha
            while (i <= 8)
            {
                printf("%d Esquerda\n", i);
                i++;
            }
            printf("=============================\n");
            break;
        // Tratamento de erro
        default:
        printf("===================================\n");
           printf("Opção Inválida! Tente novamente...\n");
           printf("================================\n");
            break;
        }

    } while (opcao !=0);
    printf("Xadrez FINALIZADO !");
    return 0;
}
