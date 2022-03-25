// Author: Kleyton Dias
/*
Desenvolva um algoritmo para inserção de dados dos alunos de um determinado curso. O algoritmo deverá
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
 	- Permita ao usuário entrar com os dados de 5 alunos.
 	- Encontre o aluno com maior nota da primeira prova.
 	- Encontre o aluno com maior média geral.
 	- Encontre o aluno com menor média geral
 	- Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
*/

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

    typedef struct{
        int matricula;
        char nome[20];
        float nota[3];
        float media;
    } aluno;

int main(void){
    setlocale(LC_ALL, "Portuguese");
	int a, maiornota, menornota, maiornota1;
	float maior, menor, nota;
	aluno cad_aluno[5];

    for(a=0; a<5; a++){
        printf("\n----------------------------------------------");
        printf("\n| ########### CADASTRO DE ALUNOS ########### |");
        printf("\n----------------------------------------------\n");
        printf("\n   * Matricula do Aluno (nº 0%d): ", a+1);
        scanf("%d", &cad_aluno[a].matricula);
        ignorarespacos();
        printf("   * Nome do Aluno (nº 0%d): ", a+1);
        scanf("%[^\n]", &cad_aluno[a].nome);
        ignorarespacos();
        printf("   * Digite a Nota 01: ");
        scanf("%f", &cad_aluno[a].nota[0]);
        ignorarespacos();
        printf("   * Digite a Nota 02: ");
        scanf("%f", &cad_aluno[a].nota[1]);
        ignorarespacos();
        printf("   * Digite a Nota 03: ");
        scanf("%f", &cad_aluno[a].nota[2]);
        ignorarespacos();

		cad_aluno[a].media = (cad_aluno[a].nota[0] + cad_aluno[a].nota[1] + cad_aluno[a].nota[2]) / 3;
        maiusculo(cad_aluno[a].nome, cad_aluno[a].nome);

        if(cad_aluno[a].media < 6){
            printf("\n --> Aluno ** %s **, você está REPROVADO(A)\n\n", cad_aluno[a].nome);
            system("PAUSE");
            system("cls");
        }
        else{
            printf("\n --> Aluno ** %s **, você está APROVADO(A)\n\n", cad_aluno[a].nome);
            system("PAUSE");
            system("cls");
        }
	}

	maior = 0;
	menor = cad_aluno[0].media;

	for (a=0; a<5; a++){
        if(cad_aluno[a].nota[0]>nota){
            maiornota1= a;
            nota = cad_aluno[a].nota[0];
        }
		if(cad_aluno[a].media > maior){
			maiornota = a;
			maior = cad_aluno[a].media;
		}
		if(cad_aluno[a].media < menor){
			menornota = a;
			menor = cad_aluno[a].media;
		}
	}

        printf("\n---------------------------------------------");
        printf("\n| ########## AVALIAÇÃO DE ALUNOS ########## |");
        printf("\n---------------------------------------------\n");
		printf("\n  * Maior Nota da Primeira Prova: %s", cad_aluno[maiornota1].nome);
        printf("\n  * Maior Média.................: %s", cad_aluno[maiornota].nome);
        printf("\n  * Menor Média.................: %s \n\n", cad_aluno[menornota].nome);

	return 0;
}

