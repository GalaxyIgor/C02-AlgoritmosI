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


/*=====================================================================================================================================
Faça um programa que insira produtos e atualize suas quantidades no estoque de uma loja. 
Para inserção, leia o código, o preço e quantidade de vários produtos e os armazene em uma tabela hash. 
Para atualizar, leia o código do produto é um número inteiro (positivo ou negativo) da quantidade a ser atualizada. 
Se a quantidade chegar a zero (ou menor) o produto deve ser removido do estoque.
No final, você deve simular uma venda. O programa deve ler o código de um produto e a quantidade desejada, 
e retornar o preço total  a ser pago, caso a quantidade seja suficiente para vender. 
Senão, o programa deve retornar "Quantidade indisponivel".
Use a struct abaixo para guardar as informações na tabela hash:
struct dado
{
    int codigo;
    float preco;
    int quantidade;
    int status;
};
Faça então um programa que leia o tamanho desejado M para a tabela hash e a quantidade de operações O a serem realizadas. 
Insira e atualize os dados dos produtos nesta.
Depois, o programa deve ler o código do produto a ser comprado e a quantidade a ser comprada, e retornar o preço total a ser pago.
Use o código como chave para inserir os elementos na tabela.

Entrada
A entrada consiste de várias linhas:
- a primeira linha irá conter o tamanho M da tabela (um número inteiro).
- a segunda linha irá conter um número inteiro O de operações a serem realizadas.
- as O linhas a seguir irão conter os dados de cada operação. Se o primeiro dígito for o caractere I (Inserir), serão informados mais três números: um inteiro correspondente ao código do produto, um número real, correspondente ao seu preço unitário, e um inteiro, correspondente a quantidade inicial em estoque. Se o primeiro dígito for o caractere A (Atualizar), serão informados mais dois números inteiros: o código do produto e a quantidade a somar no estoque (podendo ser uma quantidade negativa). 
- a última linha contém dois inteiros,  que correspondem ao código do produto e a quantidade a ser comprada.
Saída
Na saída, o programa deve mostrar o preço total a ser pago, com 2 casas decimais.

Exemplo de entrada	        Exemplo de saída
13
10
I 1 10.00 10
I 2 15.00 20
I 3 17.00 10
A 1 -5
I 4 8.50 15
I 5 19.50 10
A 2 -10
I 6 18.50 15
A 1 -5
A 2 -5
2 2	                        R$ 30.00




13
10
I 1 10.00 10
I 2 15.00 20
I 3 17.00 10
A 1 -5
I 4 8.50 15
I 5 19.50 10
A 2 -10
I 6 18.50 15
A 1 -5
A 2 -9
2 2	                        Quantidade indisponivel
=====================================================================================================================================*/