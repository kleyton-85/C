#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario_atual, novo_salario, ferias, decimo;
    int meses;

    cout << "\n --> Digite o Sal�rio Atual: R$ ";
    cin >> salario_atual;

    cout << "\n --> Digite a Quantidade de Meses Trabalhados (m�ximo 12): ";
    cin >> meses;

    if(salario_atual < 1500 )
       novo_salario = salario_atual * 1.15;
    else if( salario_atual >= 1500 && salario_atual <= 4500 )
       novo_salario = salario_atual * 1.10;
    else if( salario_atual > 4500 )
       novo_salario = salario_atual * 1.05;

    ferias = salario_atual + salario_atual/3;
    decimo = (salario_atual * meses)/12;

    cout << "\n\n ## Novo Sal�rio: R$ " << novo_salario;
    cout << "\n\n ## Valor das F�rias: R$ " << ferias;
    cout << "\n\n ## Valor do D�cimo Terceiro: R$ " << decimo << "\n\n\n";
}

