#include <stdio.h>

int main() {

int A[5] = {10, 20, 30, 40, 50}, B[5];
int i;

for (i=0; i < 5; ++i) {
    B[i] = A[i] * 3;
}

printf("Os elementos do vetor B são:\n");
for (i=0; i<5; ++i) {
    printf("%i\n", B[i]);
}

    return 0;
}