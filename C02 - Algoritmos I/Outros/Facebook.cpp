#include <iostream>
using namespace std; 
int main ()
{
	int user;
	int contatos[1000];
	int maiscontatos;
	int menoscontatos;
	cin >> user;
	for(int i=0; i<user; i++)
	{
		cin >> contatos[i];
	}
	 for(int i = 0;i < user;i++)
    {
        if(contatos[i] > maiscontatos)
        {
            maiscontatos = contatos[i];
           
        }
        if(contatos[i] < menoscontatos)
        {
            menoscontatos = contatos[i];
           
        }
    }
    cout << "Menor numero de contatos: " << menoscontatos << endl;
    cout << "Maior numero de contatos: " << maiscontatos << endl;

	return 0;
}