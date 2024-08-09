#include <iostream>
using namespace std;

int main(){
    int i; // Contador;
    int n; // Número de repetição;
    int numero;
    int soma;
    float media;

    // Lendo a quantidade de números; 
    cin >> n;

    // Lendo a e somando os números;
    soma = 0;
    for(i = 0; i < n; i++)
    {
        cin >> numero;
        soma = soma + numero; // O resultado vai pra soma e retorna pro for;
        media = soma / n;
    }
    // Mostrando o resultado;
    cout << "Soma = " << soma << endl;
    cout << "Media = " << media << endl;
    return 0;
}