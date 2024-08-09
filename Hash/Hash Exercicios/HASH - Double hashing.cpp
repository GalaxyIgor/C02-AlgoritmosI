#include<iostream>
using namespace std;

// Função auxiliar hash h1
int h1(int k, int m) {
    return k % m;
}

// Função auxiliar hash h2
int h2(int k, int m) {
    return 1 + (k % (m - 1));
}

// Função de double hashing
int dhash(int k, int m, int i) {
    return (h1(k, m) + i * h2(k, m)) % m;
}

int main() {
    int k, m;
    cin >> k >> m;

    for(int i = 0; i < m; i++) {
        cout << dhash(k, m, i) << " ";
    }

    return 0;
}
/*=============================================================================================================================================
HASH - Double hashing

Faça uma função que implemente o double hashing, dado por:

h(k,i)=(h1(k)+ih2(k))modm

onde 

h1(k)=kmodm

h2(k)=1+(kmod(m−1))
 

são funções hash auxiliares.

As funções devem ter os seguintes cabeçalhos: 

int h1(int k, int m)
int h2(int k, int m)
int dhash(int k, int m, int i)
onde k é a chave a ser inserida, m é o tamanho da tabela hash, e i é o número da tentativa.

Depois faça um programa qiue leia os valores de k e m e faça uso desta função para retornar as posições de sondagem para o double hashing.

Entrada
A entrada consiste  uma única llinha com 2 inteiros, correspondentes aos valores de k e m, respectivamente. 

Saída
Na saída, o programa deve mostrar todas as posições da sondagem double hashing para as entradas dadas.

Exemplos de entrada    	Exemplos  de saída
4 11                    4 9 3 8 2 7 1 6 0 5 10
-4 13                   9 6 3 0 10 7 4 1 11 8 5 2 12
25 9	                7 0 2 4 6 8 1 3 5
=============================================================================================================================================*/