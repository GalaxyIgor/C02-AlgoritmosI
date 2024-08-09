#include<iostream>
#include <iomanip>

using namespace std;

struct dado
{
    int codigo;
    float preco;
    int quantidade;
    int status; // 0: vazio, 1: preenchido, 2: deletado
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

int inserir(dado tabela_hash[], int m, dado k){
	int i=0, hk;
	while(i<m){
		hk = hash(k.codigo,m,i);
		if(tabela_hash[hk].status == 0){
			tabela_hash[hk] = k;
			tabela_hash[hk].status = 1;
			return hk;
		}
		else
			i++;
	}
	return -1;
}

int buscar(dado tabela_hash[], int m, int k){
	int i=0, hk;
	while(i<m){
		hk = hash(k,m,i);
		if(tabela_hash[hk].status == 0){
			return -1;
		} else if(tabela_hash[hk].status == 1 && tabela_hash[hk].codigo == k){
			return hk;
		} else
			i++;
	}
	return -1;
}

int remover(dado tabela_hash[], int m, int k){
	int i=0, hk;
	while(i<m){
		hk = hash(k,m,i);
		if(tabela_hash[hk].status == 0){
			return -1;
		} else if(tabela_hash[hk].status == 1 && tabela_hash[hk].codigo == k){
			tabela_hash[hk].status = 2;
			return hk;
		} else
			i++;
	}
	return -1;
}

void imprimir(dado tabela_hash[], int m){
	for(int j=0;j<m;j++){
		dado i = tabela_hash[j];
		if(i.status == 1)
			//cout<<j<<":"<<tabela_hash[j].k<< " ";
			cout<<i.codigo<<"("<<i.preco<<")"<<": "<<i.quantidade<<" unidade(s)"<<endl;
	}
	cout<<endl;	
}

int main(){
	int m;
	cin >> m;
	dado tabela_hash[m];
	for(int j=0;j<m;j++){
		tabela_hash[j].status = 0;
	}
	
	imprimir(tabela_hash,m);
	
	
	char op;
	dado i;
	int operacoes, codigo_buscado, pos_atualizar, quantidade_atualizada;
		
	cin >> operacoes;
	for(int j=0;j<operacoes;j++){
		cin >> op;
		
		if(op == 'I'){
			cin >> i.codigo >> i.preco >> i.quantidade;
			inserir(tabela_hash, m, i);
		} else if(op == 'A') {
			cin >> codigo_buscado >> quantidade_atualizada;
			pos_atualizar = buscar(tabela_hash, m, codigo_buscado);
			if(pos_atualizar != -1){
				tabela_hash[pos_atualizar].quantidade += quantidade_atualizada;
				if(tabela_hash[pos_atualizar].quantidade <= 0){
					//remover(tabela_hash, m, id_buscado);
					tabela_hash[pos_atualizar].status = 2;
				}
			}
		}
	}
	int codigo_comprado, pos_comprar, quantidade_comprada;
	cin >> codigo_comprado >> quantidade_comprada;
	pos_comprar = buscar(tabela_hash, m, codigo_comprado);
	if(pos_comprar != -1){
		if(tabela_hash[pos_comprar].quantidade >= quantidade_comprada){
			cout << fixed << setprecision(2) << "R$ " << quantidade_comprada * tabela_hash[pos_comprar].preco;
			return 0;
		}
	}
	
	cout<<"Quantidade indisponivel"<<endl;
	
	return 0;
	
}