#include <iostream>

using namespace std;

int main()
{
    int x, y;  // Declara variáveis inteiras "x" e "y".
    int opcao; // Declara uma variável inteira "opcao".
    // Declara variáveis inteiras "inter", "gremio", "grenal" e "empate", todas sendo inicializadas com zero.
    int inter = 0;
    int gremio = 0;
    int grenal = 0;
    int empate = 0;

    while (true) // Inicia a estrutura de repetição while, que entrará em loop infinito por always (true).
    {
        cin >> x; // Recebe um número inteiro do usuário pela entrada padrão com "cin" e coloca na variável "x".
        cin >> y; // Recebe um número inteiro do usuário pela entrada padrão com "cin" e coloca na variável "y".

        // Se "x" é maior que "y", incrementa o contador "inter".
        if (x > y)
            inter++;
        // Se "x" é menor que "y", incrementa o contador "gremio".
        if (x < y)
            gremio++;
        // Se "x" é igual a "y", incrementa os contadores "empate" e "grenal".
        if (x == y)
            empate++;
        grenal++;

        cout << "Novo grenal (1-sim 2-nao)\n"; // Exibe a mensagem "Novo grenal (1-sim 2-nao)" na tela.
        cin >> opcao;                          // Recebe um número inteiro do usuário pela entrada padrão com "cin" e coloca na variável "opcao".

        // Se "opcao" é igual a 2, encerra o loop com o comando "break" .
        if (opcao == 2)
            break;
    }
    cout << grenal << " grenais\n";       // Exibe a quantidade de Grenais ocorridos na tela.
    cout << "Inter:" << inter << "\n";    // Exibe a quantidade de vitórias do time "Inter" na tela.
    cout << "Gremio:" << gremio << "\n";  // Exibe a quantidade de vitórias do time "Gremio" na tela.
    cout << "Empates:" << empate << "\n"; // Exibe a quantidade de empates na tela.

    // Se "inter" é maior que "gremio", exibe a mensagem "Inter venceu mais" na tela.
    if (inter > gremio)
        cout << "Inter venceu mais\n";
    // Se "gremio" é maior que "inter", exibe a mensagem "Gremio venceu mais" na tela.
    if (inter < gremio)
        cout << "Gremio venceu mais\n";
    // Se "inter" é igual a "gremio", exibe a mensagem "Nao houve vencedor" na tela.
    if (inter == gremio)
        cout << "Nao houve vencedor\n";
    return 0; // sucesso
}