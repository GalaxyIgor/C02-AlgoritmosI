#include <iostream>
#include <iomanip>

using namespace std;

//Armazenamento
struct info {
    char Aluno;
    float Nota1;
    float Nota2;
    int Matricula;
};

int main() {

    //declara as variaveis de media,multiplicação e soma
    float Media = 0;
    float Multiplicacao1, Multiplicacao2, Soma;
    
    //Armazena as informações de cada aluno
    info Aluno;

    //corrigi as casas decimais
    cout << fixed << setprecision(2);

    // Lendo dados do Aluno
    cin >> Aluno.Matricula;
    cin >> Aluno.Nota1;
    cin >> Aluno.Nota2;
    
    //Calculo de Media
    Multiplicacao1 = Aluno.Nota1 * 2;
    Multiplicacao2 = Aluno.Nota2 * 3;
    Soma = Multiplicacao1 + Multiplicacao2;
    Media = Soma / 5;

    // Mostrando dados do Aluno
    cout << "Matricula do aluno: " << Aluno.Matricula << endl;
    cout << "Nota da primeira prova: " << Aluno.Nota1 << endl;
    cout << "Nota da segunda prova: " << Aluno.Nota2 << endl;
    cout << "Media: " << Media << endl;
    
    return 0;
}
