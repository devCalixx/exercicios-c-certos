#include <stdio.h>

int fatorial(int x) {
    if(x==0 || x==1) {
        return 1;
    } else {
        return x * fatorial(x - 1);
    }
}

int main()
{

int A[15], B[15], i, j, ajuda;

printf("Escreva quinze números: ");
for (i=0; i<15; ++i) {
    scanf("%d", &A[i]);
}

for(i=0;i<15;++i) {
    B[i] = fatorial(A[i]);
}

printf("Os números digitados são: ");
for (i=0; i<15; ++i) {
    printf("%d ", A[i]);
}

printf("\n");

for (i=0; i<15+1; ++i) {
    for(j=1; j<15-i+1; ++j) {
        if(B[j] < B[j-1]) {
            ajuda = B[j];
            B[j] = B[j - 1];
            B[j - 1] = ajuda;
        }
    }
}

printf("Os fatoriais dos números digitados são: ");
for(i=0; i<15; ++i) {
    printf("%d ", B[i]);
}

    return 0;
}