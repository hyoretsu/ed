#ifndef VETOR_H
#define VETOR_H

typedef struct vetordin VetorDin;

VetorDin* cria_vetord(int dim);
int insere_vetord(VetorDin* vd, float x);
int tamanho_vetord(VetorDin* vd);
int acessa_vetord(VetorDin* vd, int pos, float *v);
void libera_vetord(VetorDin* vd);

#endif

