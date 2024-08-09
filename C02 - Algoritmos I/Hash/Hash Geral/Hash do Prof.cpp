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


int hash_aux2(int k, int m){
	int hk = 1+(k%(m-1));
	return hk;
}

int hash_linear(int k, int m, int i){
	return ( hash_aux(k,m) + i )%m;
}

int hash_quadratico(int k, int m, int i){
	int c1=1, c2=3;
	return ( hash_aux(k,m) + c1*i + c2*i*i)%m;
}

int hash_duplo(int k, int m, int i){
	return (hash_aux(k,m) + i*hash_aux2(k,m))%m;
}

int hash(int k, int m, int i){
	return hash_duplo(k,m,i);
}

int inserir(info tabela_hash[], int m, int k){
	int i=0, hk;
	while(i<m){
		hk = hash_quadratico(k,m,i);
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
	int m = 11;
	info tabela_hash[m];
	for(int j=0;j<m;j++){
		tabela_hash[j].status = -1;
		tabela_hash[j].k = 0;
	}
	
	imprimir(tabela_hash,m);
	
	int retorno;
	
	inserir(tabela_hash, m,65);
	imprimir(tabela_hash,m);
	
	inserir(tabela_hash, m, 45);
	imprimir(tabela_hash,m);

	inserir(tabela_hash, m, 8);
	imprimir(tabela_hash,m);
	
	inserir(tabela_hash, m, 78);
	imprimir(tabela_hash,m);
	
	inserir(tabela_hash, m, 54);
	imprimir(tabela_hash,m);

	inserir(tabela_hash, m, 14);
	imprimir(tabela_hash,m);
	
	remover(tabela_hash, m, 45);
	imprimir(tabela_hash,m);
	
	remover(tabela_hash, m, 65);
	imprimir(tabela_hash,m);
	
	remover(tabela_hash, m, 45);
	imprimir(tabela_hash,m);

	// if(retorno == -1){
	// 	cout<<"Erro"<<endl;
	// } else {
	// 	cout<<"Sucesso: "<<retorno<<endl;
	// }
	
	
}