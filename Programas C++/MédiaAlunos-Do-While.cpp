#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float AV1,AV2, media;
    int aluno, aprovados = 0, reprovados = 0;
    char resp;

    cout << "\n ### CALCULO M�DIA DE ALUNOS ###";

    do{
        cout << "\n\n --> Digite a 1� Nota do Aluno: ";
        cin >> AV1;
        cout << " --> Digite a 2� Nota do Aluno: ";
        cin >> AV2;

        media = (AV1 + AV2)/2;
        cout << "\n ## Media do Aluno: " << media;

        if( media >= 6 )
            aprovados++;
        else
            reprovados++;

        cout << "\n\n --> Deseja Calcular a M�dia de outro Aluno [s/n]: ";
        cin >> resp;

    } while( resp == 's'|| resp == 'S');

    cout << "\n\n ## Total de alunos Aprovados: " << aprovados;
    cout << "\n ## Total de alunos Reprovados: " << reprovados << "\n\n";
}
