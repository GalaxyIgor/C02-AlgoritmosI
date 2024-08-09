
#include <iostream>
#include <iomanip>
using namespace std;

//função para calcular peso ideal em determinado sexo
int sinal(int n)
{

	//determina o calculo nescessario para qual sexo é requerido
	if(n > 0)

		n = 0;
	else if( n < 0)

		n = -1;

	else if( n == 0)

		n = 0;

	return n;//retorna a função
}

int main()
{
	int n; //Numero a ser analisado

	cin >> n ;//entrada de valor

	n = sinal(int n);//chama a função sinal e determina o valor de n

	if (n == 0)
		cout << "Zero" << endl;
	else if (n < 0)
		cout << "Positivo" << endl;
	else if (n > 0)
		cout << "Negativo" << endl;
	return 0;//sucesso
}
