#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double Intervalo;

    cin >> Intervalo;

    cout << fixed << setprecision(2);

    if (Intervalo >= 0 && Intervalo <= 25) {
        cout << "Intervalo [0,25]" << endl;
    } else if (Intervalo > 25 && Intervalo <= 50) {
        cout << "Intervalo (25,50]" << endl;
    } else if (Intervalo > 50 && Intervalo <= 75) {
        cout << "Intervalo (50,75]" << endl;
    } else if (Intervalo > 75 && Intervalo <= 100) {
        cout << "Intervalo (75,100]" << endl;
    } else {
        cout << "Fora de intervalo" << endl;
    }

    return 0;
}
