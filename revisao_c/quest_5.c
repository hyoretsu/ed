#include <stdio.h>

int main(void) {
 int start, end;

 printf("Digite um numero inicial: ");
 scanf("%d", &start);
 printf("Digite um numero final: ");
 scanf("%d", &end);

 int current = start;

 while (current <= end) {
  printf("%d", current);

  current != end && printf(" ");

  current += 1;
 }

 // do {
 //  printf("%d", current);

 //  current != end && printf(" ");

 //  current += 1;
 // } while (current <= end);

 // for (int current = start; current <= end; current++) {
 //  printf("%d", current);

 //  current != end && printf(" ");
 // }

 printf("\n");

 return 0;
}
