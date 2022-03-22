#include "../headers/num_complexos.h"
#include <math.h>
#include <stdlib.h>

ComplexNumber* criarNumComplexo(float a, float b) {
 ComplexNumber *numero = (ComplexNumber*) malloc(sizeof(ComplexNumber));
 if (numero) {
  *numero[0] = a;
  *numero[1] = b;
 }

 return numero;
}

void settarNumComplexo(ComplexNumber* numero, float a, float b) {
 if (!numero) {
  return;
 }

 *numero[0] = a;
 *numero[1] = b;
}

void deletarNumComplexo(ComplexNumber* numero) {
 if (!numero) {
  return;
 }

 free(numero);
}

float valorNumComplexo(ComplexNumber* numero, int posicao) {
 if (!numero) {
  return 0;
 }

 return *numero[posicao];
}

ComplexNumber* somaNumComplexo(ComplexNumber* n1, ComplexNumber* n2) {
 if (!n1 || !n2) {
  return NULL;
 }

 ComplexNumber *resultado = (ComplexNumber*) malloc(sizeof(ComplexNumber));
 if (resultado) {
  *resultado[0] = *n1[0] + *n2[0];
  *resultado[1] = *n1[1] + *n2[1];
 }

 return resultado;
}

ComplexNumber* subtracaoNumComplexo(ComplexNumber* n1, ComplexNumber* n2) {
 if (!n1 || !n2) {
  return NULL;
 }

 ComplexNumber *resultado = (ComplexNumber*) malloc(sizeof(ComplexNumber));
 if (resultado) {
  *resultado[0] = *n1[0] - *n2[0];
  *resultado[1] = *n1[1] - *n2[1];
 }

 return resultado;
}

ComplexNumber* multiplicacaoNumComplexo(ComplexNumber* n1, ComplexNumber* n2) {
 if (!n1 || !n2) {
  return NULL;
 }

 ComplexNumber *resultado = (ComplexNumber*) malloc(sizeof(ComplexNumber));
 if (resultado) {
  *resultado[0] = (*n1[0] * *n2[0]) - (*n1[1] * *n2[1]);
  *resultado[1] = (*n1[1] * *n2[0]) + (*n1[0] * *n2[1]);
 }

 return resultado;
}

ComplexNumber* divisaoNumComplexo(ComplexNumber* n1, ComplexNumber* n2) {
 if (!n1 || !n2) {
  return NULL;
 }

 ComplexNumber *resultado = (ComplexNumber*) malloc(sizeof(ComplexNumber));
 if (resultado) {
  *resultado[0] = ((*n1[0] * *n2[0]) + (*n1[1] * *n2[1])) / (pow(*n2[0], 2) + pow(*n2[1], 2));
  *resultado[1] = ((*n1[1] * *n2[0]) - (*n1[0] * *n2[1])) / (pow(*n2[0], 2) + pow(*n2[1], 2));
 }

 return resultado;
}

