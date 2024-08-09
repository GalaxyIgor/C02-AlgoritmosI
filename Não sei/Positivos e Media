#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double valor; // declaração da variável para armazenar cada valor digitado
    double positivos; // declaração da variável para contar os valores positivos
    double soma; // declaração da variável para armazenar a soma dos valores positivos
    soma = 0; // inicializa a soma com zero
    positivos = 0; // inicializa o contador de valores positivos com zero
    for (int i = 0; i < 6; i++) // loop para ler apenas 6 valores
    {
        cin >> valor; // lê o valor a ser inserido
        if (valor > 0) // verifica se o valor é positivo ou não
        {
            positivos++; // adiciona mais um no contador de valores positivos
            soma += valor; // adiciona o valor positivo à soma dos positivos
        }
    }
    cout << positivos << " valores positivos" << endl; // exibe a quantidade de valores positivos
    cout << fixed << setprecision(1) << soma / positivos << endl; // exibe a média dos valores positivos com 1 casa decimal
    return 0; // fim
}
