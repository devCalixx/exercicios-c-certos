#include <stdio.h>

int main()
{

int A[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}, B[30] = {21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50}, C[50], i, j, ajuda;

printf("Os números da matriz A são: ");
for (i=0; i<20; ++i) {
    printf("%d ", A[i]);
}

printf("\n");

printf("Os números da matriz B são: ");
for (i=0; i<30; ++i) {
    printf("%d ", B[i]);
}

printf("\n");

for(i=0;i<20;++i) {
    C[i] = A[i];
}

for(i=0;i<30;++i) {
    C[i + 20] = B[i];
}

printf("Os números da matriz C, composta pela junção das matrizes A e B, foram: ");
for (i=0; i<50; ++i) {
    printf("%d ", C[i]);
}

printf("\n");

for (i=0; i<50; ++i) {
    for(j=0; j<49-i; ++j) {
        if(C[j] < C[j + 1]) {
            ajuda = C[j];
            C[j] = C[j + 1];
            C[j + 1] = ajuda;
        }
    }
}

printf("Os números da matriz C, em ordem decrescente, são: ");
for(i=0;i<50;++i) {
    printf("%d ", C[i]);
}

    return 0;
}