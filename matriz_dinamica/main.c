#include "headers/matriz.h"
#include <stdio.h>

int main() {
 Matriz* mat = cria_matriz(3,2);

 printf("%d\n", ncolunas(mat));
 libera_matriz(mat);
 printf("%d\n", ncolunas(mat));

 return 0;
}
