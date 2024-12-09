#include <stdio.h>

int main() {
    
int A[8] = {1,2,3,4,5,6,7,8}, B[8], i;

for (i=0; i<8; ++i) {
    B[i] = A[i]*A[i];
}

printf("Os números da matriz B, que correspondem aos quadrados dos números da matriz A são:\n");
for (i=0; i<8; ++i) {
    printf("%i é o quadrado de %i\n", B[i], A[i]);
}

    return 0;
}