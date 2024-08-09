#include<iostream>

using namespace std;

struct info {
	int k;
	int status; // -2, -1, 0
};

int hash_aux(int k, int m){
	int hk = k%m;
	if(hk < 0)
		return hk;
	else
		return hk;
}

int hash_linear(int k, int m, int i){
	return ( hash_aux(k,m) + i )%m;
}

int hash_quadratico(int k, int m, int i){
	int c1=1, c2=3;
	return ( hash_aux(k,m) + c1*i + c2*i*i)%m;
}

int hash(int k, int m, int i){
	return hash_linear(k,m,i);
}

int inserir(info tabela_hash[], int m, int k){
	int i=0, hk;
	while(i<m){
		hk = hash(k,m,i);
		if(tabela_hash[hk].status < 0){
			tabela_hash[hk].k = k;
			return hk;
		}
		else
			i++;
	}
	return -1;
}

int buscar(info tabela_hash[], int m, int k){
	int i=0, hk;
	while(i<m){
		hk = hash(k,m,i);
		if(tabela_hash[hk].status == -1){
			return -1;
		} else if(tabela_hash[hk].k == k && tabela_hash[hk].status == 0){
			return hk;
		} else
			i++;
	}
	return -1;
}

int remover(info tabela_hash[], int m, int k){
	int i=0, hk;
	while(i<m){
		hk = hash(k,m,i);
		if(tabela_hash[hk].status == -1){
			return -1;
		} else if(tabela_hash[hk].k == k){
			tabela_hash[hk].status = -2;
			return hk;
		} else
			i++;
	}
	return -1;
}

void imprimir(info tabela_hash[], int m){
	for(int j=0;j<m;j++)
		//if(tabela_hash[j].status >= 0)
			//cout<<j<<":"<<tabela_hash[j].k<< " ";
		cout<<tabela_hash[j].k<< " ";
	cout<<endl;	
}

int main(){
	int m = 13;
	info tabela_hash[m];
	for(int j=0;j<m;j++){
		tabela_hash[j].status = -1;
		tabela_hash[j].k = 0;
	}
	
	imprimir(tabela_hash,m);
	
	int retorno;
	
	inserir(tabela_hash, m, 12);
	imprimir(tabela_hash,m);
	cin >> retorno;
	
	inserir(tabela_hash, m, 65);
	imprimir(tabela_hash,m);
	cin >> retorno;
	
	inserir(tabela_hash, m, 13);
	imprimir(tabela_hash,m);
	cin >> retorno;
	
	inserir(tabela_hash, m, 26);
	imprimir(tabela_hash,m);
	cin >> retorno;
	
	inserir(tabela_hash, m, 88);
	imprimir(tabela_hash,m);
	cin >> retorno;
	
	inserir(tabela_hash, m, 59);
	imprimir(tabela_hash,m);
	cin >> retorno;
	
	
	// if(retorno == -1){
	// 	cout<<"Erro"<<endl;
	// } else {
	// 	cout<<"Sucesso: "<<retorno<<endl;
	// }
	
	
}