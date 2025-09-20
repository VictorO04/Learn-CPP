#include <iostream>
#include <cstdlib>
using namespace std;

double num1, num2, resultado;

void adicao() {
    resultado = num1 + num2;
    cout << num1 << " + " << num2 << " = " << resultado;
}

void subtracao() {
    resultado = num1 - num2;
    cout << num1 << " - " << num2 << " = " << resultado;
}

void multiplicacao() {
    resultado = num1 * num2;
    cout << num1 << " * " << num2 << " = " << resultado;
}

void divisao() {
    if (num2 == 0) {
        cout << "Divisao por zero e invalida.";
    } else {
        resultado = num1 / num2;
        cout << num1 << " / " << num2 << " = " << resultado;
    }
}

int main() {
    char opc;

    do {
        char operacao;

        system("cls");

        cout << "-- Calculadora --\n\n";
        cout << "Digite o primeiro numero: ";
        cin >> num1;

        while (true) {
            cout << "Escolha a operacao (+, -, *, /): ";
            cin >> operacao;

            if (operacao == '+') {
                break;
            } else if (operacao == '-') {
                break;
            } else if (operacao == '*') {
                break;
            } else if (operacao == '/') {
                break;
            } else {
                cout << "operacao invalida\n\n";
            }
        }
    
        cout << "Digite o segundo numero: ";
        cin >> num2;

        if (operacao == '+') {
            adicao();
        } else if (operacao == '-') {
            subtracao();
        } else if (operacao == '*') {
            multiplicacao();
        } else if (operacao == '/') {
            divisao();
        } else {
            cout << "Operacao invalida.\n";
        }

        cout << "\nDeseja reiniciar? (s/n) ";
        cin >> opc;
    } while (opc != 'n' && opc != 'N');
}