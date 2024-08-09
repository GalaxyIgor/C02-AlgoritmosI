#include <iostream>
#include <cstring>
using namespace std;

struct dado {
    char info[50]; // informacao
    int k; // chave
    int status; // 0: vazio, 1:ocupado, 2:removido
};

int hash1(int k, int m) {
    return k % m;
}

int hash2(int k, int m) {
    return 1 + (k % (m - 1));
}

int double_hashing(int k, int i, int m) {
    return (hash1(k, m) + i * hash2(k, m)) % m;
}

int ascii_sum(char* str) {
    int sum = 0;
    for (int i = 0; i < strlen(str); i++) {
        sum += str[i];
    }
    return sum;
}

void insert(dado* T, char* info, int m) {
    int k = ascii_sum(info);
    int i = 0;
    while (T[(double_hashing(k, i, m))].status == 1) {
        i++;
    }
    strcpy(T[(double_hashing(k, i, m))].info, info);
    T[(double_hashing(k, i, m))].k = k;
    T[(double_hashing(k, i, m))].status = 1;
}

int search(dado* T, char* info, int m) {
    int k = ascii_sum(info);
    int i = 0;
    while (T[(double_hashing(k, i, m))].status != 0 && i < m) {
        if (T[(double_hashing(k, i, m))].status == 1 && strcmp(T[(double_hashing(k, i, m))].info, info) == 0) {
            return double_hashing(k, i, m);
        }
        i++;
    }
    return -1;
}

void remove(dado* T, char* info, int m) {
    int pos = search(T, info, m);
    if (pos != -1) {
        T[pos].status = 2;
    }
}

void list(dado* T, int m) {
    for (int i = 0; i < m; i++) {
        if (T[i].status == 1) {
            cout << T[i].info << endl;
        }
    }
}

int main() {
    int m;
    cin >> m;
    dado* T = new dado[m];
    for (int i = 0; i < m; i++) {
        T[i].status = 0;
    }
    int op;
    char info[50];
    while (cin >> op) {
        switch (op) {
            case 1:
                cin >> info;
                insert(T, info, m);
                break;
            case 2:
                cin >> info;
                cout << search(T, info, m) << endl;
                break;
            case 3:
                cin >> info;
                remove(T, info, m);
                break;
            case 4:
                list(T, m);
                break;
            case 5:
                delete[] T;
                return 0;
        }
    }
    return 0;
}
