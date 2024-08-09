#include <iostream>
#include <iostream>
#include  <iomanip>
using namespace std;

struct Dado {
    int k;
    int status;
};

int h(int k, int i, int m) {
    return (k + i) % m;
}

int hash_search(Dado *t, int m, int k) {
    int i = 0;
    int j;
    do {
        j = h(k, i, m);
        if (t[j].k == k)
            return j;
        i = i + 1;
    } while (t[j].status != 0 && i < m);
    return -1;
}

int main() {
    int m;
    cin >> m;
    Dado *t = new Dado[m];
    for(int i = 0; i < m; i++) {
        t[i].status = 0;
    }
    int k;
    cin >> k;
    while(k != 0) {
        int pos = k % m;
        while(t[pos].status != 0) {
            pos = (pos + 1) % m;
        }
        t[pos].k = k;
        t[pos].status = 1;
        cin >> k;
    }
    cin >> k;
    int pos = hash_search(t, m, k);
    if(pos == -1) {
        cout << "Chave " << k << " nao encontrada\n";
    } else {
        cout << "Chave " << k << " encontrada na posicao " << pos << "\n";
    }
    delete[] t;
    return 0;
}


/*=============================================================================================================================================
HASH - Pesquisa

O algoritmo de pesquisa em uma tabela hash é mostrado abaixo:

HASH-SEARCH(T,m,k)
    i <- 0
    do
        j <- h(k,i,m)
        if T[j].k = k
            return j
        i <- i+1
    while (T[j].status!=0 and i<m)
    return -1
Faça uma função que implemente este algoritmo. Esta função deve retornar a posição onde a chave foi encontrada na tabela hash, ou -1 se a chave não estiver na tabela. Use a sondagem linear para fazer a sondagem na tabela. Sua função deve ter o seguinte cabeçalho:

int hash_search(dado t[], int m, int k)
Faça então um programa que leia o tamanho desejado m
 para a tabela hash e insira várias chaves nesta.

Depois, o programa deve ler o elemento a ser procurado e retornar a posição em que este se encontra. Se o elemento não estiver na tabela, uma mensagem deve ser mostrada. 

Entrada

A entrada consiste de três linhas:

- a primeira linha irá conter o tamanho m
 da tabela (um número inteiro)

- a segunda linha consiste de vários inteiros positivos, correspondentes aos valores das chaves a serem inseridas. Esta linha termina com o número 0, que não deve ser inserido na tabela.

- a última linha tem um único inteiro, que corresponde à chave que queremos verificar.

Saída

Na saída, o programa deve mostrar onde a chave foi encontrada, ou uma mensagem dizendo que a chave não está na tabela, como no exemplo abaixo.

Exemplo de entrada                	Exemplo  de saída
11
10 22 31 4 15 28 17 88 59 0
15	Chave 15 encontrada na posicao 5 


9
2 1 5 7 0
10	 Chave 10 nao encontrada

=============================================================================================================================================*/