#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    // Definição da matriz de filmes
    const int numFilmes = 5;
    const int numAtributos = 3;

    string filmes[numFilmes][numAtributos] = {
        {"Filme 1", "Acao", "Classificacao 1"},
        {"Filme 2", "Terror", "Classificacao 2"},
        {"Filme 3", "Comedia", "Classificacao 3"},
        {"Filme 4", "Romance", "Classificacao 4"},
        {"Filme 5", "Ficcao", "Classificacao 5"}
    };

    // Selecionando um filme aleatório
    int indiceAleatorio = rand() % numFilmes;
    string nomeFilme = filmes[indiceAleatorio][0];
    string categoriaFilme = filmes[indiceAleatorio][1];
    string classificacaoFilme = filmes[indiceAleatorio][2];

    // Exibindo o filme selecionado
    cout << "Filme Aleatorio:" << endl;
    cout << "Nome: " << nomeFilme << endl;
    cout << "Categoria: " << categoriaFilme << endl;
    cout << "Classificacao: " << classificacaoFilme << endl;

    return 0;
}
