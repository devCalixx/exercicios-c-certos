#include <stdio.h>

int main()
{
    int A[4] = {1,2,3,4}, B[4] = {5,6,7,8}, C[4][2], i, j;

    printf("A matriz A é formada pelos seguintes números:\n");
    for(i=0;i<4;++i) {
        printf("%i ", A[i]);
    }
    
    printf("\n");
    
    printf("A matriz B é formada pelos seguintes números:\n");
    for(i=0;i<4;++i) {
        printf("%i ", B[i]);
    }
    
    printf("\n\n");
    
    for(i=0;i<4;++i){
        for(j=0;j<2;++j) {
            if (j==0) {
                C[i][j] = A[i]*2;
            } else {
                C[i][j] = B[i] - 5;
        }     
    }
    }

    printf("A matriz C, formada pelos números das matrizes A e B, é:\n");
    for(i=0;i<4;++i) {
        for (j=0;j<2;++j) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}