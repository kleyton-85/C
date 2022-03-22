#include <iostream>
using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    char resp;
    int operador;
    float calculo, porcentagem, num1, num2;

    do{
    printf("\n\n ### CALCULADORA ### \n\n"
            "  1- SOMA (+)\n"
            "  2- SUBTRAÇÃO (-) \n"
            "  3- MULTIPLICAÇÃO (*) \n"
            "  4- DVISÃO (/)\n"
            "  5- PORCENTAGEM (Desconto %) \n"
            "  6- PORCENTAGEM (Acrescimo %)"
            "\n\n ### Escolha uma Opção: ");
    scanf ("%d", &operador);

    printf("\n --> Digite Primeiro Numero: ", num1);
    scanf("%f", &num1);
    printf(" --> Digite Segundo Numero: ", num2);
    scanf("%f", &num2);

        switch(operador){
            case 1:
                calculo = num1 + num2;
                printf("\n <<### RESULTADO SOMA: %.1f + %.1f = %.2f ###>>\n\n", num1, num2, calculo);
                break;
            case 2:
                calculo = num1 - num2;
                printf("\n <<### RESULTADO SUBTRAÇÃO: %.1f - %.1f = %.2f ###>>\n\n", num1, num2, calculo);
                break;
            case 3:
                calculo = num1 * num2;
                printf("\n <<### RESULTADO MULTIPLICAÇÃO: %.1f * %.1f = %.2f ###>>\n\n", num1, num2, calculo);
                break;
            case 4:
                calculo = num1 / num2;
                printf("\n <<### RESULTADO DIVISÃO: %.1f / %.1f = %.2f ###>>\n\n", num1, num2, calculo);
                break;
            case 5:
                porcentagem = num2/100;
                calculo = num1 - (num1 * porcentagem);
                printf("\n <<### RESULTADO PORCENTAGEM: %.1f - %.1f % = %.2f ###>>\n\n", num1, num2, calculo);
                break;
            case 6:
                porcentagem = num2/100;
                calculo = num1 + (num1 * porcentagem);
                printf("\n <<### RESULTADO PORCENTAGEM: %.1f + %.1f % = %.2f ###>>\n\n", num1, num2, calculo);
                break;
            default: printf("\n\n ### Operador Inválido! ###\n\n", operador);
        }

        printf("---------------------------------------------");
        printf("\n --> Deseja realizar outro Calculo [s/n]: ");
        scanf("%s", &resp);
        printf("---------------------------------------------\n");
    }while( resp == 's'|| resp == 'S');

    system("PAUSE");
}
