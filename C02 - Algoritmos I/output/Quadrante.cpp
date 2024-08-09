#include <iostream>//biblioteca
using namespace std;

int main()//função
{
    int x; //coordenada x
    int y; //coordenada Y

    cin >> x >> y;// leitura das coordenadas

    while (x!=0 and y!=0)//loop
    {
        
        if(x == 0 || y == 0) break; // interrompe o loop se uma das coordenadas for zero
        if(y > 0 && x > 0) // verifica se está no primeiro quadrante
        cout << "primeiro\n"; //se estiver gera primeiro
        if(y > 0 && x < 0) // verifica se está no segundo quadrante
        cout << "segundo\n"; //se estiver gera segundo
        if(y < 0 && x < 0) // verifica se está no terceiro quadrante
        cout << "terceiro\n"; //se estiver gera terceiro
        if(y < 0 && x > 0)  // verifica se está no quarto quadrante
        cout << "quarto\n"; //se estiver gera quarto

        cin >> x >> y;// leitura das coordenadas
    }

    return 0;//fim
}
