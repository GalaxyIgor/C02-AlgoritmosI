#include <iostream> //biblioteca padrão
#include <iomanip> //biblioteca para set precisio,
using namespace std;//abreviação
int main()//função principal
{
    int repeticoes;//declaração da quantidade de notas
    long int notas[1000];//declaração do numero de repeticoes 
    int soma;//declaração do total da soma de todas as notas dos alunos
    double media;//declaração da media das notas dos alunos
    int acima;//declaração do numero de alunos acima da media
    int abaixo;//declaração do numero de alunos abaixo da media

    cin >> repeticoes; //entrada da quantidade de notas
    for(int i = 0; i<repeticoes; i++)//lopp para entrada
    {
        cin >> notas[i];// entrada do valor de cada nota
    }    
    soma=0;// soma vale 0
    for(int i = 0;i <repeticoes; i++)//loop para fazer a soma
    {
        soma = soma + notas[i]; //ou soma+=notas[i],calculo de soma
    }
    media = (float)soma/repeticoes;// calculo de media

    for(int i = 0;i < repeticoes;i++)//loop para determinar qual nota é abaixo ou acima da media
    {
        if (notas[i]>media) // se uma nota for maior que a media
        {
            acima++;//tera de adicionar 1 unidade em acima da media
        }
        else// caso não 
        {
            abaixo++;//tera de adicionar 1 unidade em abaixo da media
        }
    }
    
    cout << fixed << setprecision(2) << "Media da turma: " << media << endl;//mostra na tela "Media da turma:" e determina o numero de casas decimas
    cout << "Alunos com nota acima da media: " << acima<< endl;// mostra na tela "Alunos com nota acima da media: "
    cout << "Alunos com nota abaixo da media: " << abaixo<<endl;// mostra na tela "Alunos com nota abaixo da media: "
    
}