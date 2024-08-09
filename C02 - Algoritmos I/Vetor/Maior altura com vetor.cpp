#include <iostream>
using namespace std;
int main ()
{
    float alturas [3]; //altura das pessoas em metros
    int maisAlto;
    float maiorAltura;
    
    //lendo as alturas e armazenando no vetor
    for(int i = 0;i < 3;i++)
    {
        cin >> alturas[i];
    }
    //Idendificando pessoa mais alta
    maiorAltura = -1;
    for(int i = 0;i < 3;i++)
    {
        if(alturas[i] > maiorAltura)
        {
            maiorAltura = alturas[i];
            maisAlto = i;
        }
    }
    cout << "maior altura: " << maiorAltura << endl;
    cout << "pessoa mais alta: " << maiorAltura << endl;
    
    return 0;
}

