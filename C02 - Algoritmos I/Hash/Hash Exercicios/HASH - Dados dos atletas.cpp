#include <iostream>
#include <cstring>
#define MAX 100

using namespace std;

struct info {
    char nome[100];
    int idade;
    float peso;
    float altura; 
};

struct dado {
    info atleta;
    int k;
    int status; // 0:vazio, 1:ocupado, 2:removido
};

int hash1(char *str, int m) {
    int sum = 0;
    for (int i = 0; str[i]; i++)
        sum += str[i];
    return sum % m;
}

int hash2(char *str, int m) {
    int sum = 0;
    for (int i = 0; str[i]; i++)
        sum += str[i];
    return (1 + sum % (m - 1));
}

void insert(dado *hashTable, int m, info atleta) {
    int index = hash1(atleta.nome, m);
    int i = 0;
    while (hashTable[(index + i * hash2(atleta.nome, m)) % m].status == 1)
        i++;
    hashTable[(index + i * hash2(atleta.nome, m)) % m].atleta = atleta;
    hashTable[(index + i * hash2(atleta.nome, m)) % m].status = 1;
}

info search(dado *hashTable, int m, char *nome) {
    int index = hash1(nome, m);
    int i = 0;
    while (hashTable[(index + i * hash2(nome, m)) % m].status != 0 && strcmp(hashTable[(index + i * hash2(nome, m)) % m].atleta.nome, nome))
        i++;
    return hashTable[(index + i * hash2(nome, m)) % m].atleta;
}

void remove(dado *hashTable, int m, char *nome) {
    int index = hash1(nome, m);
    int i = 0;
    while (hashTable[(index + i * hash2(nome, m)) % m].status != 0 && strcmp(hashTable[(index + i * hash2(nome, m)) % m].atleta.nome, nome))
        i++;
    hashTable[(index + i * hash2(nome, m)) % m].status = 2;
}

void printHashTable(dado *hashTable, int m) {
    for (int i = 0; i < m; i++) {
        if (hashTable[i].status == 1) {
            cout << "Nome: " << hashTable[i].atleta.nome << endl;
            cout << "Idade: " << hashTable[i].atleta.idade << endl;
            cout << "Peso: " << hashTable[i].atleta.peso << endl;
            cout << "Altura: " << hashTable[i].atleta.altura << endl;
            cout << endl;
        }
    }
}

int main() {
    int m;
    cin >> m;
    dado hashTable[m];
    for (int i = 0; i < m; i++)
        hashTable[i].status = 0;
    int op;
    while (cin >> op) {
        if (op == 1) {
            info atleta;
            cin >> atleta.nome >> atleta.idade >> atleta.peso >> atleta.altura;
            insert(hashTable, m, atleta);
        } else if (op == 2) {
            char nome[100];
            cin >> nome;
            info atleta = search(hashTable, m, nome);
            if (strcmp(atleta.nome, nome) == 0) {
                cout << "Nome: " << atleta.nome << endl;
                cout << "Idade: " << atleta.idade << endl;
                cout << "Peso: " << atleta.peso << endl;
                cout << "Altura: " << atleta.altura << endl;
            } else {
                cout << "Atleta nao cadastrado" << endl;
            }
        } else if (op == 3) {
            char nome[100];
            cin >> nome;
            remove(hashTable, m, nome);
        } else if (op == 4) {
            printHashTable(hashTable, m);
        } else if (op == 5) {
            break;
        }
    }
    return 0;
}
