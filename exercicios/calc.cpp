#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    double num1, num2, res;
    char operacao, opc;

    inicio:

    system("cls");

    cout << "Escolha o sinal da conta que deseja realizar (+ - * /): ";
    cin >> operacao;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    if (operacao == '+') {
        res = num1 + num2;
        cout << num1 << " + " << num2 << " = " << res << "\n";
    } else if (operacao == '-') {
        res = num1 - num2;
        cout << num1 << " - " << num2 << " = " << res << "\n";
    } else if (operacao == '*') {
        res = num1 * num2;
        cout << num1 << " * " << num2 << " = " << res << "\n";
    } else if (operacao == '/') {
        if (num2 == 0) {
            cout << "Erro: divisao por zero nao e permitida\n";
        } else {
            res = num1 / num2;
            cout << num1 << " / " << num2 << " = " << res << "\n";
        }
    } else {
        cout << "Operacao invalida\n";
    }

    cout << "\nDeseja reiniciar? (s/n) ";
    cin >> opc;

    if (opc == 's' or opc == 'S') {
        goto inicio;
    }
}