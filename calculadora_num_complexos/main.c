#include "headers/num_complexos.h"
#include <stdio.h>

int main() {
 ComplexNumber *n1 = criarNumComplexo(0, 1), *n2 = criarNumComplexo(2, 3);

 printf("N1: %.f+%.fi\n", *n1[0], *n1[1]);
 printf("1º número: %.fi\n", valorNumComplexo(n1, 0));
 printf("2º número: %.fi\n", valorNumComplexo(n1, 1));
 printf("N2: %.f+%.fi\n", *n2[0], *n2[1]);
 settarNumComplexo(n1, 4, 5);
 printf("Settado: %.f+%.fi\n", *n1[0], *n1[1]);

 ComplexNumber* soma = somaNumComplexo(n1, n2);
 ComplexNumber* subtracao = subtracaoNumComplexo(n1, n2);
 ComplexNumber* mult = multiplicacaoNumComplexo(n1, n2);
 ComplexNumber* divisao = divisaoNumComplexo(n1, n2);

 printf("Soma: %.f+%.fi\n", *soma[0], *soma[1]);
 printf("Subtração: %.f+%.fi\n", *subtracao[0], *subtracao[1]);
 printf("Multiplicação: %.f+%.fi\n", *mult[0], *mult[1]);
 printf("Divisão: %.f+%.fi\n", *divisao[0], *divisao[1]);
 deletarNumComplexo(n1);
 printf("Nada: %.f+%.fi\n", *n1[0], *n1[1]);

 return 0;
}
