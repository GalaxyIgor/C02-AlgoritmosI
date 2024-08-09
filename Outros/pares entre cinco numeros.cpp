#include <iostream>
using namespace std;

int main() 
{
    int n; // declaração de variáveis, n= número a ser inserido
    int count = 0;// declaração de variáveis, count= contador

    for(int i = 1; i <= 5; i++) // loop para ler apenas 5 números
    {
        cin >> n; // inserirum numero n na entrada

        if(n % 2 == 0) // se o numero for par se o número é par
        {
            count++; // contar +1 no contador
        }
    }

    // exibe o número total de valores pares lidos
    cout << count << " valores pares" << endl;

    return 0; // indica que o programa foi executado com sucesso
}
