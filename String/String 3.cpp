#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char palavra1[20];
	char palavra2[20];
	int r;

    strcpy(palavra1, "computador");
    strcpy(palavra2, "notebook");
	
	r= strcmp (palavra1,palavra2);

	if(r<0)
	{
		cout<<"ordem alfabetica"<<endl;
	}
	else if (r>0)
	{
		cout << "ordem não alfabetica"<< endl;
	}
	else cout << "Iguais" << endl;

	return 0;
}
