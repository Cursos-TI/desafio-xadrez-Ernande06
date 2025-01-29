#include <stdio.h>

// Função recursiva para movimentar o Bispo
void moverBispo(int casa) {
    if (casa > 5) {
        return;
    }
    printf("%d Direita, Cima\n", casa);
    moverBispo(casa + 1);
}

// Função recursiva para movimentar a Torre
void moverTorre(int casa) {
    if (casa > 5) {
        return;
    }
    printf("%d Direita\n", casa);
    moverTorre(casa + 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casa) {
    if (casa > 8) {
        return;
    }
    printf("%d Esquerda\n", casa);
    moverRainha(casa + 1);
}

// Função para movimentar o Cavalo com loops aninhados e condições múltiplas
void moverCavalo() {
    for (int i = 1; i <= 1; i++) {
        printf("%d Cima\n", i);
        for (int j = 1; j <= 3; j++) {
            if (j == 2) {
                continue; // Pula a segunda casa (exemplo de uso do continue)
            }
            printf("%d Direita\n", j);
            if (j == 3) {
                break;
            }
        }
    }
}

int main() {
    int opcao;

    do {
        printf("\n   *** Vamos    *** \n");
        printf("--- Jogar Xadrez? ---\n");
        printf("==============\n");
        printf("[1] BISPO\n");
        printf("[2] TORRE\n");
        printf("[3] RAINHA\n");
        printf("[4] CAVALO\n");
        printf("[0] SAIR\n");
        printf("==============\n");
        printf("\nEscolha Movimentar uma Peça: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("================================================\n");
                printf(" Você escolheu BISPO\n");
                printf(" Bispo se move 5 casas Diagonal Superior Direita\n");
                printf("================================================\n");
                moverBispo(1);
                printf("=============================\n");
                break;

            case 2:
                printf("=============================\n");
                printf(" Você escolheu TORRE\n");
                printf(" Torre se move 5 casas a Direita\n");
                printf("=============================\n");
                moverTorre(1);
                printf("=============================\n");
                break;

            case 3:
                printf("=============================\n");
                printf(" Você escolheu RAINHA\n");
                printf(" Rainha se move 8 casas a Esquerda\n");
                printf("=============================\n");
                moverRainha(1);
                printf("=============================\n");
                break;

            case 4:
                printf("=================================================\n");
                printf(" Você escolheu CAVALO\n");
                printf(" Cavalo se move em 'L' para Cima(1x), Direita(2x)\n");
                printf("==================================================\n");
                moverCavalo();
                printf("==================================================\n");
                break;

            default:
                printf("===================================\n");
                printf("Opção Inválida! Tente novamente...\n");
                printf("================================\n");
                break;
        }

    } while (opcao != 0);

    printf("Xadrez FINALIZADO !\n");
    return 0;
}