#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cadastro_agenda {
    char nome[80];
    char endereco[80];
    int idade;
    char telefone[11];
};
/*Deixando essas notas para não me perder porque aparentemente vai ser um código grande*/

/*procurar idades função*/

void procurar_idade(struct cadastro_agenda pessoas[], int numero_pessoas, int idade_procurada) {
    for (int i = 0; i < numero_pessoas; i++) {
        if (pessoas[i].idade == idade_procurada) {
            printf("Pessoa encontrada:\n");
            printf("Nome: %s\n", pessoas[i].nome);
            printf("Endereço: %s\n", pessoas[i].endereco);
            printf("Idade: %d\n", pessoas[i].idade);
            printf("Telefone: %s\n\n", pessoas[i].telefone);
        }
    }
}

void ordenar_por_nome(struct cadastro_agenda pessoas[], int n) {
    char aux[80];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (strcmp(pessoas[j].nome, pessoas[j+1].nome) > 0) {
                strcpy(aux, pessoas[j].nome);
                strcpy(pessoas[j].nome, pessoas[j+1].nome);
                strcpy(pessoas[j+1].nome, aux);
            }
        }
    }
}

    struct cadastro_agenda pessoas[] = {{
        "Jorge Marcos de Teles",
        "Av. das Estações",
        40,
        "11987654321"
    },
    {
        "Matcio Marmoto",
        "R. da Fantasia Final",
        50,
        "11912345678"
    },
    {
        "Filipo Ariano",
        "Av. Biscalchini",
        30,
        "11975312468"
    },
    {
        "Carolaine Leão",
        "R. Pastel",
        35,
        "11986421357"
    },
    {
        "Luciana Filha",
        "R. das Antiguidades",
        60,
        "11901234567"
    }};

/*Cadastramento de informações. */

int main() {
    
    int opcao, menu =1, i, j;
    
    /*MENU*/
while (menu == 1) {   
    printf("MENU DE AGENDA\n-------------------------\n");
    printf("1. VER CADASTROS\n");
    printf("2. BUSCAR PELA IDADE\n");
    printf("3. ORDEM ALFABÉTICA\n");
    printf("4. ALTERAR ERRO\n");
    printf("5. SAIR\n");
    printf("O que quer fazer?: ");
    scanf("%d", &opcao);

/*procurando idade pelo teclado */
switch (opcao) {
    case 1: {
        
        /*Ver registros*/
            
            printf("Nome: %s\n", pessoas[0].nome);
            printf("Endereço: %s\n", pessoas[0].endereco);
            printf("Idade: %i\n", pessoas[0].idade);
            printf("Telefone: %s\n\n", pessoas[0].telefone); 
            
            printf("Nome: %s\n", pessoas[1].nome);
            printf("Endereço: %s\n", pessoas[1].endereco);
            printf("Idade: %i\n", pessoas[1].idade);
            printf("Telefone: %s\n\n", pessoas[1].telefone);
            
            printf("Nome: %s\n", pessoas[2].nome);
            printf("Endereço: %s\n", pessoas[2].endereco);
            printf("Idade: %i\n", pessoas[2].idade);
            printf("Telefone: %s\n\n", pessoas[2].telefone);
            
            printf("Nome: %s\n", pessoas[3].nome);
            printf("Endereço: %s\n", pessoas[3].endereco);
            printf("Idade: %i\n", pessoas[3].idade);
            printf("Telefone: %s\n\n", pessoas[3].telefone);
            
            printf("Nome: %s\n", pessoas[4].nome);
            printf("Endereço: %s\n", pessoas[4].endereco);
            printf("Idade: %i\n", pessoas[4].idade);
            printf("Telefone: %s\n\n", pessoas[4].telefone);
            
            printf("Voltar para o menu (1) ou encerrar programa (0)?: ");
            scanf("%d", &menu);
            break;

    case 2: {
        int idade_procurada;

        printf("Buscar usuário pela idade: ");
        scanf("%d", &idade_procurada);
    
        printf("Pessoas com %d anos:\n", idade_procurada);
        procurar_idade(pessoas, 5, idade_procurada);
        
        printf("Voltar para o menu (1) ou encerrar programa (0)?: ");
        scanf("%d", &menu);
        
        break;
        
    case 3:{
        
        ordenar_por_nome(pessoas, 5);
        printf("Nomes em ordem alfabética\n----------------------------\n");
        for (int i = 0; i < 5; ++i) {
            printf("Nome: %s\n", pessoas[i].nome);
        }

        printf("Voltar para o menu (1) ou encerrar programa (0)?: ");
        scanf("%d", &menu);
        break;
        
    case 4: {
    int indice, opcao_alteracao;
    
    printf("Digite o índice da pessoa que deseja alterar (0 a 4): ");
    scanf("%d", &indice);

    if (indice >= 0 && indice < 5) {
        printf("O que deseja alterar?\n");
        printf("1. Nome\n");
        printf("2. Endereço\n");
        printf("3. Idade\n");
        printf("4. Telefone\n");
        scanf("%d", &opcao_alteracao);

        switch (opcao_alteracao) {
            case 1:
                printf("Digite o novo nome: ");
                scanf("%s", pessoas[indice].nome);
                break;
            case 2:
                printf("Digite o novo endereço: ");
                scanf("%s", pessoas[indice].endereco);
                break;
            case 3:
                printf("Digite a nova idade: ");
                scanf("%d", &pessoas[indice].idade);
                break;
            case 4:
                printf("Digite o novo telefone: ");
                scanf("%s", pessoas[indice].telefone);
                break;
            default:
                printf("Opção inválida.\n");
        }
    } else {
        printf("Índice inválido.\n");
    }

    printf("Voltar para o menu (1) ou encerrar programa (0)?: ");
    scanf("%d", &menu);
    break;
}
    
    case 5: {
        printf("Programa encerrado");
    }
    
    return 0;
}
}
}
}
}
}