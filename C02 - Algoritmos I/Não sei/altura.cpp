#include <iostream>
using namespace std;

int main(){
    int i; // Contador;
    int n; // N�mero de repeti��o;
     float altura; // altura em m
     float maior; // maior altura

    // Lendo numero de pessosas; 
    cin >> n;

    // Lendo a altura e determinando a maior
    maior= -1;
    for(i=0; i < n; i++)
	{
		cin >> n;
		if(altura > maior)
			maior = altura;
    }
    // Mostrando o resultado;
    cout << "Maior altura: " << maior << endl;
    return 0;
}