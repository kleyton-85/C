#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, i;
    char resp;

    do{
        cout << "\n\n ## Este programa gera a tabuada de um N�mero ##\n\n --> Digite um numero: ";
        cin >> numero;

        for( i = 1; i <= 10; i++ )
            cout << "\n  " << i << " * " << numero << " = " << i * numero;

        cout << "\n\n --> Deseja calcular a tabuada de outro n�mero [s/n]: ";
        cin >> resp;

    } while( resp == 's'|| resp == 'S');

}
