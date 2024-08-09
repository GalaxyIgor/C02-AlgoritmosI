#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double nota1, nota2; // declaração de nota1= primeira nota,nota2= segunda nota
    do                   // faça
    {
        cin >> nota1; // entrada da primeira nota
        // Verifica se o valor de nota1 é inválido
        if (nota1 < 0 || nota1 > 10)         // caso não seja entre (0,10)
            cout << "nota invalida" << endl; // gere nota invalida
    } while (nota1 < 0 || nota1 > 10);       // Loop para verificar se o valor de nota1 é válido (entre 0 e 10)
    do
    {
        cin >> nota2; // entrada da segunda nota
        // Verifica se o valor de nota2 é inválido
        if (nota2 < 0 || nota2 > 10)         // caso não seja entre (0,10)
            cout << "nota invalida" << endl; // gere nota invalida
    } while (nota2 < 0 || nota2 > 10);       // Loop para verificar se o valor de nota2 é válido (entre 0 e 10)
    // Calcula a média das notas e imprime na tela com 2 casas decimais
    cout << "media = " << fixed << setprecision(2) << (nota1 + nota2) / 2.0 << endl;
    return 0;
}
