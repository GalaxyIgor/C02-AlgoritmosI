#include <iostream>
using namespace std;
int main ()
{
    int notas [3]; //notas
    float media;
    int soma;

    //lendo notas
    for(int i = 0;i < 3;i++)
    {
        cin >> notas[i];
    }
    //calculando e mostrando a mostrando a media
    soma=0;
    for(int i = 0;i < 3;i++)
    {
        soma = soma + notas[i]; //ou soma+=notas[i];
    }
    media = (float)soma/3;
    cout << "media: " << media << endl;
    
    return 0;
}

