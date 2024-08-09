#include <iostream>
#include <fstream> // Permite que leia e escreva arquivos
using namespace std;

int main()
{
    ifstream arq; // Hadle para ler do arquivo
    char nomearq[100]; // Nome do arquivo onde estao os dados
    char nomeFilme[100]; // Nome dos filmes
    int ano; // Ano de lançamento

    // Lendo nome do arquivo
    cin.getline(nomearq, 100);

    // Abrindo arquivo para leitura
    arq.open(nomearq, ifstream::in);

    while (!arq.eof())
    {
        // Lendo dados do arquivo
        arq.getline(nomeFilme, 100);
        arq >> ano;
        arq.ignore();

        // Mostrando as informações
        cout << "Filme: " << nomeFilme << endl;
        cout << "Ano: " << ano << endl;
        
    }
    
    // Fechando o arquivo
    arq.close();

    return 0;
}

