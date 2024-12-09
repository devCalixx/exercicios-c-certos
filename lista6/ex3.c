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
    int A[10] = {1,2,3,4,5,6,7,8,9,10}, B[10][3], i, j;

    printf("A matriz A é formada pelos seguintes números:\n");
    for(i=0;i<10;++i) {
        printf("%i ", A[i]);
    }
    
    printf("\n\n");
    
    for(i=0;i<10;++i){
        for(j=0;j<3;++j) {
            if (j==0) {
                B[i][j] = A[i] + 5;
            } else if (j==1) {
                B[i][j] = fatorial(A[i]);
            } else {
                B[i][j] = A[i]*A[i];
            }
        }
    }

    printf("A matriz B, formada pelos números da matriz A, é:\n");
    for(i=0;i<10;++i) {
        for (j=0;j<3;++j) {
            printf("%i ", B[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}