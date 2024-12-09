#include <stdio.h>

int fatorial(int x) {
    if(x==0 || x==1) {
        return 1;
    } else {
        return x * fatorial(x - 1);
    }
}

int main() {

int A[6] = {1,2,3,4,5,6}, B[6];
int i;

for (i=0; i < 6; ++i) {
    B[i] = fatorial(A[i]);
}

printf("Os elementos do vetor B são:\n");
for (i=0; i<6; ++i) {
    printf("%i\n", B[i]);
}

    return 0;
}