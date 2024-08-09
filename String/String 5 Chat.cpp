#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char nome[20];
	char sobrenome [200];
	char nome_completo[220];
	
	cin.getline(nome, 20);
	cin.getline(sobrenome, 200);
	
	strcpy(nome_completo,nome);//para colar um nome
	strcat(nome_completo," ");//para colar um espa�o entre os nomes
	strcat(nome_completo,sobrenome);//para colar o sobrenome
	
	cout << "Oi " << nome_completo << ", tudo bem ?" << endl;

	return 0;
}
