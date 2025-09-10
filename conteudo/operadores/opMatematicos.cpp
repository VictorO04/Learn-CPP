#include <iostream>
using namespace std;

int main() {
    //Operadores matemáticos: + - / * %

    int n1, n2, n3, n4, adi, sub, mult, div, mod;

    n1 = 11, n2 = 3, n3 = 5, n4 = 2;

    adi = n1 + n2 + n3 + n4;
    sub = n1 - n2 - n3 - n4;
    mult = n1 * n2 * n3 * n4;
    div = n1 / n2 / n3 / n4;
    mod = n1 % n3;



    cout << "\nadicao: " << adi << "\nsubtracao: " << sub << "\nmultiplicacao: " << mult << "\ndivisao: " << div << "\nmodulo: " << mod << "\n";

    return 0;
}