#include <stdio.h>

int main() {
    
int A[5] = {1,2,3,4,5}, B[5] = {6,7,8,9,10}, C[10], i;

for (i=0; i<5; ++i) {
    C[i] = A[i];
}

for (i=0; i<5; ++i) {
    C[i + 5] = B[i];
}

printf("Os números da matriz C, que é a junção das matrizes A e B são:\n");
for (i=0; i<10; ++i) {
    printf("%i\n", C[i]);
}

    return 0;
}