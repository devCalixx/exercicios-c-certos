#include <stdio.h>

int main()
{

int A[20] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1}, B[20], i, j, ajuda;

printf("Os números da matriz A são: ");
for (i=0; i<20; ++i) {
    printf("%d ", A[i]);
}

printf("\n");

for(i=0;i<20;++i) {
    B[i] = A[i] + 2;
}

printf("Os números da matriz B, que correspondem aos valores de A somados com dois: ");
for(i=0;i<20;++i) {
    printf("%d ", B[i]);
}

printf("\n");

for (i=1; i<20-1; ++i) {
    for(j=1; j<20-i+1; ++j) {
        if(B[j] < B[j - 1]) {
            ajuda = B[j];
            B[j] = B[j - 1];
            B[j - 1] = ajuda;
        }
    }
}

printf("Os números da matriz B, em ordem crescente, são: ");
for(i=1;i<20;++i) {
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