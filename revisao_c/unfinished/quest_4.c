#include <math.h>
#include <stdio.h>

float calcDelta(float a, float b, float c) {
 return pow(b, 2) - 4 * a * c;
}

void calcRoots(float a, float b, float delta, float* roots) {
 roots[0] = (-b + sqrt(delta)) / (2 * a);
 roots[1] = (-b - sqrt(delta)) / (2 * a);

 return;
}

int main(void) {
 float a, b, c, roots[2];

 printf("Digite o coeficiente A: ");
 scanf("%f", &a);
 printf("Digite o coeficiente B: ");
 scanf("%f", &b);
 printf("Digite o coeficiente C: ");
 scanf("%f", &c);

 float delta = calcDelta(a, b, c);

 calcRoots(a, b, delta, roots);

 // CASOS ESPECIAIS

 printf("As raízes dessa equação são %f e %f\n", roots[0], roots[1]);

 return 0;
}
