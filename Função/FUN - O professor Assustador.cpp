#include <iostream>
#include <iomanip>
using namespace std;
float media(int notas[], int nAlunos)
{
	float m;//media dos elmentos de v
	int i;//contador
	//media dos elemntos
	m=0;
	for(i=0;i<nAlunos;i++)	
		m += notas[i];
		m /= nAlunos;
    return m;
}
int main()
{
	int notas[10];//armazena os dados
	int nAlunos=0;//numero de elemntos inceridos
	int i;//contador
	float m;//media elementos
	cin>>nAlunos;//#elementos
	//lendo dados e inserindo no vetor
	for(i=0;i<nAlunos;i++)
		cin>>notas[i];
	//media dos elemntos
	m = media(notas,nAlunos);
	//mostrando media 
	cout<< fixed << setprecision(2)<<"Media da turma = "<< m <<endl;
	return 0;
}