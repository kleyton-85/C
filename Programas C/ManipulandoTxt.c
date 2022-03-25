// Author: Kleyton Dias

/*  (a) crie/abra um arquivo texto de nome "av1.txt",
    (b) permita que o usuário entre com diversos caracteres nesse arquivo, até que o usuário entre com o caractere ’0’ (fim da entrada de dados),
    (c) Feche o arquivo e abra novamente o av1.txt, e
    (d) lendo-o caractere por caractere, e escrevendo na tela (printf) todos os caracteres armazenados.
*/


#include <stdio.h>
#include <string.h>

int main(){
    FILE *arquivo;
    char caractere;

    arquivo = fopen("av1.txt", "w");
    printf("\n\n");

    while (caractere != '0'){
        fputc(caractere, arquivo);
        printf(" ## Digite um Caractere ou *0* para Terminar: ");
        caractere = getchar();
        fflush(stdin);
    }
    fclose(arquivo);

    arquivo = fopen("av1.txt","r");
    if(arquivo == NULL){
        printf(" ## Erro ao Abrir o Arquivo AV1.txt!\n");
        return 0;
    }

    printf("\n ## LENDO OS CARACTERES E IMPRIMINDO:\n");
    caractere = getc(arquivo);

    while (caractere!=EOF){
        printf("  %c",caractere);
        caractere = getc(arquivo);
    }
    fclose(arquivo);
}
