#include <stdio.h>

#define TAM 64

void fillTable(char mat[TAM][TAM]);
void printTable(char mat[TAM][TAM]);

int main() {
    char mat[TAM][TAM];
    fillTable(mat);
    printTable(mat);

    return 0;
}

void fillTable(char mat[TAM][TAM]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (j % 2 == 0) {
                if (i == 1) {
                    mat[i][j] = 'x';
                } else if (i == 5 || i == 7) {
                    mat[i][j] = 'o';
                } else {
                    mat[i][j] = '0';
                }
            } else {
                if (i == 0 || i == 2) {
                    mat[i][j] = 'x';
                } else if (i == 6) {
                    mat[i][j] = 'o';
                } else {
                    mat[i][j] = '0';
                }
            }
        }
    }
}
void printTable(char mat[TAM][TAM]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%2c", mat[i][j]);
        }
        printf("\n");
    }
}