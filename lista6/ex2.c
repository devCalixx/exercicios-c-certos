#include <stdio.h>

int main()
{
    int A[7] = {1,2,3,4,5,6,7}, B[7] = {7,6,5,4,3,2,1}, C[2][7], i, j;

    printf("A matriz A é formada pelos seguintes números:\n");
    for(i=0;i<7;++i) {
        printf("%i ", A[i]);
    }
    
    printf("\n\n");

    printf("A matriz B é formada pelos seguintes números:\n");
    for(i=0;i<7;++i) {
        printf("%i ", B[i]);
    }
    
    printf("\n\n");
    
    for(i=0;i<2;++i){
        for(j=0;j<7;++j) {
            if (i==0) {
                C[i][j] = A[j];
            } else {
                C[i][j] = B[j];
            }
        }
    }

    printf("A matriz C, formada pelos números das matrizes A e B, é:\n");
    for(i=0;i<2;++i) {
        for (j=0;j<7;++j) {
            printf("%i ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}