#include "../headers/vetor.h"
#include <math.h>
#include <stdlib.h>

struct vetordin{
    int n;
    int v_dim;
    float* v;
};

VetorDin* cria_vetord(int dim) {
    VetorDin *vetordin = (VetorDin*) malloc(sizeof(VetorDin));
    if (vetordin) {
        vetordin->n = 0;
        vetordin->v_dim = dim;
        vetordin->v = (float*) malloc(sizeof(float) * pow(dim, 2));
    }

    return vetordin;
};

int insere_vetord(VetorDin* vd, float x) {
    if (!vd) {
        return 0;
    }
    vd->n += 1;

    return 1;
};

int tamanho_vetord(VetorDin* vd) {
    if (!vd) {
        return 0;
    }

    return vd->v_dim;
};

int acessa_vetord(VetorDin* vd, int pos, float *v) {
    if (!vd) {
        return 0;
    }

    *v = vd->v[pos];

    return 1;
};

void libera_vetord(VetorDin* vd) {
    if (!vd) {
        return;
    }

    free(vd->v);
    free(vd);
};
