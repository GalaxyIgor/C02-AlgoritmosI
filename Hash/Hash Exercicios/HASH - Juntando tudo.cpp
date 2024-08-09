#include <iostream>
using namespace std;

struct dado {
    int k;
    int status; // 0-vazio, 1-ocupado, 2-removido
};

int hash1(int k, int m) {
    return k % m;
}

int hash2(int k, int m) {
    return 1 + (k % (m - 1));
}

int hash_search(dado t[], int m, int k) {
    int j = hash1(k, m);
    int h = hash2(k, m);
    while (t[j].status != 0 && t[j].k != k) {
        j = (j + h) % m;
    }
    if (t[j].status == 0) {
        return -1;
    } else {
        return j;
    }
}

void hash_insert(dado t[], int m, int k) {
    int j = hash1(k, m);
    int h = hash2(k, m);
    while (t[j].status == 1) {
        j = (j + h) % m;
    }
    t[j].k = k;
    t[j].status = 1;
}

void hash_remove(dado t[], int m, int k) {
    int j = hash_search(t, m, k);
    if (j != -1) {
        t[j].status = 2;
        t[j].k = -1;
    }
}

int main() {
    int m;
    cin >> m;
    dado t[m];
    for (int i = 0; i < m; i++) {
        t[i].status = 0;
    }
    int op, k;
    while (cin >> op && op != 5) {
        switch (op) {
            case 1:
                cin >> k;
                hash_insert(t, m, k);
                break;
            case 2:
                cin >> k;
                cout << hash_search(t, m, k) << endl;
                break;
            case 3:
                cin >> k;
                hash_remove(t, m, k);
                break;
            case 4:
                for (int i = 0; i < m; i++) {
                    if (t[i].status != 1) {
                        cout << "-1 ";
                    } else {
                        cout << t[i].k << " ";
                    }
                }
                cout << endl;
                break;
        }
    }
    return 0;
}
