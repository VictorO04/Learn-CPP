#include <iostream>
using namespace std;

int main() {
    /*
    Regra criação de variáveis:
    tipo nome;
    tipo nome = valor;

    As variáveis podem ser alteradas a qualquer momento
    */

    int vidas = 5;
    char letra = 'b';
    double dinheiro = 50.2; //Maior precisão
    float dinheiro2 = 50.2; //Menor precisão
    bool vivo = true;
    string nome = "Victor";

    cout << "Digite o numero de vidas: ";
    cin >> vidas; //ler valor digitado no teclado para armazenar na variável

    cout << "\nVidas: " << vidas << "\nLetra: " << letra << "\nDinheiro: " << dinheiro << "\nDinheiro 2: " << dinheiro2 << "\nVivo: " << vivo << "\nNome: " << nome << "\n";

    return 0;
}