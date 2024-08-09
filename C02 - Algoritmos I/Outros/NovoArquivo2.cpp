#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char nota;
	cin>> nota;
	switch (toupper(nota))
	{
	case '5':
		cout << "Excelente!\n";
		break;
	case '4':
		cout << "Bom.\n";
		break;
	case '3':
		cout << "Regular.\n";
		break;
	case '2':
		cout << "Ruim.\n";
		break;
	case '1':
		cout << "Pessimo/Horrivel.\n";
		break;
	default:
		cout << "Estude mais.\n"; 
	}
}