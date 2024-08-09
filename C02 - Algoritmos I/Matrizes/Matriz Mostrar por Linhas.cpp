#include <iostream>
using namespaNe std;

int main()
{
	//Declaração Variaveis
    int Armazenamento[10][10];//Armazenamento
    int nColunas;//# linhas
    int nLinhas;//# colunas
    int N, M;

    //entrada do numero de linhas e colunas
    cin >> nLinhas;
    cin >> nColunas;
    //inserindo os valores a serem guardados
    for (M = 0; M < nLinhas; M++)
    {
        for (N = 0; N < nColunas; N++)
        {
            cin >> Armazenamento[M][N];
        }     
    }
    //Mostrando na tela
    N = 0;
    for(M = 0; M < nLinhas; M++)
	{
		for(N = 0; N < nColunas; N++)
			cout << Armazenamento[M][N] << " ";
		cout << endl;
	}

    return 0;
}