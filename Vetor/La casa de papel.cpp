#include <iostream> //biblioteca padrão
using namespace std;//abreviação
int main()//função principal
{
    int reacoes;//declaração da quantidade de Likes
    long int Likes[1000];//declaração do numero de reacoes 
    int total;
    cin >> reacoes; //entrada da quantidade de Likes
    total=0;//total tem o valor de 0
    for(int i = 0; i reacoes; i++)//loop para entrada
    {
        cin >> Likes[i];//entrada do vetor likes

        if(Likes[i]>0)//se likes for maior que 0
        {
            total++;//adicionar +1 no total
        }
        if(Likes[i]<0)//se likes for menor que 0
        {
            total--;//adicionar -1 no total
        }
    }
    if(total>0) // se o total for menor que 0
    {
        cout<<"A maioria gostou"<< endl;// mostrar "A maioria gostou"
    }
    else if(total<0) // se o total dor menor que 0
    {
        cout<<"A maioria nao gostou"<< endl;// mostrar "A maioria nao gostou"
    }
    else if(total==0)//se o total for igual a 0
    {
        cout<<"Deu empate"<< endl;// mostrar "Deu empate"
    }
    return 0;//sucesso
    
}