#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char nome[20];
    int nota;

    cin>> nota;
    cin.ignore();
    cin.getline(nome,20);

    cout << "ola" << nome << endl;
	cout <<"Sua nota foi:" << nota <<endl;

	return 0;
}
