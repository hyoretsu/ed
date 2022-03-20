#include <stdio.h>

int main(void) {
 int start, end;

 printf("Digite um numero inicial: ");
 scanf("%d", &start);
 printf("Digite um numero final: ");
 scanf("%d", &end);

 int sum = 0;
 for (int current = start; current <= end; current++) {
  sum += current;
 }

 printf("O somatorio dos numeros desse intervalo eh %d\n", sum);

 return 0;
}
