#include <stdio.h>
#include <string.h>

#define MAX_USUARIOS 5

struct cadastro_agenda {
    char nome[80];
    char endereco[80];
    int idade;
    char telefone[11];
};
/*Deixando essas notas para não me perder porque aparentemente vai ser um código grande*/

struct cadastro_agenda usuarios[MAX_USUARIOS];
int num_usuarios = 0;

void cadastrar() {
    if (num_usuarios == MAX_USUARIOS) {
        printf("Limite de usuários atingido.\n");
        return;
    }

    printf("Digite o nome: ");
    fgets(usuarios[num_usuarios].nome, sizeof(usuarios[num_usuarios].nome), stdin);
    // Remover o '\n' do final da string
    usuarios[num_usuarios].nome[strcspn(usuarios[num_usuarios].nome, "")] = '\0';
    
    printf("Digite o endereco: ");
    fgets(usuarios[num_usuarios].endereco, sizeof(usuarios[num_usuarios].endereco), stdin);
    // Remover o '\n' do final da string
    usuarios[num_usuarios].endereco[strcspn(usuarios[num_usuarios].endereco, "\n")] = '\0';

    printf("Digite a idade: ");
    scanf("%d", &usuarios[num_usuarios].idade);

    printf("Digite o telefone: ");
    fgets(usuarios[num_usuarios].telefone, sizeof(usuarios[num_usuarios].telefone), stdin);
    usuarios[num_usuarios].telefone[strcspn(usuarios[num_usuarios].telefone, "\n")] = '\0';

    num_usuarios++;
    printf("Usuário cadastrado com sucesso!\n");
}

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
struct cadastro_agenda pessoas[MAX_USUARIOS];
int num_usuarios = 0;
    
int iniciar, opcao, mais_cadastro, i;
    
printf("Para iniciar, digite 1: ");
scanf("%d", &iniciar);
if(iniciar == 1) {    

    /*MENU*/
    do {
    printf("\nMENU DA AGENDA\n--------------------------\n");
    printf("1. CADASTRO\n");
    printf("2. PESQUISA DE IDADE\n");
    printf("3. CLASSIFICAÇÃO EM ORDEM ALFABÉTICA\n");
    printf("4. ALTERAR ERRO DE REGISTRO\n");
    printf("5. VER CADASTROS\n");
    printf("6. SAIR\n");
    printf("O que deseja fazer?: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1: {
            cadastrar();
            break;
            }
        case 2: {
            /*procurando idade pelo teclado */
            int idade_procurada;
        
            printf("Buscar usuário pela idade: ");
            scanf("%d", &idade_procurada);
        
            printf("Pessoas com %d anos:\n", idade_procurada);
            procurar_idade(pessoas, 5, idade_procurada);
        }
    } 
    } 
    while (opcao != 6); return 0 ;
}
}







#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 5

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
struct cadastro_agenda pessoas[MAX_PESSOAS];
int numero_pessoas = 0;
    
int iniciar, opcao, mais_cadastro, i;
    
printf("Para iniciar, digite 1: ");
scanf("%d", &iniciar);
if(iniciar == 1) {    

    /*MENU*/
    do {
    printf("\nMENU DA AGENDA\n--------------------------\n");
    printf("1. CADASTRO\n");
    printf("2. PESQUISA DE IDADE\n");
    printf("3. CLASSIFICAÇÃO EM ORDEM ALFABÉTICA\n");
    printf("4. ALTERAR ERRO DE REGISTRO\n");
    printf("5. VER CADASTROS\n");
    printf("6. SAIR\n");
    printf("O que deseja fazer?: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1: {
            mais_cadastro = 1, i = 0;
            while (mais_cadastro && i <= MAX_PESSOAS) {
                    printf("Digite seu nome: ");
                    fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
                    pessoas[i].nome[strcspn(pessoas[i].nome, "")] = '\0';
            // Remova o '\n' do final da string, se necessário
                    printf("Digite seu endereço: ");
                    fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco) - 1, stdin);
                    pessoas[i].endereco[strcspn(pessoas[i].endereco, "")] = '\0';
                    // Remova o '\n' do final da string, se necessário
                    printf("Digite sua idade: ");
                    scanf("%d", &pessoas[i].idade);
                    printf("Digite seu telefone: ");
                    fgets(pessoas[i].telefone, 11, stdin);
                    pessoas[i].telefone[strcspn(pessoas[i].telefone, "")] = '\0';
                    // Remova o '\n' do final da string, se necessário
                    
                    i++;
                    
                    printf("Continuar? 1 para sim, 0 para não: ");
                    scanf("%d", &mais_cadastro);
            }
        } case 2: {
            /*procurando idade pelo teclado */
            int idade_procurada;
        
            printf("Buscar usuário pela idade: ");
            scanf("%d", &idade_procurada);
        
            printf("Pessoas com %d anos:\n", idade_procurada);
            procurar_idade(pessoas, 5, idade_procurada);
        }
    } 
    } while (opcao != 6);
    return 0;
}
}