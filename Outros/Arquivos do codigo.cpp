#include <iostream>
#include <fstream> // Permite que leia e escreva arquivos
using namespace std;

int main()
{
    // arq é o nome da variavel ou seja voce escolhe
    ofstream arq; // Handle "Permie manipular" para escrever no aquivo
    char nomearq[100]; // Nome do arquivo Tipo "Dados txt"
    char nomeFilme[100]; // Nome dos filmes
    int ano; // Ano de lançamento

    // Lendo nome do arquivo 
    cout << "Nome do aquivo:" << endl;
    cin.getline(nomearq,100);

    // Abrindo arquivo para escrita
    arq.open(nomearq, ofstream::out);

    // Lendo dados do filme
    cout << "Nome do filme:" << endl;
    cin.getline(nomeFilme, 100);
    cout << "Ano:" << endl;
    cin >> ano;

    // Escrevendo informações no arquivo
    arq << nomeFilme << endl;
    arq << ano << endl;

    // Fechando arquivo
    arq.close();

    return 0;
}