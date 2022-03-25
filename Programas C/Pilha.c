// Author: Kleyton Dias

//Escreva a função inicializarPilha que aloca memória para a pilha.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Elemento{
	int num;
	struct Elemento *prox;
};
typedef struct Elemento Elemento;

struct Pilha{
    struct Elemento *topo;
};
typedef struct Pilha Pilha;

Elemento *aux;

Pilha* inicializarPilha(){
    Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL){
        pi -> topo = NULL;
    }
    return pi;
}

void inserir(Pilha *pi){
	Elemento *novo = (Elemento*) malloc(sizeof(Elemento));
	printf("\n --> Digite o numero a ser inserido na Pilha: ");
	scanf("%d",&novo -> num);
	novo -> prox = pi -> topo;
	pi -> topo = novo;
	printf("\n --> Numero inserido na Pilha!");
	getch();
}

void imprimir(Pilha *pi){
	if(pi->topo == NULL){
		printf("\n --> Pilha Vazia!!");
	}else{
		aux = pi -> topo;
		do{
			printf("\n ---------------------------------");
			printf("\n |   Valores da Pilha: ** %d **   |", aux -> num);
			printf("\n ---------------------------------");
			aux = aux -> prox;
		} while(aux != NULL);
	}
	getch();
}

void remover(Pilha *pi){
	 if(pi->topo ==  NULL){
		printf("\n --> Pilha Vazia!!");
	}else{
		aux = pi -> topo;
		printf("\n --> ** %d ** foi Removido!", pi -> topo -> num);
		pi -> topo = pi -> topo -> prox;
		free(aux);
	}
	getch();
}

void esvaziar(Pilha *pi){
	if(pi -> topo == NULL){
		printf("\n --> Pilha Vazia!!");
	}else{
		aux = pi -> topo;
		do{
			pi -> topo = pi -> topo -> prox;
			free(aux);
			aux = pi -> topo;
		}while(aux != NULL);
		printf("\n --> Pilha Esvaziada!!");
	}
	getch();
}

int main(){
    int op;
    Pilha *pi = inicializarPilha();
    while(1){
        system("CLS");
        printf("\n ---------------------------------");
        printf("\n |   ##### CRIACAO PILHA #####   |");
        printf("\n ---------------------------------");
        printf("\n    1- Inserir Elemento na Pilha");
        printf("\n    2- Remover Elemento da Pilha");
        printf("\n    3- Imprimir Elementos da Pilha");
        printf("\n    4- Esvaziar Toda Pilha");
        printf("\n\n  # Escolha a Opcao Desejada: ");
        scanf("%d",&op);
        switch(op){
        case 1:
            inserir(pi);
            break;
        case 2:
            remover(pi);
            break;
        case 3:
            imprimir(pi);
            break;
        case 4:
            esvaziar(pi);
            break;
        default:
            exit(1);
        }
    }
    return 0;
}
