// Author: Kleyton Dias

#include <stdio.h> // entrada e saida de dados
#include <stdlib.h> // system
#include <locale.h> // palavras portuguesas
#include <ctype.h> // toUpper

void maiusculo (char string1[], char string2[]){
    int s = 0;
    while(string1[s] != '\0'){
        string2[s] = toupper(string1[s]);
        s++;
    }
    string2[s] = '\0';
}

void ignorarespacos(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

typedef struct
    {
        int dia;
        int mes;
        int ano;
    }data;

typedef struct
    {
        char rua[30];
        int numero;
        char bairro[30];
        char cidade[30];
        char estado[30];
        int cep;
    }endereco;

int main(void){
    setlocale(LC_ALL, "Portuguese");

    struct cad_cliente
    {
        int cpf;
        char nome[50];
        int tel;
        char email[30];

        data datanasc;
        endereco end_cliente;
    };

    struct cad_cliente cliente[2];
    int c;

    for (c=0; c<2; c++)
    {
        printf("\n-------------------------------------------");
        printf("\n|  ##### CADASTRO DO CLIENTE * %d * #####  |", c+1);
        printf("\n-------------------------------------------");
        printf("\n  * Digite o CPF: ");
        scanf("%d", &cliente[c].cpf);
        ignorarespacos();
        printf("  * Digite o Nome: ");
        scanf("%[^\n]", &cliente[c].nome);
        ignorarespacos();
        printf("  * Digite o Telefone: ");
        scanf("%d", &cliente[c].tel);
        ignorarespacos();
        printf("  * Digite o E-mail: ");
        scanf("%s", &cliente[c].email);
        ignorarespacos();
        printf("  * Digite a Rua: ");
        scanf("%[^\n]", &cliente[c].end_cliente.rua);
        ignorarespacos();
        printf("  * Digite o Numero: ");
        scanf("%d", &cliente[c].end_cliente.numero);
        ignorarespacos();
        printf("  * Digite o Bairro: ");
        scanf("%[^\n]", &cliente[c].end_cliente.bairro);
        ignorarespacos();
        printf("  * Digite a Cidade: ");
        scanf("%[^\n]", &cliente[c].end_cliente.cidade);
        ignorarespacos();
        printf("  * Digite o Estado: ");
        scanf("%[^\n]", &cliente[c].end_cliente.estado);
        ignorarespacos();
        printf("  * Digite o CEP: ");
        scanf("%d", &cliente[c].end_cliente.cep);
        ignorarespacos();
        printf("  * Digite o Dia de Nascimento: ");
        scanf("%d", &cliente[c].datanasc.dia);
        ignorarespacos();
        printf("  * Digite o Mês de Nascimento: ");
        scanf("%d", &cliente[c].datanasc.mes);
        ignorarespacos();
        printf("  * Digite o Ano de Nascimento: ");
        scanf("%d", &cliente[c].datanasc.ano);
        ignorarespacos();

        maiusculo(cliente[c].nome, cliente[c].nome);
        maiusculo(cliente[c].end_cliente.rua, cliente[c].end_cliente.rua);
        maiusculo(cliente[c].end_cliente.bairro, cliente[c].end_cliente.bairro);
        maiusculo(cliente[c].end_cliente.cidade, cliente[c].end_cliente.cidade);
        maiusculo(cliente[c].end_cliente.estado, cliente[c].end_cliente.estado);

        system("cls");
    }

    for (c=0; c<2; c++)
    {
        printf("\n\n------------------------------------------------");
        printf("\n|   ########## DADOS DO CLIENTE %d ##########   |", c+1);
        printf("\n------------------------------------------------");
        printf("\n  * CPF................: %d", cliente[c].cpf);
        printf("\n  * Nome...............: %s", cliente[c].nome);
        printf("\n  * Telefone...........: %d", cliente[c].tel);
        printf("\n  * E-mail.............: %s", cliente[c].email);
        printf("\n  * Endereço...........: %s, %d, %s - %s/%s", cliente[c].end_cliente.rua, cliente[c].end_cliente.numero, cliente[c].end_cliente.bairro, cliente[c].end_cliente.cidade, cliente[c].end_cliente.estado);
        printf("\n  * CEP................: %d", cliente[c].end_cliente.cep);
        printf("\n  * Data de Nascimento.: %d / %d / %d \n", cliente[c].datanasc.dia, cliente[c].datanasc.mes, cliente[c].datanasc.ano);
    }

    return 0;
}
