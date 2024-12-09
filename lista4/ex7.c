#include <stdio.h>

int main() {
    
int A[10], B[10], i;

for(i=0; i<10; ++i) {
    printf("Escreva um número:");
    scanf("%i", &A[i]);
}

for (i=0; i<10; ++i) {
    B[i] = A[9 - i];
}

printf("A matriz B, que é inversa à matriz A é:\n");
for (i=0; i<10; ++i) {
    printf("%i\n", B[i]);
}

    return 0;
}