#include <iostream>//biblioteca padrão
#include <iomanip>//biblioteca para corrigir casas decimais
using namespace std;
struct info //quardar Dados
{
    char Aluno;
    float Nota1;
    float Nota2;
    int Matricula;
};

int main()
{
    info Aluno;//armazena os dados dos alunos

    cout << fixed << setprecision(2);//corrigindo as casas decimais

    //lendo dados do Aluno
    cin >> Aluno.Matricula;
    cin >> Aluno.Nota1;
    cin >> Aluno.Nota2;
    



    //mostrando dados do Aluno
    cout << "Matricula do aluno: " << Aluno.Matricula << endl;
    cout << "Nota da primeira prova: " << Aluno.Nota1 << endl;
    cout << "Nota da segunda prova: " << Aluno.Nota2 << endl;
    
    return 0;//sucesso
}