#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float nota1 = -1, nota2 = -1;
    int opcao = 1;
    // Loop principal
    while (opcao == 1)
    {
        // Loop para validar primeira nota
        do
        {
            cin >> nota1;
            if (nota1 < 0 || nota1 > 10)
                cout << "nota invalida" << endl;
        } while (nota1 < 0 || nota1 > 10);
        // Loop para validar segunda nota
        do
        {
            cin >> nota2;
            if (nota2 < 0 || nota2 > 10)
                cout << "nota invalida" << endl;
        } while (nota2 < 0 || nota2 > 10);
        // Cálculo e exibição da média das duas notas
        cout << "media = " << fixed << setprecision(2) << ((nota1 + nota2) / 2) << endl;
        // Loop para perguntar se o usuário quer calcular outra média ou não
        do
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> opcao;
        } while (opcao != 1 && opcao != 2);
    }
    // Fim do programa
    return 0;
}