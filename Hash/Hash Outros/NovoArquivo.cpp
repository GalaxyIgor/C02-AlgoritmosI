#include <iostream>
using namespace std;

// Função hash auxiliar
int hash_aux(int k, int m) {
    return k % m;
}

// Função hash1 para sondagem linear
int hash1(int k, int i, int m) {
    return (hash_aux(k, m) + i) % m;
}

int main() {
    int k, m;
    cin >> k >> m;

    cout << "Posições da sondagem linear: ";
    for (int i = 0; i < m; i++) {
        cout << hash1(k, i, m) << " ";
    }
    cout << endl;

    return 0;
}