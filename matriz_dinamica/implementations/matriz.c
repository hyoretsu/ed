#include "../headers/matriz.h"
#include <stdlib.h>

struct matriz {
    int lin;
    int col;
    float *v;
};

Matriz* cria_matriz(int nl, int nc) {
    Matriz *matriz = (Matriz*) malloc(sizeof(Matriz));
    if (matriz) {
        matriz->lin = nl;
        matriz->col = nc;
        matriz->v = (float*) malloc(sizeof(float) * nl * nc);
    }

    return matriz;
}

void libera_matriz(Matriz *mat) {
    if (!mat) {
        return;
    }

    free(mat->v);
    free(mat);
}

int acessa_matriz(Matriz *mat, int i, int j, float *v) {
    if (!mat) {
        return 0;
    }

    *v = mat->v[i * mat->lin + j];

    return 1;
}

int atribui_matriz(Matriz *mat, int i, int j, float v) {
    if (!mat) {
        return 0;
    }

    mat->v[i * mat->lin + j] = v;

    return 1;
}

int nlinhas(Matriz *mat) {
    if (!mat) {
        return 0;
    }

    return mat->lin;
}

int ncolunas(Matriz *mat) {
    if (!mat) {
        return 0;
    }

    return mat->col;
}

