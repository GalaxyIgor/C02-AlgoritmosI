#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char nome[20];
	int t;
		
	strcpy(nome, "Marco");
	/*
	copia Marco para o nome = 	
	nome[0] = 'M';
	nome[1] = 'a';
	nome[2] = 'r';
	nome[3] = 'c';
	nome[4] = 'o';
	nome[5] = '\0';
	*/
	
	cout << nome << endl;
	
	t = strlen(nome);//retorna o comprimento de nome
	cout << "t = " << t << endl;
	
	return 0;
}