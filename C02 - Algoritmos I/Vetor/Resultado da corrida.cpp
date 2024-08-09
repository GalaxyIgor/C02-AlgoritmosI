#include <iostream>
using namespce std;

int main() {
    const int MAX_CORREDORES = 100;
    double tempos[MAX_CORREDORES];
    double tempo;
    int numCorredores = 0;

    while (true) {
        cin >> tempo;
        if (tempo == -1) {
            break;
        }
        tempos[numCorredores] = tempo;
        numCorredores++;
    }

    int classificacao[MAX_CORREDORES];
    for (int i = 0; i < numCorredores; i++) {
        classificacao[i] = i;
    }

    for (int i = 0; i < numCorredores; i++) {
        for (int j = i + 1; j < numCorredores; j++) {
            if (tempos[classificacao[i]] > tempos[classificacao[j]]) {
                int temp = classificacao[i];
                classificacao[i] = classificacao[j];
                classificacao[j] = temp;
            }
        }
    }

    cout << "Classificacao:" << endl;
    for (int i = 0; i < numCorredores; i++) {
        cout << classificacao[i] << endl;
    }

    return 0;
}
