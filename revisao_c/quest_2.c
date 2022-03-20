#include <stdio.h>

int isOdd(int number) {
 return number % 2;
}

int main(void) {
 int number;

 printf("Digite um número: ");
 scanf("%d", &number);

 printf("Esse numero é %s.\n", isOdd(number) ? "ímpar" : "par");

 return 0;
}
