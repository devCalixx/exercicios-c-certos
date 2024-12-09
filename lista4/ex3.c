#include <stdio.h>

int main() {

int A[5] = {10, 9, 8, 7, 6}, B[5] = {1,2,3,4,5}, C[5];
int i;

for (i=0; i < 5; ++i) {
    C[i] = A[i] - B[i];
}

printf("Os elementos do vetor C, que correspondem à substração dos vetores A por B são:\n");
for (i=0; i<5; ++i) {
    printf("%i\n", C[i]);
}

    return 0;
}