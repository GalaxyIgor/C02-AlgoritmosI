#include <iostream>
using namespace std;
void soma (int v[],int tam, int &s1, int &s2)
{
	int i;//conador
	//soma e produtos dos elemntos
	s1=0;
	s2=1;
	for(i=0;i<tam;i++)
	{
		s1 += v[i];
		s2 *= v[i];
	}	
		
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
	cout<<"soma = "<< s1 <<endl;
	cout<<"soma = "<< s2 <<endl;
	return 0;
}