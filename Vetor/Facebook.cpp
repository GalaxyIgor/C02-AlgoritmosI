#include <iostream> //biblioteca

using namespace std;

int main()//funcao
{
    int Repeticoes;//declaracao do numero de quantidade de repeticoes 

    cin >> Repeticoes;//entrada do numero de quantidade de repeticoes 

    long int visualizacoes[Repeticoes];//declarcao do numero de visualizacoes de um video, long para aumentar os bits

    int totalMaior = 0;//declaracao do total maior,determinar que o valor do mesmo seja 0
    int totalMenor = 0;//declaracao do total menor,determinar que o valor do mesmo seja 0

    for (int i = 0; i < Repeticoes; i++)//repeticao correspondente ao numero de repeticoes
    {
        cin >> visualizacoes[i];//entrada de visualizacoes
    }


    for (int i = 0; i < Repeticoes; i++)//repeticao correspondente ao numero de repeticoes
    {
        if (visualizacoes[i] >= 10000000)//se as visualizacoes  forem maior ou igual
        {
            totalMaior++;//sera adicionado mais +1 no total maior
        }
        else//caso não 
        {
            totalMenor++;//sera adicionado mais +1 no total menor
        }
    }

    cout << totalMaior << " video(s) com mais de 10M views" << endl;//mostrar total video(s) com mais de 10M views
    cout << totalMenor << " video(s) com menos de 10M views" << endl;// mostrar vvideo(s) com menos de 10M views

    return 0;//sucesso
}
