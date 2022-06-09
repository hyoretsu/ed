#include <stdio.h>

float lastScore(float score1, float score2, float score3) {
 return 21 - score1 - score2 - score3;
}

int main(void) {
 float score1, score2, score3;

 printf("Qual foi sua primeira nota? ");
 scanf("%f", &score1);
 printf("Qual foi sua segunda nota? ");
 scanf("%f", &score2);
 printf("Qual foi sua terceira nota? ");
 scanf("%f", &score3);

 return 0;
}
