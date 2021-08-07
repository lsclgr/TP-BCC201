#include <stdio.h>

#define TAM 64

void fillTable(char mat[TAM][TAM]);
void printTable(char mat[TAM][TAM]);
int printMenu();
void newGame();
void continueGame();

int main() {
    char mat[TAM][TAM];

    printf("Bem vindo ao Jogo de Damas\n\nO que deseja fazer: \n\n");
    if (printMenu() == 1) {
        fillTable(mat);
    }
    printTable(mat);

    return 0;
}

// funçao para imprimir o menu para o usuario e direcionar para as devidas
// funçoes
int printMenu() {
    int option;
    printf(
        "1. Começar um novo jogo\n"
        "2. Continuar um novo jogo\n"
        "Escolha a opção (digite ”sair” em qualquer lugar para sair do "
        "jogo): ");
    scanf("%d", &option);
    switch (option) {
        case 1:
            newGame();
            break;

        case 2:
            continueGame();
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
    return option;
}

// Funçao para preencher o tabuleiro no inicio do jogo
void fillTable(char mat[TAM][TAM]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (j % 2 == 0) {
                if (i == 1) {
                    mat[i][j] = 'x';
                } else if (i == 5 || i == 7) {
                    mat[i][j] = 'o';
                } else {
                    mat[i][j] = '-';
                }
            } else {
                if (i == 0 || i == 2) {
                    mat[i][j] = 'x';
                } else if (i == 6) {
                    mat[i][j] = 'o';
                } else {
                    mat[i][j] = '-';
                }
            }
        }
    }
}

// funçao para imprimir o tabuleiro com a posiçao atual do jogo
void printTable(char mat[TAM][TAM]) {
    printf("    ");
    for (int i = 1; i <= 8; i++) {
        printf("%2d", i);
    }
    printf("\n   -------------------\n");
    char line = 72;
    for (int i = 0; i < 8; i++) {
        printf("%2c |", line);
        for (int j = 0; j < 8; j++) {
            printf("%2c", mat[i][j]);
        }
        printf(" |%2c", line);
        printf("\n");
        line--;
    }
    printf("   -------------------\n");
    printf("    ");
    for (int i = 1; i <= 8; i++) {
        printf("%2d", i);
    }
    printf("\n");
}

// funçao para quando o usuario escolher começar um novo jogo
void newGame() {
    int gamers;
    char gamer1[10], gamer2[10];
    printf("\nDigite a quantidade de jogadores < 1 / 2 >: ");
    scanf("%d", &gamers);
    printf("\nDigite o nome do Jogador 1 (pedra branca - “o”): ");
    scanf("%s", gamer1);
    if (gamers == 2) {
        printf("Digite o nome do Jogador 2 (pedra escura - “x”): ");
        scanf("%s", gamer2);
    }
    printf(
        "\nPara cada jogada, digite a casa de origem e a destino.\nPor "
        "exemplo, "
        "para mover da casa na linha D, \ncoluna 6 para a linha E coluna 5, "
        "digite: D6 E5\n"
        "Vamos começar o jogo!\n\n");
}

// funçao para quando o usuario escolher continuar um jogo salvo
void continueGame() {}