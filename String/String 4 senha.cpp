#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char senha[20];
    while(strcmp(senha, "Abre-te sesamo!")!= 0)
    {
		cout<< "senha errada"<< endl;
		cin.getline(senha,20);
	}	
	cout <<"Pode entrar" << endl;

	return 0;
}
