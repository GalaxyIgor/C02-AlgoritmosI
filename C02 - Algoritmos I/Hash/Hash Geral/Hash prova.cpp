#include<iostream>
#include<iomanip>

using namespace std;

struct dado
{
    int codigo;
    float preco;
    int quantidade;
    int status; // -2, -1, 0
};

dado* tabela_hash;

int hash_aux(int k, int m){
	int hk = k%m;
	return hk;
}

int hash_linear(int k, int m, int i){
	return ( hash_aux(k,m) + i )%m;
}

void inserir(int m, int codigo, float preco, int quantidade){
	int i=0, hk;
	while(i<m){
		hk = hash_linear(codigo,m,i);
		if(tabela_hash[hk].status < 0){
			tabela_hash[hk].codigo = codigo;
			tabela_hash[hk].preco = preco;
			tabela_hash[hk].quantidade = quantidade;
			tabela_hash[hk].status = 0;
			return;
		}
		else
			i++;
	}
}

void atualizar(int m, int codigo, int quantidade){
	int i=0, hk;
	while(i<m){
		hk = hash_linear(codigo,m,i);
		if(tabela_hash[hk].codigo == codigo){
			tabela_hash[hk].quantidade += quantidade;
			if(tabela_hash[hk].quantidade <= 0)
				tabela_hash[hk].status = -2;
			return;
		}
		else
			i++;
	}
}

float comprar(int m, int codigo, int quantidade){
	int i=0, hk;
	while(i<m){
		hk = hash_linear(codigo,m,i);
		if(tabela_hash[hk].codigo == codigo && tabela_hash[hk].status != -2){
			if(tabela_hash[hk].quantidade >= quantidade){
				tabela_hash[hk].quantidade -= quantidade;
				return quantidade * tabela_hash[hk].preco;
			} else {
				return -1;
			}
		}
		else
			i++;
	}
	return -1;
}

int main(){
	int m, o;
	cin >> m >> o;
	tabela_hash = new dado[m];
	for(int j=0;j<m;j++){
		tabela_hash[j].status = -1;
		tabela_hash[j].codigo = 0;
		tabela_hash[j].preco = 0;
		tabela_hash[j].quantidade = 0;
	}
	
	char operacao;
	int codigo, quantidade;
	float preco;
	for(int i=0; i<o; i++){
		cin >> operacao;
		if(operacao == 'I'){
			cin >> codigo >> preco >> quantidade;
			inserir(m, codigo, preco, quantidade);
		} else if(operacao == 'A'){
			cin >> codigo >> quantidade;
			atualizar(m, codigo, quantidade);
		}
	}
	
	cin >> codigo >> quantidade;
	float total = comprar(m, codigo, quantidade);
	if(total == -1)
		cout << "Quantidade indisponivel" << endl;
	else
		cout << "R$ " << fixed << setprecision(2) << total << endl;
	
	delete[] tabela_hash;
	
	return 0;
}
