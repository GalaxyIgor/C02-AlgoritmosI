#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    int X[100], Y[100];
    char Op[100];

    for (int i = 0; i < N; i++) {
        cin >> X[i];
        cin >> Y[i];
        cin >> Op[i];
    }

    double Z[100];

    for (int i = 0; i < N; i++) {
        switch (Op[i]) {
            case '+'
                Z[i] = X[i] + Y[i];
                break;
            case '-'
                Z[i] = X[i] - Y[i];
                break;
            case '*'
                Z[i] = X[i] * Y[i];
                break;
            case '/'
                Z[i] = static_cast<double>(X[i]) / Y[i];
                break;
        }
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < N; i++) {
        cout << X[i] << " " << Op[i] << " " << Y[i] << " = " << Z[i] << endl;
    }

    return 0;
}
