#include <stdio.h>

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

    struct cadastro_agenda pessoas[] = {{
        "Jorge Marcos de Teles",
        "Av. das Estações",
        40,
        "11987654321"
    },
    
    /*printf("Nome: %s\n", pessoa1.nome);
    printf("Endereço: %s\n", pessoa1.endereco);
    printf("Idade: %i\n", pessoa1.idade);
    printf("Telefone: %s\n", pessoa1.telefone);*/
    
    {
        "Matcio Marmoto",
        "R. da Fantasia Final",
        50,
        "11912345678"
    },
    
    /*printf("Nome: %s\n", pessoa2.nome);
    printf("Endereço: %s\n", pessoa2.endereco);
    printf("Idade: %i\n", pessoa2.idade);
    printf("Telefone: %s\n", pessoa2.telefone);*/
    
    {
        "Filipo Ariano",
        "Av. Biscalchini",
        30,
        "11975312468"
    },
    
    /*printf("Nome: %s\n", pessoa3.nome);
    printf("Endereço: %s\n", pessoa3.endereco);
    printf("Idade: %i\n", pessoa3.idade);
    printf("Telefone: %s\n", pessoa3.telefone);*/

    {
        "Carolaine Leão",
        "R. Pastel",
        35,
        "11986421357"
    },
    
    /*printf("Nome: %s\n", pessoa4.nome);
    printf("Endereço: %s\n", pessoa4.endereco);
    printf("Idade: %i\n", pessoa4.idade);
    printf("Telefone: %s\n", pessoa4.telefone);*/
    
    {
        "Luciana Filha",
        "R. das Antiguidades",
        60,
        "11901234567"
    }};
    
    /*printf("Nome: %s\n", pessoa5.nome);
    printf("Endereço: %s\n", pessoa5.endereco);
    printf("Idade: %i\n", pessoa5.idade);
    printf("Telefone: %s\n", pessoa5.telefone);*/

/*Cadastramento de informações. */

int main() {
    
    int opcao, menu =1;
    
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

    case 2: {
        int idade_procurada;

        printf("Buscar usuário pela idade: ");
        scanf("%d", &idade_procurada);
    
        printf("Pessoas com %d anos:\n", idade_procurada);
        procurar_idade(pessoas, 5, idade_procurada);
        
        printf("Voltar para o menu (1) ou encerrar programa (0)?: ");
        scanf("%d", &menu);
        
        break;
    }

} 
    return 0;
}
}
}