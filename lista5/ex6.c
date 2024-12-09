#include <stdio.h>

int main()
{

int A[30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30}, B[30], i;

printf("Os números da matriz A são: ");
for (i=0; i<30; ++i) {
    printf("%d ", A[i]);
}

printf("\n");

for(i=0;i<30;++i) {
    B[i] = A[i]*A[i]*A[i];
}

printf("Os números da matriz B, que correspondem aos quadrados dos números da matriz A, são: ");
for(i=0;i<30;++i) {
    printf("%d ", B[i]);
}

printf("\n");

int pergunta;

printf("Quer buscar um valor? Digite 11 para sim e 00 para não: ");
scanf("%i", &pergunta);
if(pergunta == 11) {

    int valor, comeco, final, meio;
    
    printf("Digite o valor que quer buscar: ");
    scanf("%d", &valor);
    
    comeco = 0;
    final = 29; 
    
    while (comeco <= final) {
        meio = (comeco + final) / 2;
    
        if (B[meio] == valor) {
            printf("O valor %d foi encontrado na posição %d\n", valor, meio);
            return 0;
        } else if (B[meio] < valor) {
            comeco = meio + 1;
        } else {
            final = meio - 1;
        }
    }
    
    printf("O valor %d não foi encontrado.\n", valor);
    
} else {
    printf("Programa encerrado");
}

    return 0;
}