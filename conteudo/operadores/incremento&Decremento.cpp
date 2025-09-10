#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    /*
    Incrementos e decrementos:
    Variável++ - adiciona 1
    Variável-- - diminui 1
    Variável += valor
    Variável -= valor
    Variável *= valor
    Variável /= valor

    Pós-fixado: n1++ - primeiro imprime, depois incrementa
    Pré-fixado: ++n1 - primeiro incrementa, depois imprime
    */

    n1 = 0;
    n2 = 10;

    n1 += 10;
    n2 *= 5;

    cout << n1 << ", " << n2 << "\n";

    return 0;
}