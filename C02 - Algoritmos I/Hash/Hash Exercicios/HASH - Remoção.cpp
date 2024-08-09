#include <iostream>
using namespace std;

struct dado {
    int k;
    int status; // 0-vazio, 1-ocupado, 2-removido
};

int hash_search(dado t[], int m, int k) {
    int j = k % m;
    while (t[j].status != 0 && t[j].k != k) {
        j = (j + 1) % m;
    }
    if (t[j].status == 0) {
        return -1;
    } else {
        return j;
    }
}

int hash_remove(dado t[], int m, int k) {
    int j = hash_search(t, m, k);
    if (j != -1) {
        t[j].status = 2;
        t[j].k = -1;
        return 0; // consegui remover
    } else {
        return -1; // k nao esta na tabela
    }
}

int main() {
    int m;
    cin >> m;
    dado t[m];
    for (int i = 0; i < m; i++) {
        t[i].status = 0;
    }
    int k;
    cin >> k;
    while (k != 0) {
        int j = k % m;
        while (t[j].status == 1) {
            j = (j + 1) % m;
        }
        t[j].k = k;
        t[j].status = 1;
        cin >> k;
    }
    cin >> k;
    hash_remove(t, m, k);
    for (int i = 0; i < m; i++) {
        if (t[i].status != 1) {
            cout << "-1 ";
        } else {
            cout << t[i].k << " ";
        }
    }
    cout << endl;
    return 0;
}
