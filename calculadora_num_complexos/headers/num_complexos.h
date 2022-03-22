#ifndef NUM_COMPLEXOS_H
#define NUM_COMPLEXOS_H

typedef float ComplexNumber[2];

ComplexNumber* criarNumComplexo(float a, float b);
void settarNumComplexo(ComplexNumber* numero, float a, float b);
void deletarNumComplexo(ComplexNumber* numero);
float valorNumComplexo(ComplexNumber* numero, int posicao);
ComplexNumber* somaNumComplexo(ComplexNumber* n1, ComplexNumber* n2);
ComplexNumber* subtracaoNumComplexo(ComplexNumber* n1, ComplexNumber* n2);
ComplexNumber* multiplicacaoNumComplexo(ComplexNumber* n1, ComplexNumber* n2);
ComplexNumber* divisaoNumComplexo(ComplexNumber* n1, ComplexNumber* n2);

#endif
