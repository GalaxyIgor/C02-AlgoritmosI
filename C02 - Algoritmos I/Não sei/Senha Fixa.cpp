#include <iostream> //biblioteca
using namespace std;
int main () //funcao
{
    int numero; //declaracao da variavel numero= senha a ser inserido
    numero=0; //numero=0 é o valor inicial
    while (numero !=2002) //numero até ou igual 2002
    {
        cin>> numero; //inserir senha
        if (numero==2002) // se o numero inserido for igual a 2002
        {
            cout<< "Acesso Permitido"<<endl; // sera gerado Acesso Permitido
        }
        else //caso nao seja
        {
            cout<< "Senha Invalida"<<endl; // sera gerado Senha Invalida
        }
    }
    return 0; //fim
}