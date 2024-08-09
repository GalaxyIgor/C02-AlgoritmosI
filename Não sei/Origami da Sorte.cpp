#include <iostream>

using namespace std;

int main(){
    int n;
    char l;

    cout << "Escolha um numero" << endl;
    cin >> n;

    if(n%2!=0){
        cout << "Escolha uma letra entre a,b,c,d" << endl;
        cin >> l;
        switch (l)
        {
        case 'a':
            cout << "Inteligente" << endl;
            break;
        case 'b':
            cout << "Lerdo" << endl;
            break;
        case 'c':
            cout << "Legal" << endl;
            break;
        case 'd':
            cout << "Chato" << endl;
            break;
        }
    }else
        cout << "Escolha entre e,f,g,h" << endl;
        cin >> l;
        switch (l)
        {
        case 'e':
            cout << "Baixo" << endl;
            break;
        case 'f':
            cout << "Alto" << endl;
            break;
        case 'g':
            cout << "Forte" << endl;
            break;
        case 'h':
            cout << "Fraco" << endl;
            break;
        }
}