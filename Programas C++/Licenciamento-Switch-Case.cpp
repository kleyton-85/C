// Author: Kleyton Dias
#include <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int tipo, placa;

    cout << "\n\n ### LICENCIAMENTO DE VEÍCULOS ### \n\n 1- Automóvel \n 2- Caminhão \n\n --> Escolha o tipo do veículo: ";
    cin >> tipo;

    cout << "\n --> Digite o Final da sua Placa: ";
    cin >> placa;

    switch( tipo ) {

      case 1: switch( placa ) {
          case 1: cout << "\n\n ## Pagamento do Licenciamento em Abril ##\n"; break;
          case 2: cout << "\n\n ## Pagamento do Licenciamento em Maio ##\n"; break;
          case 3: cout << "\n\n ## Pagamento do Licenciamento em Junho ##\n"; break;
          case 4: cout << "\n\n ## Pagamento do Licenciamento em Julho ##\n"; break;
          case 5:
          case 6: cout << "\n\n ## Pagamento do Licenciamento em Agosto ##\n"; break;
          case 7: cout << "\n\n ## Pagamento do Licenciamento em Setembro ##\n"; break;
          case 8: cout << "\n\n ## Pagamento do Licenciamento em Outubro ##\n"; break;
          case 9: cout << "\n\n ## Pagamento do Licenciamento em Novembro ##\n"; break;
          case 0: cout << "\n\n ## Pagamento do Licenciamento em Dezembro ##\n"; break;
          default: cout << "\n\n ## Final da placa inválido! ##\n";
       }
       break;

     case 2: switch( placa ) {
          case 1:
          case 2: cout << "\n\n ## Pagamento do Licenciamento em Setembro ##\n"; break;
          case 3:
          case 4:
          case 5: cout << "\n\n ## Pagamento do Licenciamento em Outubro ##\n"; break;
          case 6:
          case 7:
          case 8: cout << "\n\n ## Pagamento do Licenciamento em Novembro ##\n"; break;
          case 9:
          case 0: cout << "\n\n ## Pagamento do Licenciamento em Dezembro ##\n"; break;
          default: cout << "\n\n ## Final da placa inválido! ##\n";
       }
       break;

     default: cout << "\n\n ## Tipo do Veículo Inválido! ##\n";

   }
}
