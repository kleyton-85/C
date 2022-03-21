#include <iostream>
using namespace std;

int main()
{
    int  i, j;

    setlocale(LC_ALL, "Portuguese");
    cout << "  \n ### GERADOR DE TABUADA DO 1 AO 10 ###";

    for( i = 1; i <= 10; i++ ) {
        cout << "\n\n --> Tabuada do ** " << i << " **";
        for( j = 1; j <= 10; j++ )
            cout << "\n     " << i << " * " << j << " = " << i * j;
    }
    cout << "\n\n";
}
