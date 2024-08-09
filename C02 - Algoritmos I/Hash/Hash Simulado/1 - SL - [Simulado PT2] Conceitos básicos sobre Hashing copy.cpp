#include<iostream>

using namespace std;

struct info {
	int k;
	int status; // -2, -1, 0
};

int hash_aux(int k, int m){
	int hk = k%m;
	return hk;
}

int hash_linear(int k, int m, int i){
	return ( hash_aux(k,m) + i )%m;
}

int inserir(info tabela_hash[], int m, int k){
	int i=0, hk;
	while(i<m){
		hk = hash_linear(k,m,i);
		if(tabela_hash[hk].status < 0){
			tabela_hash[hk].k = k;
			tabela_hash[hk].status = 0;
			return hk;
		}
		else
			i++;
	}
	return -1;
}
void remover(info tabela_hash[], int m, int k){
	int i=0, hk;
	while(i<m){
		hk = hash_linear(k,m,i);
		if(tabela_hash[hk].k == k){
			tabela_hash[hk].status = -2;
			return;
		}
		else
			i++;
	}
}

void imprimir(info tabela_hash[], int m){
	for(int j=0;j<m;j++)
		cout<<tabela_hash[j].k<< " ";
	cout<<endl;	
}

int main(){
	int m = 11;
	info tabela_hash[m];
	for(int j=0;j<m;j++){
		tabela_hash[j].status = -1;
		tabela_hash[j].k = 0;
	}
	
	imprimir(tabela_hash,m);
	
	int retorno;
	
	inserir(tabela_hash, m, 15);
	imprimir(tabela_hash,m);
	
	inserir(tabela_hash, m, 37);
	imprimir(tabela_hash,m);
	
	inserir(tabela_hash, m, 60);
	imprimir(tabela_hash,m);
	
	remover(tabela_hash, m, 15);
	imprimir(tabela_hash,m);
	
	remover(tabela_hash, m, 60);
	imprimir(tabela_hash,m);
	
	inserir(tabela_hash, m, 70);
	imprimir(tabela_hash,m);
	
	inserir(tabela_hash, m, 6);
	imprimir(tabela_hash,m);
	
	inserir(tabela_hash, m, 41);
	imprimir(tabela_hash,m);
	
	return 0;
}
/*=========================================================================================================================================
Considere que a função hash utilizada para a inserção de números inteiros positivos k em uma tabela de tamanho m é: h' = k mod m.
Se m = 11 e considerando o método da sondagem linear para tratamento de colisões, depois da inserção dos 
números 65, 45, 8, 78, 54 e 14 a tabela hash terá a seguinte composição:
=========================================================================================================================================*/