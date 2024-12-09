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

/*Cadastramento de informações. */

int main() {
    
    /*MENU*/
    
    printf("MENU DE AGENDA\n-------------------------\n\nCadastro (digite 1)\nPesquisa de idade (digite 2)\nClassificação em ordem alfabética (digite 3)\nAlterar erro de registro (digite 4)\nVer registros (apenas com senha) (digite 5)\nSair do menu (digite 6)\nO que deseja fazer?");

    struct cadastro_agenda pessoas[5] = {{
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

/*procurando idade pelo teclado */

    int idade_procurada;

    printf("Buscar usuário pela idade: ");
    scanf("%d", &idade_procurada);

    printf("Pessoas com %d anos:\n", idade_procurada);
    procurar_idade(pessoas, 5, idade_procurada);

/*Ver registros*/
    
    char senha[10];
    int tentativas = 0;
    
    while tentativas <= 5 {
        if(senha=="0123456789") {
            
            printf("Nome: %s\n", pessoa1.nome);
            printf("Endereço: %s\n", pessoa1.endereco);
            printf("Idade: %i\n", pessoa1.idade);
            printf("Telefone: %s\n\n", pessoa1.telefone); 
            
            printf("Nome: %s\n", pessoa2.nome);
            printf("Endereço: %s\n", pessoa2.endereco);
            printf("Idade: %i\n", pessoa2.idade);
            printf("Telefone: %s\n\n", pessoa2.telefone);
            
            printf("Nome: %s\n", pessoa3.nome);
            printf("Endereço: %s\n", pessoa3.endereco);
            printf("Idade: %i\n", pessoa3.idade);
            printf("Telefone: %s\n\n", pessoa3.telefone);
            
            printf("Nome: %s\n", pessoa4.nome);
            printf("Endereço: %s\n", pessoa4.endereco);
            printf("Idade: %i\n", pessoa4.idade);
            printf("Telefone: %s\n\n", pessoa4.telefone);
            
            printf("Nome: %s\n", pessoa5.nome);
            printf("Endereço: %s\n", pessoa5.endereco);
            printf("Idade: %i\n", pessoa5.idade);
            printf("Telefone: %s\n\n", pessoa5.telefone);
            
        } else {
            printf("Senha incorreta. Tente novamente")
            tentativas =+ 1;
        }
    }
    
    printf("Você fez muitas tentativas. Programa encerrado.");
    
    return 0;
}