/*Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o
valor da hipotenusa.*/
#include<stdio.h> //funcoes de entrada e saida (printf, scanf)
#include <math.h> //usar funcao pow sqrt
int main()
{
    //Declaracao Simples de Variaveis
    float cateto1, cateto2, hipotenusa;

    //Entrada de Dados
    printf("\n --> Valor do Cateto 1 = ");
    scanf("%f",&cateto1);
    printf(" --> Valor do Cateto 2 = ");
    scanf("%f",&cateto2);

    //Processamento de Dados
    hipotenusa=sqrt( pow(cateto1, 2) + pow(cateto2, 2) ); ;

    //Saida de Dados
    printf("\n ## Valor da Hipotenusa: %.2f \n\n", hipotenusa);
}
