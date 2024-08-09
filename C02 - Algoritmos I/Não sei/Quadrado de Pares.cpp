
#include <iostream> //biblioteca.
#include <cmath> //biblioteca de matematica.
#include <iomanip> // biblioteca para utilizar setprecision

using namespace std;

int main(){
    int NR; //NR= numero de repetições, V=valor.

    cin >> NR; // inserindo as repetições.
    cout<< fixed << setprecision(0); // para deixar em inteiros
    for(int i = 1; i <= NR; i++) // calculo de repetições
    if(i%2==0) // se for par fazer calculo para par
	{
            cout<< i << "^2 = "<< pow(i,2) << endl; // gerar saidad do problema 1073
     } 
	}