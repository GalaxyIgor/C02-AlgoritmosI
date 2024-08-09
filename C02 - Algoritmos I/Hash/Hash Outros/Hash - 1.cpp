#include <iostream>
using namespace std;
int hash(int k, int m)
{
	return k%m;
}
int main()
{
	int m = 13;
	int tabela_hash[m];
	
	//inserindo elemento
	int k, hk;
	cin >> k;
	hk = hash(k,m);
	tabela_hash[hk] = k;
	
	// buscando um elemento
	cin >> k; 
	hk = hash(k,m);
	if(tabela_hash[hk] == k)
		cout << "foi encontrado na posicao " << hk << endl;
	else 
		cout << "Nao foi encontrado" << endl; 
}
