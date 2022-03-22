#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct matriz Matriz;

Matriz* cria_matriz(int nl, int nc);
void libera_matriz(Matriz *mat);
int acessa_matriz(Matriz *mat, int i, int j, float *v);
int atribui_matriz(Matriz *mat, int i, int j, float v);
int nlinhas(Matriz *mat);
int ncolunas(Matriz *mat);

#endif
