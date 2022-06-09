#include "headers/matriz.h"
#include <stdio.h>

int main() {
    Matriz* mat = cria_matriz(3,2);

    printf("%d\n", nlinhas(mat));
    printf("%d\n", ncolunas(mat));
    libera_matriz(mat);
    atribui_matriz(mat, 1, 1, 5);
    printf("%d\n", acessa_matriz(mat, 1, 1, 5));
    printf("%d\n", nlinhas(mat));
    printf("%d\n", ncolunas(mat));

    return 0;
}
