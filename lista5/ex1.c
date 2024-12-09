#include <stdio.h>

int main()
{

int A[12], i, j, ajuda;

printf("Escreva doze números: ");
for (i=0; i<12; ++i) {
    scanf("%d", &A[i]);
}

printf("Vetor digitado: ");
for (i=0; i<12; ++i) {
    printf("%d ", A[i]);
}

printf("\n");

for (i=0; i<12-1; ++i) {
    for(j=0; j<12-i-1; ++j) {
        if(A[j] < A[j+1]) {
            ajuda = A[j];
            A[j] = A[j + 1];
            A[j + 1] = ajuda;
        }
    }
}

printf("Os elementos printados escritos em ordem decrescente são:\n");
for(i=0; i<12; ++i) {
    printf("%d ", A[i]);
}

    return 0;
}