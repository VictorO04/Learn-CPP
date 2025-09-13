#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num1, num2, res;
    char opc;

    inicio: //Criação label
    system("cls");

     cout << "Digite o primeiro numero: ";
     cin >> num1;
     cout << "Digite o segundo numero: ";
     cin >> num2;
    
     res = num1 + num2;

     cout << num1 << " + " << num2 << " = " << res << "\n";
     cout << "Deseja Reiniciar? (s/n): ";
     cin >> opc;

     if (opc == 's' or opc == 'S') {
        goto inicio; //Retorna ao label marcado
     }

     return 0;
}