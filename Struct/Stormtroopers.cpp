//Biblioteca padrão,Biblioteca para correção de casas decimais
#include <iostream>
#include <iomanip>

using namespace std;

//Armazenamento
struct info {
    char Soldado[100];
    float IM;
    float FA;
    int Numeracao;
    float GA;
    /*
    - Soldado[i]
    - Índice de Maldade (IM): mede o quão malvada é esta unidade
    - Força de Abate (FA): proporcional ao número de inimigos abatidos
    - Numeração do soldado
    - Grau de aptidão (GA) com valor 0
    */
};

//Função Principal
int main() {
    //Armazena as informações de cada Soldado
    info Soldado[100];
    
    //corrigi as casas decimais
    cout << fixed << setprecision(2);
    
    
    int i = 0;
    float GA_Melhor = 0;
    int Melhor_Soldado = 0;
    
    //Loop Infinito
    while (true) {
        //Armazena as informações de cada Soldado
        cin >> Soldado[i].Numeracao;
        
        //se o soldado for 0 vai parar o loop
        if (Soldado[i].Numeracao == 0) {
            break;
        }
        
        //endrada de IM e FA
        cin >> Soldado[i].IM >> Soldado[i].FA;
        
        //Calculo de Ga(media) 
        Soldado[i].GA = (Soldado[i].IM + Soldado[i].FA) / 2;
        
        //se o soldado for maior que ga melhor iguala ga melhor, iguala Ga com GA melhor
        //E iguala Melhor soldado com a numeração do mesmo
        if (Soldado[i].GA > GA_Melhor) {
            GA_Melhor = Soldado[i].GA;
            Melhor_Soldado = Soldado[i].Numeracao;
        }

        i++;//adiciona 1 ao i
    }
    
    //mostra na tela "Stormtrooper escolhido: " << Melhor_Soldado e "GA = " << GA_Melhor
    cout << "Stormtrooper escolhido: " << Melhor_Soldado << endl;
    cout << "GA = " << GA_Melhor << endl;

    return 0;//sucesso
}
