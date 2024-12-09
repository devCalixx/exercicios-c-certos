#include <stdio.h>

int main()
{

int A[8], B[8], i, j, ajuda;

printf("Escreva oito números: ");
for (i=0; i<8; ++i) {
    scanf("%d", &A[i]);
}

for(i=0;i<8;++i) {
    B[i] = A[i];
}

printf("Os números digitados são: ");
for (i=0; i<8; ++i) {
    printf("%d ", A[i]);
}

printf("\n");

for (i=1; i<8+1; ++i) {
    for(j=1; j<8-i+1; ++j) {
        if(B[j] < B[j-1]) {
            ajuda = B[j];
            B[j] = B[j - 1];
            B[j - 1] = ajuda;
        }
    }
}

printf("Os elementos ordenados em ordem crescente são:\n");
for(i=0; i<8; ++i) {
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
    final = 7; 
    
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