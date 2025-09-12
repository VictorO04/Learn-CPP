#include <iostream>
using namespace std;

int main() {
    /*
    Se teste lógico for verdadeiro executa o if
    Se for falso executa o else

    operadores de comparação: > < >= <= == !=
    */

    int idade = 18;

    if (idade >= 18) {
        cout << "Voce e maior de idade!\n";
    } else {
        cout << "Voce e menor de idade!\n";
    }

    return 0;
}