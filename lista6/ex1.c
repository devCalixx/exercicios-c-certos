#include <stdio.h>

int main()
{
    int A[5][3] = { {1,2,3},
                    {4,5,6},
                    {7,8,9},
                    {10,11,12}, 
                    {13,14,15}}, 
    B[5][3] = { {16,17,18},
                {19,20,21},
                {22,23,24},
                {25,26,27},
                {28,29,30}}, 
                C[5][3], i, j;

    printf("A matriz A é formada pelos seguintes números:\n");
    for(i=0;i<5;++i) {
        for (j=0;j<3;++j) {
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");

    printf("A matriz B é formada pelos seguintes números:\n");
    for(i=0;i<5;++i) {
        for (j=0;j<3;++j) {
            printf("%i ", B[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(i=0;i<5;++i){
        for(j=0;j<3;++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("A matriz C, formada pela soma dos números das linhas e colunas de A e B, é:\n");
    for(i=0;i<5;++i) {
        for (j=0;j<3;++j) {
            printf("%i ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}