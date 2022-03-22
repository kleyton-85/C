// Author: Kleyton Dias
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float altura, soma_altura = 0;
    int idade, pessoa, quant = 0;

    cout << "\n #### CALCULO ALTURA PESSOAS DE +35 ANOS ####\n\n";
    for( pessoa = 1; pessoa <= 5; pessoa++ ) {
        cout << "-------------------------";
        cout << "\n ###### PESSOA " << pessoa << " ######";
        cout << "\n --> Digite a Idade: ";
        cin >> idade;
        cout << " --> Digite a Altura (metros): ";
        cin >> altura;
        cout << "\n";

        if( idade > 35 ) {
            soma_altura = soma_altura + altura;
            quant++;
        }
    }

    cout << "\n\n ## Média das Alturas das Pessoas com mais de 35 Anos: " << soma_altura/quant << " metros. \n\n";
}
