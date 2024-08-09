
#include <iostream> //biblioteca

using namespace std;

int main(){
    int NR, N; //NR= numero de repetições, N= numero a ser inserido 

    cin >> NR; // inserindo as repetições

    for(int i = 0; i < NR; i++) // calculo de repetições
	{
            cin >> N; // numero a ser inserido repetido por NR vezes
            if(N == 0) // calculo para confirmar que se N for 0 
			{ 
                 cout << "NULL\n"; // vai gerar NULL (nulo) em texto
            }
            else{
            if(N%2 == 0) // se o numero for par 
			cout << "EVEN"; // ele vai gerar par
            else cout << "ODD"; // caso n seja par ele vai gerar impar
            
            if(N<0) cout << " NEGATIVE\n"; // caso 0 seja menor do que 0, vai gerar negativo
            else cout << " POSITIVE\n"; // caso 0 não seja menor que 0 e sim maior que 0, vai gerar positivo
            } 
	}
    
    return 0;
}