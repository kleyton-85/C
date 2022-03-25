// Author: Kleyton Dias

/*  Escreva a função inicializarFila que aloca memória para a fila.
    Depois escreva a função inserir para adicionar um elemento à fila.
    Para finalizar escreva a função remover para extrair um elemento da fila e mostrar seu conteúdo.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Elemento{
	int num;
	struct elemento *prox;
};
typedef struct Elemento Elemento;


struct Fila{
    struct Elemento *inicio;
    struct Elemento *fim;
};

typedef struct Fila Fila;

Elemento *aux;

Fila* inicializarFila(){
    Fila* fi = (Fila*) malloc(sizeof(Fila));
    if(fi != NULL){
        fi -> fim = NULL;
        fi -> inicio = NULL;
    }
    return fi;
}

void inserir(Fila *fi){
	Elemento*novo = (Elemento*) malloc(sizeof(Elemento));
	printf("\n --> Digite o numero a ser inserido na Fila: ");
	scanf("%d",&novo -> num);
	novo -> prox = NULL;

	if(fi -> inicio == NULL){
		fi -> inicio = novo;
		fi -> fim = novo;
	}else{
		fi -> fim -> prox = novo;
		fi -> fim = novo;
	}
	printf("\n --> Numero Inserido na Fila!");
	getch();
}

void remover(Fila *fi){
	if(fi -> inicio == NULL){
		printf("\n --> Fila Vazia!!");
	}else{
		aux = fi -> inicio;
		printf("\n --> ** %d ** foi Removido!", fi -> inicio -> num);
		fi -> inicio = fi -> inicio -> prox;
		free(aux);
	}
	getch();
}

void imprimir(Fila *fi){
	if(fi -> inicio == NULL){
		printf("\n --> Fila Vazia!!");
	}else{
		aux = fi -> inicio;
		do{
            printf("\n -------------------------------");
			printf("\n |  Valores da Lista: ** %d **  |", aux -> num);
            printf("\n -------------------------------");
			aux = aux -> prox;
		} while(aux != NULL);
	}
	getch();
}

void esvaziar(Fila *fi){
	if(fi -> inicio == NULL){
		printf("\n --> Fila Vazia!!");
	}else{
		aux = fi -> inicio;
		do{
			fi -> inicio = fi -> inicio -> prox;
			free(aux);
			aux = fi -> inicio;
		}while(aux != NULL);
		printf("\n --> Fila Esvaziada!!");
	}
	getch();
}

int main(){
    int op;
    Fila *fi = inicializarFila();
    while(1){
        system("CLS");
        printf("\n ----------------------------------");
        printf("\n |    ##### CRIACAO FILA #####    |");
        printf("\n ----------------------------------");
        printf("\n    1- Inserir Elemento na Fila");
        printf("\n    2- Remover Elemento da Fila");
        printf("\n    3- Imprimir Elementos da Fila");
        printf("\n    4- Esvaziar Toda Fila");
        printf("\n\n --> Escolha a Opcao Desejada: ");
        scanf("%d",&op);
        switch(op){
        case 1:
            inserir(fi);
            break;
        case 2:
            remover(fi);
            break;
        case 3:
            imprimir(fi);
            break;
        case 4:
            esvaziar(fi);
            break;
        default:
            exit(1);
        }
    }
    return 0;
}
