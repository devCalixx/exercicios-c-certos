#include <stdio.h>

int main()
{

int A[12], B[12], C[12], i, j, ajuda;

printf("Escreva doze números para a matriz A: ");
for (i=0; i<12; ++i) {
    scanf("%d", &A[i]);
}

printf("\n");

printf("Os números digitados são: ");
for (i=0; i<12; ++i) {
    printf("%d ", A[i]);
}

printf("\n");

for (i=1; i<12+1; ++i) {
    for(j=1; j<12-i+1; ++j) {
        if(A[j] < A[j-1]) {
            ajuda = A[j];
            A[j] = A[j - 1];
            A[j - 1] = ajuda;
        }
    }
}

printf("Os números da matriz A em ordem crescente são: ");
for(i=0; i<12; ++i) {
    printf("%d ", A[i]);
}

printf("\n");

printf("Escreva doze números para a matriz B: ");
for (i=0; i<12; ++i) {
    scanf("%d", &B[i]);
}

printf("\n");

printf("Os números digitados são: ");
for (i=0; i<12; ++i) {
    printf("%d ", B[i]);
}

printf("\n");

for (i=1; i<12+1; ++i) {
    for(j=1; j<12-i+1; ++j) {
        if(B[j] < B[j-1]) {
            ajuda = B[j];
            B[j] = B[j - 1];
            B[j - 1] = ajuda;
        }
    }
}

printf("Os números da matriz B em ordem crescente são: ");
for(i=0; i<12; ++i) {
    printf("%d ", B[i]);
}

printf("\n");

for(i=0; i<12; ++i) {
    C[i] = A[i] + B[i];
}

printf("Os números da matriz C, que correspondem à soma de A e B, são: ");
for(i=0;i<12;++i) {
    printf("%d ", C[i]);
}

for (i=1; i<12+1; ++i) {
    for(j=1; j<12-i+1; ++j) {
        if(C[j] < C[j-1]) {
            ajuda = C[j];
            C[j] = C[j - 1];
            C[j - 1] = ajuda;
        }
    }
}

printf("\n");

printf("Os números da matriz C em ordem crescente são: ");
for(i=0; i<12; ++i) {
    printf("%d ", C[i]);
}

    return 0;
}