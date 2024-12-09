#include <stdio.h>

int main()
{

float A[40] = {0,1,2,3,4,5,6,7,8,9,10,0.1,1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,0.2,1.2,2.2,3.2,4.2,5.2,6.2,7.2,8.2,9.2,0.3,1.3,2.3,3.3,4.3,5.3,6.3,7.3,8.3};
int i, j, ajuda;

printf("As notas dos 40 alunos são: ");
for (i=0; i<40; ++i) {
    printf("%.1f ", A[i]);
}

printf("\n");

for (i=1; i<30-1; ++i) {
    for(j=1; j<30-i+1; ++j) {
        if(A[j] < A[j - 1]) {
            ajuda = A[j];
            A[j] = A[j - 1];
            A[j - 1] = ajuda;
        }
    }
}

printf("As notas dos 40 alunos, em ordem crescente, são: ");
for(i=1;i<40;++i) {
    printf("%.1f ", A[i]);
}

printf("\n");

int pergunta;

printf("Quer buscar um valor? Digite 11 para sim e 00 para não: ");
scanf("%i", &pergunta);
if(pergunta == 11) {

    int comeco, final, meio;
    float valor;
    
    printf("Digite o valor que quer buscar: ");
    scanf("%.1f", &valor);
    
    comeco = 0;
    final = 39; 
    
    while (comeco <= final) {
        meio = (comeco + final) / 2;
    
        if (A[meio] == valor) {
            printf("O valor %.1f foi encontrado na posição %d\n", valor, meio);
            return 0;
        } else if (A[meio] < valor) {
            comeco = meio + 1;
        } else {
            final = meio - 1;
        }
    }
    
    printf("O valor %.1f não foi encontrado.\n", valor);
    
} else {
    printf("Programa encerrado");
}

    return 0;
}