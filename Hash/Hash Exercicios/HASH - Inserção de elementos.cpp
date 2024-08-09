#include<iostream>
using namespace std;

// Estrutura para armazenar os dados da tabela hash
struct dado {
    int k;
    int status; // 1 se ocupado, -1 se vazio
};

// Função hash
int h(int k, int i, int m) {
    return (k + i) % m;
}

// Função de inserção de chaves
int hash_insert(dado t[], int m, int k) {
    int i = 0;
    do {
        int j = h(k, i, m);
        if (t[j].status != 1) {
            t[j].k = k;
            t[j].status = 1;
            return j;
        } else {
            i++;
        }
    } while (i != m);
    return -1;
}

int main() {
    int m;
    cin >> m;

    // Inicializa a tabela hash
    dado t[m];
    for(int i = 0; i < m; i++) {
        t[i].status = -1;
    }

    int k;
    cin >> k;
    while(k != 0) {
        hash_insert(t, m, k);
        cin >> k;
    }

    // Mostra a tabela depois das inserções
    cout << "Tabela preenchida: ";
    for(int i = 0; i < m; i++) {
        if(t[i].status == 1) {
            cout << t[i].k << " ";
        } else {
            cout << "-1 ";
        }
    }

    return 0;
}
/*=============================================================================================================================================
HASH - Inserção de elementos

O algoritmo de inserção de chaves é mostrado abaixo:

HASH-INSERT(T,m,k)
    i <- 0
    do
        j <- h(k,i,m)
        if T[j].status != 1
            T[j].k <- k
            T[j].status=1
            return j
        else
            i <- i+1
    while i!=m
    return -1
Faça uma função que implemente este algoritmo. Esta função deve retornar a posição onde a chave foi inserida na tabela hash, ou -1 se não for possível inseri-la (tabela cheia). Use a sondagem linear para escolher a posição de inserção da chave. Sua função deve ter o seguinte cabeçalho:

int hash_insert(dado t[], int m, int k)
Faça então um programa que leia o tamanho desejado m
 para a tabela hash e as chaves a serem inseridas.

Depois, o programa deve criar uma tabela de tamanho m
 inicialmente vazia (todas as posições preenchidas com -1), e ir inserindo as chaves digitadas.

Ao final, seu programa deve mostrar a tabela depois das inserções. 

Entrada

A entrada consiste de duas linhas:

- a primeira linha irá conter o tamanho m
 da tabela (um número inteiro)

- a segunda linha consiste de vários inteiros positivos, correspondentes aos valores das chaves a serem inseridas. Esta linha termina com o número 0, que não deve ser inserido na tabela.

Saída

Na saída, o programa deve mostrar a tabela preenchida, como no exemplo abaixo.

Exemplo de entrada                	Exemplo  de saída
11
10 22 31 4 15 28 17 88 59 0	22 88 -1 -1 4 15 28 17 59 31 10
=============================================================================================================================================*/