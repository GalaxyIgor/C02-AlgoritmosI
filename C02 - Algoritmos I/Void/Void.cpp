#include <iostream>
using namespace std;
void soma (int v[],int tam, int &s)
{
	int i;//conador
	//soma dos elemntos
	s=0;
	for(i=0;i<tam;i++)	
		s += v[i];
}
int main()
{
	int v[5];//armazena os dados
	int n;//numero de elemntos inceridos
	int i;//contador
	int s=0;//soma dos elementos
	cin>>n;//#elementos
	//lendo dados e inserindo no vetor
	for(i=0;i<n;i++)
		cin>>v[i];
	//soma dos elemntos
	soma(v ,n ,s);
	//mostrando soma 
	cout<<"soma = "<< s <<endl;
	return 0;
}