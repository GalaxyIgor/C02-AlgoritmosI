#include <iostream>
#include <iomanip>
using namespace std;
int nAcima(int notas[], int nAlunos, float media)
{
	float acima;//media dos elmentos de acima
	int i;//contador

	return acima;
}
int nAbaixo(int notas[], int nAlunos, float media)
{
	float abaixo;//media dos elmentos de abaixo
	int i;//contador

    return abaixo;
}
int main()
{
	int notas[100];//armazena os dados
	int nAlunos=0;//numero de elemntos inceridos
	int i;//contador
	float media;//media elementos
	cin>>nAlunos;//#elementos
	//lendo dados e inserindo no vetor
	for(i=0;i<nAlunos;i++)
		cin>>notas[i];
	//media dos elemntos
	media=0;
	for(i=0;i<nAlunos;i++)	
	{
		media += notas[i];
		media /= nAlunos;
	}
	ndeacima=0
	ndeabaixo=0
    ndeacima=nAcima(int notas[], int nAlunos, float media)
	ndeabaixo=nAbaixo(int notas[], int nAlunos, float media)
    //retorna os valores
	//mostrando media 
	cout<< fixed << setprecision(2)<<"Media da turma = "<< m <<endl;
	cout<< "Alunos com nota abaixo da media: "<<ndeacima<<endl;
    cout<< "Alunos com nota acima da media: "<<ndeabaixo<<endl;
	return 0;
}