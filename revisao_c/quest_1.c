#include <math.h>
#include <stdio.h>

#define PI 3.1415926535

// Construa um programa que calcule a área de um círculo, tendo como entrada o valor do raio, que deve ser
// positivo.

float circleArea(float radius) {
 return PI * pow(radius, 2);
}

int main(void) {
 float radius;

 printf("Digite o tamanho do raio: ");
 scanf("%f", &radius);

 if (radius < 0) {
  printf("Não é possível calcular a area de um círculo a partir de um raio negativo.");

  return 1;
 }

 printf("A area desse circulo eh %.2f\n", circleArea(radius));

 return 0;
}
