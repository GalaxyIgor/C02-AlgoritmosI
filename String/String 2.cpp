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
	
	strcpy(nome_completo,nome);
	strcat(nome_completo," ");
	strcat(nome_completo,sobrenome);
	
	cout << "Oi " << nome_completo << ", tudo bem ?" << endl;

	return 0;
}
