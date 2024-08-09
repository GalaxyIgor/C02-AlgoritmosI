#include <iostream>
using namespace std;
int main()
{
	int i; //contador
	int n; //quantidade de repetição
	int soma ;
	int numero;
	
	cin >> n; //lendo a quantidade de numeros (entrada)
	soma = 0; //lendo e somando os numeros  ( resultado retorna para soma)
	for(i =0; i< n; i++) 
	{
		cin >> numero;
		soma = soma + numero; // calculo
	}
	cout<< "Soma = " <<soma << endl; //mostrando os resultados (saida)
	 
	return 0;
}