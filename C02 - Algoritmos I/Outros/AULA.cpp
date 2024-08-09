/*
//////////////////////////Modelo////////////////////////////////////////////////
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main()
{

	return 0;
}

*/
/*

///////////////////////////////HELLO WORLD!/////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
	cout << "Hello World!" << endl;

	return 0;,
}

//Comentario Geral: O codigo mostra Hello World na tela
//Ferramentas:<iostream>,using namespace std,cout,endl

*/
/*

///////////////////////////////HELLO WORLD!/////////////////////////////////////
#include <iostream>
int main()
{
	std::cout << "Hello World!" << std::endl;

	return 0;
}

//Comentario Geral: O codigo mostra Hello World na tela
//Ferramentas:<iostream>,std::,cout,endl

*/
/*

///////////////////////////////Soma/////////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
	int X,Y,Soma;

	cin >> X >> Y;

	Soma = X + Y;

	cout << "Soma: " << Soma << endl;

	return 0;
}

//Comentario Geral: O codigo mostra a soma da variavel X com Y
//Ferramentas: X + Y

*/
/*

/////////////////////////////Subtracao//////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
	int X,Y,Subtracao;


	Subtracao = X - Y;

	cout << "Subtracao: " << Subtracao << endl;

	return 0;
}

//Comentario Geral: O codigo mostra a Subtracao da variavel X com Y
//Ferramentas: X - Y

*/
/*

//////////////////////////Multiplicacao/////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
	int X,Y,Multiplicacao;

	cin >> X >> Y;

	Multiplicacao = X * Y;

	cout << "Multiplicacao: " << Multiplicacao << endl;

	return 0;
}

//Comentario Geral: O codigo mostra a Multiplicacao da variavel X com Y
//Ferramentas: X * Y

*/
/*

///////////////////////////Divisao//////////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
	int X,Y,Divisao;

	cin >> X >> Y;

	Divisao = X / Y;

	cout << "Divisao: " << Divisao << endl;

	return 0;
}

//Comentario Geral: O codigo mostra a Divisao da variavel X com Y
//Ferramentas: X / Y

*/
/*

///////////////////////////////Todas Operacoes//////////////////////////////////
#include <iostream>
using namespace std;
int main ()
{
	double X,Y,Soma,Subtracao,Multiplicacao,Divisao;

	X=2;
	Y=3;

	Soma = X + Y;
	Subtracao = X - Y;
	Multiplicacao = X * Y;
	Divisao = (double) X / (double)Y;

	cout << "Soma = " << Soma << endl;
	cout << "Subtracao = " << Subtracao << endl;
	cout << "Multiplicacao = " << Multiplicacao << endl;
	cout << "Divisao = " << Divisao << endl;

	return 0;
}

/*Comentario Geral: O codigo mostra a Soma,Subtracao,Multiplicacao e Divisao da
variavel X com Y
//Ferramentas:Soma = X + Y;
   	          Subtracao = X - Y;
           	  Multiplicacao = X * Y;
	          Divisao = (double) X / (double)Y;

*/
/*

///////////////////////////////Media Tradicional////////////////////////////////
#include <iostream>
using namespace std;
int main ()
{
	double X,Y,Media;

	X=2;
	Y=3;

	Media = (X + Y)/2;


	cout << "Media = " << Media << endl;

	return 0;
}

//Comentario Geral: O codigo mostra a Media de X com Y
//Ferramentas:(X + Y)/2;

*/
/*

///////////////////////////////Media Geometrica/////////////////////////////////
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double X,Y,Media;

	X=2;
	Y=3;

	Media = sqrt(X * Y);


	cout << "Media = " << Media << endl;

	return 0;
}

//Comentario Geral: O codigo mostra a Media Geometrica de X com Y
//Ferramentas:MediaG = sqrt(X * Y)


/*

///////////////////////////////Cmath////////////////////////////////////////////
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double X,Y,Raiz;

	X=2;
	Y=3;

	Raiz = sqrt(X);
	Potencia = pow(X,Y);
    SenoX = sin(X);
	ExponencialX = exp(X)
	LogX = ln(X);
	Log10X = log10(X);

	cout << "Raiz = " << Media << endl;
	cout << "Potencia = " << Media << endl;
	cout << "Seno = " << Media << endl;
	cout << "Exponencial = " << Media << endl;
	cout << "Log = " << Media << endl;
	cout << "Log10 = " << Media << endl;

	return 0;
}

//Comentario Geral: O codigo mostra o que a biblioteca cmath pode fornecer
//Ferramentas:	Raiz = sqrt(X);
          	    Potencia = pow(X,Y);
                SenoX = sin(X);
	            ExponencialX = exp(X)
	            LogX = ln(X);
	            Log10X = log10(X);


*/
/*

////////////////////////////////Seno////////////////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double X,Seno;
	cin >> X;
	Seno = sin(X);
	cout << "Seno = " << Seno << endl;

	return 0;
}

//Comentario Geral: O codigo mostra o seno de x
//Ferramentas: sin(X)


*/
/*


////////////////////////////////Iomanip/////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
	double X,Seno;
	cin >> X;
	Seno = sin(X);
	cout << fixed << setprecision (2) << "Seno = " << Seno << endl;

	return 0;
}

//Comentario Geral: O  codigo mostra o seno de x
//Ferramentas: fixed << setprecision (2) (mostra 2 casas decimais),sin(X)

*/
/*

/////////////////////////////Area Do Circulo////////////////////////////////////
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    //valor da saída, valor do pi e valor de entrada respectivamente
    double valor_da_area, pi, raio;

    //entrada do valor do raio
    cin >> raio;
    //valor do pi
    pi=3.14159;
    //calculo do valor da area do circulo
    valor_da_area = pi * pow(raio,2);
    //mostra na tela "AREA = valor_da_area" com 3 casas decimais
	cout << fixed << setprecision (3) << "AREA = " << valor_da_area << endl;
	//Sucesso
	return 0;
}

//Comentario Geral: O  codigo mostra a area do circulo
//Ferramentas: fixed << setprecision (3) (mostra 3 casas decimais),pi=3.14159,
//pow(raio,2)

*/
/*

//////////////////////Calculo de salario////////////////////////////////////////
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    //o número de um funcionário,horas trabalhadas respectivamente
	int NUMBER,quantidadeH;

	//valor por hora e Salario = Valor_p_H * quantidadeH
	double Valor_p_H, SALARY;

	//entrada
	cin>> NUMBER >> quantidadeH >> Valor_p_H;

	//calculo do salario
	SALARY = Valor_p_H * quantidadeH;

	//saida mostra "NUMBER = Number"
	cout<< "NUMBER = " << NUMBER << endl;

	//saida mostra SALARY = US$ SALARY"
	cout<<fixed<< setprecision(2)<<"SALARY = US$ "<< SALARY << endl;
	return 0;
}

//Comentario Geral: O  codigo mostra o calculo de salario
//Ferramentas: fixed << setprecision (2) (mostra 2 casas decimais)

*/
/*

////////////////////////////////Area////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    //saida TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO
    double TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    //primeiro valor,segundo valor, terceiro valor respectivamente
    double a,b,c;

    //entrada dos valores
    cin >> a >> b >> c;

    //calculo a) a área do triângulo retângulo que tem A por base e C por altura.
    TRIANGULO = (a * c)/2;
    //calculo b) a área do círculo de raio C. (pi = 3.14159)
    CIRCULO = 3.14159 * pow(c,2);
    //calculo c) a área do trapézio que tem A e B por bases e C por altura.
    TRAPEZIO = ((a + b) * c)/2;
    //calculo d) a área do quadrado que tem lado B.
    QUADRADO = b * b;
    //calculo e) a área do retângulo que tem lados A e B.
    RETANGULO = a * b;

    //define 3 casas decimais
    cout<< fixed << setprecision (3);
    //a) a área do triângulo retângulo que tem A por base e C por altura.
    cout<< "TRIANGULO: " << TRIANGULO <<endl;
    //b) a área do círculo de raio C. (pi = 3.14159)
    cout<< "CIRCULO: " << CIRCULO <<endl;
    //c) a área do trapézio que tem A e B por bases e C por altura.
    cout<< "TRAPEZIO: " << TRAPEZIO <<endl;
    //d) a área do quadrado que tem lado B.
    cout<< "QUADRADO: " << QUADRADO <<endl;
    //e) a área do retângulo que tem lados A e B.
    cout<< "RETANGULO: " << RETANGULO <<endl;

	return 0;
}

//Comentario Geral: O  codigo mostra a area de diversas figuras
//Ferramentas:TRIANGULO = (a * c)/2;
              CIRCULO = 3.14159 * pow(c,2);
              TRAPEZIO = ((a + b) * c)/2;
              QUADRADO = b * b;
              RETANGULO = a * b;

*/
/*

/////////////////////////////////Troco//////////////////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //VAlor a ser levado, preco, troco
	double VAlorlevado,preco,TROCO;

	//entrada do Valor levado e preco
	cin >> VAlorlevado >> preco;

	//calculo para descobrir o troco
	TROCO = VAlorlevado - preco;

	//mostra em 2 casas decimais TROCO = troco"
	cout << fixed << setprecision (2) << "TROCO = " << TROCO << endl;

	return 0;
}

*/
/*

//Comentario Geral: O  codigo mostra o troco a ser recebido
//Ferramentas: fixed << setprecision (2) (mostra 2 casas decimais),
//TROCO = VAlorlevado - preco;

/////////////////////////////juros compostos////////////////////////////////////

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    //Montante, capital inicial, taxa de juros, tempo respectivamente
	double M,C,i,t;

	//entrada do capital inicial, taxa de juros, tempo respectivamente
	cin >> C >> i >> t;

	//calculo para descobrir o Montante
    M = C * pow(1 + (i / 100), t);

	//mostra em 2 casas decimais "LUCRO = M"
	cout << fixed << setprecision (2) << "LUCRO = " << M << endl;

	return 0;
}

//Comentario Geral: O  codigo mostra o calculo de juros compostos
//Ferramentas: fixed << setprecision (2) (mostra 2 casas decimais),
//M = C * pow(1 + (i / 100), t);


*/
/*

////////////////////////////////Achar Lucro/////////////////////////////////////
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    //Montante, capital inicial, taxa de juros, tempo respectivamente
	double LUCRO,M,C,i,t;

	//entrada do capital inicial, taxa de juros, tempo respectivamente
	cin >> C >> i >> t;

	//calculo para descobrir o Montante
    M = C * pow(1 + (i / 100), t);
    //calculo para achar o lucro
	LUCRO = M - C;

	//mostra em 2 casas decimais "LUCRO = M"
	cout << fixed << setprecision (2) << "LUCRO = " << LUCRO << endl;

	return 0;
}

//Comentario Geral: O  codigo mostra o lucro queobteve apos um investimento
//Ferramentas: fixed << setprecision (2) (mostra 2 casas decimais),
//calculo para descobrir o Montante M = C * pow(1 + (i / 100), t);
//calculo para achar o lucro LUCRO = M - C;

*/
/*

/////////////////////////Operadores Relacionais/////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

    == (igual)
    != (Diferente)
    <  (Menor)
    >  (Maior)
    <= (Menor ou igual)
    >= (Maior ou igual)

	return 0;
}

//Comentario Geral: O  codigo mostra os operadores relacionais
//Ferramentas: == (igual)
               != (Diferente)
               <  (Menor)
               >  (Maior)
               <= (Menor ou igual)
               >= (Maior ou igual)

*/
/*

/////////////////////////Operadores Logicos/////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

    ! (Nao)
    &&  (e)
    ||  (ou)

	return 0;
}

//Comentario Geral: O  codigo mostra o que a biblioteca iomanip pode fornecer
//Ferramentas: fixed << setprecision (2) (mostra 2 casas decimais)

*/
/*

/////////////////// Ordem //////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{

    primeiro ! (Nao)
    segundo  &&  (e)
    terceiro ||  (ou)

    primeiro aritmeticos
    segundo  relacionais
    terceiro logicos

	return 0;
}

//Comentario Geral: O  codigo mostra a ordem de preferencia
//Ferramentas: primeiro ! (Nao)
               segundo  &&  (e)
               terceiro ||  (ou)

               primeiro aritmeticos
               segundo  relacionais
               terceiro logicos

*/
/*

//////////////////////////Porcentagem///////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    5/3=1 //5 dividido por 3 é igual a 1
	5%3=2 //5 dividido por 3 tem resto igual a 2
	return 0;
}

//Comentario Geral: O  codigo mostra a diferenca entre resto e divisão
//Ferramentas: % (resto da divisão)

*/
/*

//////////////////////////par ou impar//////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
	int n;

	cin >> n;

	if(n%2==0)
		cout << "par" << endl;
	else
		cout << "impar" << endl;

	return 0;
}

//Comentario Geral: O  codigo mostra  se o numero é par ou impar
//Ferramentas: if(n%2==0)

*/
/*

//////////////////////////Clube dos Vs//////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
	int idade;
	char letra;

	cin>> idade;
	cin >> letra;

	if( idade < 10 && letra == 'v' || letra == 'V' )
		cout << "Pode Entrar" << endl;
	else
		cout << "Sai fora!" << endl;

	return 0;
}

*/
/*


//////////////////////////Clube dos Vs//////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
	int idade;
	char letra;

	cin >> idade;
	cin >> letra;

	if( idade < 10 && letra == toupper ('v' ))
		cout << "Pode Entrar" << endl;
	else
		cout << "Sai fora!" << endl;

	return 0;
}

*/
/*

//////////////////////////Nota////////////////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
	int nota;

	cin >> nota;

	if (nota >= 60)
		cout << "Psssou" << endl;
	else
	{
		cout << "Nao passou" << endl;
		cout << "Estude mais!" << endl;
	}
	return 0;
}

*/
/*

////////Teste de seleção 1 (URI 1035)Laboratório Virtual de Programação/////////

#include <iostream>
using namespace std;
int main()
{
    //declaracao de variaveis
    int A,B,C,D,SomaAB,SomaCD;
    
    //Entrada de Valores
    cin >> A >> B >> C >> D;
    
    //calculos
    SomaAB = A + B; //A+B
    SomaCD = C + D; //C+D
    
    //se B for maior que C e D for maior que A e se a soma de C 
    //E D for maior que a soma de A e B e se C e D forem valores positivos e se A for par
    if(B > C && D> A && SomaAB > SomaCD && C > 0 && D> 0 && A%2 )
        cout << "Valores aceitos";//Mostra na Tela "Valores aceitos"
        
    //Se não    
    else
        cout << "Valores não aceitos";//Mostra na Tela "Valores não aceitos"
}

*/
/*

/////////////////////////DDD (URI 1050) if//////////////////////////////////////

#include <iostream>
using namespace std;
int main ()
{
    int DDD;
    cin >> DDD;
    if (DDD == 61)
        cout << "Brasilia" << endl;
    else if (DDD == 71)
        cout << "Salvador" << endl;
    else if (DDD == 11)
        cout << "Sao Paulo" << endl;
    else if (DDD == 21)
        cout << "Rio de Janeiro" << endl;
    else if (DDD == 32)
        cout << "Juis de Fora" << endl;
    else if (DDD == 19)
        cout << "Campinas" << endl;
    else if (DDD == 27)
        cout << "Vitoria" << endl;
    else if (DDD == 31)
        cout << "Belo Horizonte" << endl;
    else 
        cout << "DDD nao cadastrado" <<endl;
    return 0;
}

*/
/*
//////////////////////DDD (URI 1050) switch/////////////////////////////////////

#include <iostream>
using namespace std;
int main ()
{
    int DDD;
    cin >> DDD;
    switch (DDD)
    {
        case 61:
            cout << "Brasilia\n";
            break;
        case 71:
            cout << "Salvador\n";
            break;
        case 11:
            cout << "Sao Paulo\n";
            break;
        case 21:
            cout << "Rio de Janeiro\n";
            break;
        case 32:
            cout << "Juis de Fora\n";
            break;
        case 19:
            cout << "Campinas\n";
            break;
        case 27:
            cout << "Vitoria\n";
            break;
        case 31:
            cout << "Belo Horizonte\n";
            break;
        default: 
            cout << "DDD nao cadastrad\n";
            break;
    }
    return 0;
}

////////////Intervalo (URI 1037)Laboratório Virtual de Programação//////////////

#include <iostream>
using namespace std;
int main ()
{
    int Numero;
    
    cin >> Numero;
    
    if (0>Numero && Numero>25)
        cout <<  "Intervalo [0,25]" << endl;
        
    else if (25>Numero && Numero>50)
        cout <<  "Intervalo (25,50]" << endl;
        
    else if (50>Numero && Numero>75)
        cout <<  "Intervalo (50,75]" << endl;
        
    else if (75>Numero && Numero>100)
        cout << "Intervalo (75,100]";
        
    else
        cout <<  "Fora de intervalo" << endl;
    
    return 0;
}

*/
/*

////////////////////////////Lanche (URI 1038) if/////////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //variaveis
    double Total,Codigo,Quantidade;
    
    //entrada do codigo do produto e a quantidade
    cin >> Codigo >> Quantidade;
    
    //verifica o codigo e multiplica o valor do produto pela quantidade
    if (Codigo == 1)
        Total = 4 * Quantidade;
    else if (Codigo == 2)
        Total = 4.5 * Quantidade;
    else if (Codigo == 3)
        Total = 5 * Quantidade;
    else if (Codigo == 4)
        Total = 2 * Quantidade;
    else if (Codigo == 5)
        Total = 1.5 * Quantidade;
    
    //saida
    cout << fixed << setprecision (2) << "Total: R$ " << Total << endl;
    
	return 0;
}
//////////////////////////Lanche (URI 1038) switch//////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //variaveis
    int Codigo;
    double Total,Quantidade;
    
    //entrada do codigo do produto e a quantidade
    cin >> Codigo >> Quantidade;
    
    //verifica o codigo e multiplica o valor do produto pela quantidade
    switch (Codigo)
    {
        case 1:
            Total = 4 * Quantidade;
            break;
        case 2:
            Total = 4.5 * Quantidade;
            break;
        case 3:
            Total = 5 * Quantidade;
            break;
        case 4:
            Total = 2 * Quantidade;
            break;
        case 5:
            Total = 1.5 * Quantidade;
            break;
    }
    //saida
    cout << fixed << setprecision (2) << "Total: R$ " << Total << endl;
    
	return 0;
}


*/
/*

////////////////////Coordenadas de um ponto (URI 1041)//////////////////////////
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    //Variaveis
    int EixoX,EixoY;
    
    //Entrada dos valores dos pontos dos eixos X e Y
    cin >> EixoX >> EixoY;
    
    //Verifica em qual quadrante pertence
    if (EixoX>0 && EixoY>0)
        cout << "Q1" <<endl;
    else if (EixoX<0 && EixoY<0)
        cout << "Q3" <<endl;
    else if (EixoX>0 && EixoY<0)
        cout << "Q4" <<endl;
    else if (EixoX<0 && EixoY>0)
        cout << "Q2" <<endl;
    else if (EixoX==0 && EixoY==0)
        cout << "Origem" <<endl;
 
    
	return 0;
}


*/
/*

////////////////////Ordenação simples (URI 1042)////////////////////////////////
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int X,Y,Z;
    
    cin>> X >> Y >> Z;
    
    if (X > Y && Y > Z)
        cout << Z << endl << Y << endl  << X<< endl << endl ;
        
    else if (X > Z && Z > Y)
        cout << Y<< endl  << Z << endl << X<< endl << endl ;
        
    else if (Z > Y && Y > X)
        cout << X<< endl  << Y<< endl  << Z<< endl << endl ;
        
    else if (Z > X && X > Y)
        cout << Y<< endl  << X<< endl  << Z<< endl << endl ;
        
    else if (Y > X && X > Z)
        cout << Z<< endl  << X<< endl  << Y<< endl << endl ;
        
    else if (Y > Z && Z > X)
        cout << X<< endl  << Z<< endl  << Y<< endl << endl ;
        
    cout << X<< endl  << Y<< endl  << Z << endl;
   

	return 0;
}

*/
/*

///////////////////////////////Taxas (URI 1051)/////////////////////////////////

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    double Renda;
    if(Renda>-1 && Renda<2000.01)
        cout << "Isento" << endl;
    else if(Renda>2000 && Renda<3000.01)
        cout << "R$" << Renda * 0.08 << endl;
    else if(Renda>3000 && Renda<4500.01)
        cout << "R$" << Renda * 0.18 << endl;
    else if(Renda>4500)
        cout << "R$" << Renda * 0.28 << endl;
        
    return 0;
}

*/
/*

//////////////////////////7//Mês (URI 1052) if//////////////////////////////////

#include <iostream>
using namespace std;
int main()
{
    //variaveis
    double Mes;
    
    //entrada do Mes 
    cin >> Mes;
    
    //verifica o Mes e mostra na tela
    if (Mes == 1)
        cout << "January" << endl;
    else if (Mes == 2)
        cout << "February" << endl;
    else if (Mes == 3)
        cout << "March" << endl;
    else if (Mes == 4)
        cout << "April" << endl;
    else if (Mes == 5)
        cout << "May" << endl;
    else if (Mes == 6)
        cout << "June" << endl;
    else if (Mes == 7)
        cout << "July" << endl;
    else if (Mes == 8)
        cout << "August" << endl;
    else if (Mes == 9)
        cout << "September" << endl;
    else if (Mes == 10)
        cout << "October" << endl;
    else if (Mes == 11)
        cout << "November" << endl;
    else if (Mes == 12)
        cout << "December" << endl;
    
	return 0;
}

*/
/*

////////////////////////////Mês (URI 1052) switch///////////////////////////////

#include <iostream>
using namespace std;
int main()
{
    //variaveis
    int Mes;
    
    //entrada do Mes 
    cin >> Mes;
    
    switch (Mes)
    {
        case 1:
            cout << "January\n";
            break;
        case 2:
            cout << "February\n";
            break;
        case 3:
            cout << "March\n";
            break;
        case 4:
            cout << "April\n";
            break;
        case 5:
            cout << "May\n";
            break;
        case 6:
            cout << "June\n";
            break;
        case 7:
            cout << "July\n";
            break;
        case 8:
            cout << "August\n";
            break;
        case 9:
            cout << "September\n";  
            break;
        case 10:
            cout << "October\n";  
            break;
        case 11:
            cout << "November\n";  
            break;
        case 12:
            cout << "December\n";
            break;
    }
	return 0;
}

*/
/*

////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double Valor_A, Valor_B, Valor_C, Valor_Delta,RaizI,RaizII;
    
    cin >> Valor_A >> Valor_B >> Valor_C;
    
    Valor_Delta == pow (Valor_B,2) -4 * Valor_A * Valor_C
	return 0;
}

*/
/*

///////////////////////////IF-Fórmula de Baskara////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double Valor_A, Valor_B, Valor_C, Valor_Delta, RaizI, RaizII;

    cin >> Valor_A >> Valor_B >> Valor_C;

    if (Valor_A == 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        Valor_Delta = pow(Valor_B, 2) - 4 * Valor_A * Valor_C;

        if (Valor_Delta >= 0)
        {
            RaizI = (-Valor_B + sqrt(Valor_Delta)) / (2 * Valor_A);
            RaizII = (-Valor_B - sqrt(Valor_Delta)) / (2 * Valor_A);
            cout << fixed << setprecision(5); 
            cout << "R1 = " << RaizI << endl;
            cout << "R2 = " << RaizII << endl;
        }
        else
        {
            cout << "Impossivel calcular" << endl;
        }
    }

    return 0;
}

*/
/*

/////////////////////////////IF-Dia da semana///////////////////////////////////

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    float d, m, a, n, ds, g, f, delta,frac,intpart;
    cin >> d >> m >> a;
    
    //verifica o valor de m e a
    if (m <= 2) 
    {
        g = a - 1;
        f = m + 13;
    } else 
    {
        g = a;
        f = m + 1;
    }
    
    //verifica o valor do delta
    if (a < 1753 || (a == 1753 && m < 3) || (a == 1753 && m == 3 && d < 14)) 
    {
        delta = 2;
    } else if (a >= 2100) 
    {
        delta = 0;
    } else 
    {
        delta = 1;
    }
    
    //calculo
    n = int(365.25 * g) + int(30.6 * f) - 621049 + d;
    frac=modf(n/7.0,&intpart);
    ds = round(frac * 7) + delta + 1 -2;

    
    //Verifica qual dia mostrar na tela
    if (ds== 0)
        cout << "domingo" << endl;
    else if (ds== 1)
        cout << "segunda-feira" << endl;
    else if (ds== 2)
        cout << "terca-feira" << endl;
    else if (ds== 3)
        cout << "quarta-feira" << endl;
    else if (ds== 4)
        cout << "quinta-feira" << endl;
    else if (ds== 5)
        cout << "sexta-feira" << endl;
    else if (ds== 6)
         cout << "sabado" << endl;


    return 0;
}

*/
/*

///////////////////////////////////switch char//////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	char nota;
	cin >> nota;
	nota = (toupeper)(nota); // Converte para maiuscula
	switch (nota)
	{
		case 'A':
			cout << "Excelente!\n";
			break;
		case 'B':
			cout << "Bom.\n";
			break;
		case 'C':
			cout << "Regular.\n";
			break;
		default:
			cout << "Estude Mais.\n";
	}

	return 0;
}

*/
/*

//////////////////////////////////switch int//////////////////////////////////

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int nota;
	cin >> nota;
	nota = (toupeper)(nota); // Converte para maiuscula
	switch (nota)
	{
		case 10:
			cout << "Excelente!\n";
			break;
		case 20:
			cout << "Bom.\n";
			break;
		case 30:
			cout << "Regular.\n";
			break;
		default:
			cout << "Estude Mais.\n";
	}

	return 0;
}

*/
/*

//////////////////////////String////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    string nome;
    
    getline(cin, nome); //lendo nome
	
	cout << nome << endl; 
    
	return 0;
}

*/
/*

//////////////////////////String////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    string senha,correta;
    
    getline (cin, senha);
    
    cout << endl;
    
    if (senha == "qwerty123")
    	cout << "Senha Correta" << endl;
    else 
    	cout << "Senha Incorreta" << endl;
     
    
	return 0;
}

*/
/*
//////////////////////////String////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    string senha,correta;
    
    correta = "qwerty123";
    
    getline (cin, senha);
    
    cout << endl;
    
    if (senha == correta)
    	cout << "Senha Correta" << endl;
    else 
    	cout << "Senha Incorreta" << endl;
     
    
	return 0;
}
*/
/*
//////////////////////////String Ordem alfabetica/////////////////////////////////

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    string nome,nome2;
    
    getline (cin, nome1);
    getline (cin, nome2);
    
    cout << "Em Ordem Alfabetica"<< endl;
    
    if (nome1 < nome2)
	{
		cout << nome1 << endl;
		cout << nome2 << endl;
	}
	else
	{
		cout << nome2 << endl;
		cout << nome1 << endl;
	}
    
    
     
    
	return 0;
}
*/
/*
//////////////////////////String Idade//////////////////////////////////////////

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int idade;
    string nome;
    
    cin>> idade;
    getline (cin >> ws, nome);
    
    cout << endl;
    
    cout << nome << endl;
    cout << idade << endl;
    
	return 0;
}
*/
/*
//////////////////////////////////Taxas (URI 1051)//////////////////////////////
#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    double salario, imposto;
    cin >> salario;

    imposto = 0.0;

    if (salario <= 2000.00) 
    {
        cout << "Isento" << endl;
    } else {
        if (salario <= 3000.00) 
        {
            imposto = (salario - 2000.00) * 0.08;
        } else if (salario <= 4500.00) 
        {
            imposto = 1000.00 * 0.08 + (salario - 3000.00) * 0.18;
        } else 
        {
            imposto = 1000.00 * 0.08 + 1500.00 * 0.18 + (salario - 4500.00) * 0.28;
        }

        cout << "R$ " << fixed << setprecision(2) << imposto << endl;
    }

    return 0;
}
*/
/*
///////////////////////////IF-Dia da semana/////////////////////////////////////
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    float d, m, a, n, ds, g, f, delta,frac,intpart;
    cin >> d >> m >> a;
    
    //verifica o valor de m e a
    if (m <= 2) 
    {
        g = a - 1;
        f = m + 13;
    } else 
    {
        g = a;
        f = m + 1;
    }
    
    //verifica o valor do delta
    if (a < 1753 || (a == 1753 && m < 3) || (a == 1753 && m == 3 && d < 14)) 
    {
        delta = 2;
    } else if (a >= 2100) 
    {
        delta = 0;
    } else 
    {
        delta = 1;
    }
    
    //calculo
    n = int(365.25 * g) + int(30.6 * f) - 621049 + d;
    frac=modf(n/7.0,&intpart);
    ds = round(frac * 7) + delta + 1 -2;

    
    //Verifica qual dia mostrar na tela
    if (ds== 0)
        cout << "domingo" << endl;
    else if (ds== 1)
        cout << "segunda-feira" << endl;
    else if (ds== 2)
        cout << "terca-feira" << endl;
    else if (ds== 3)
        cout << "quarta-feira" << endl;
    else if (ds== 4)
        cout << "quinta-feira" << endl;
    else if (ds== 5)
        cout << "sexta-feira" << endl;
    else if (ds== 6)
         cout << "sabado" << endl;


    return 0;
}
*/
/*
//////////////////////////IF-Elevador (URI-1124)///////////////////////////////////////
#include <iostream>

using namespace std;

int main() 
{
    int L, C, R1, R2, x, y, R;
    int menorDim, maiorDim;


    while (cin >> L >> C >> R1 >> R2 && (L || C || R1 || R2)) 
    {
        if (L < C) 
        {
            menorDim = L;
            maiorDim = C;
        } else 
        {
            menorDim = C;
            maiorDim = L;
        }

        if (2 * R1 > menorDim || 2 * R2 > menorDim) 
        {
            cout << "N" << endl;
        } else 
        {
            x = maiorDim - R1 - R2;
            y = menorDim - R1 - R2;
            R = R1 + R2;

            if (x * x + y * y < R * R) 
            {
                cout << "N" << endl;
            } else {
                cout << "S" << endl;
            }
        }
    }

    return 0;
}
*/
/*
//////////////////////////String DDD//////////////////////////////////////////

#include <iostream>
#include <string>

using namespace std;
int main()
{
    int DDD;
    string Cidade;
    
    getline (cin >> ws, Cidade);
    
    if (Cidade == "Brasilia")
    cout << 61 << endl;
    else if (Cidade == "Salvador")
    cout << 71 << endl;
    else if (Cidade == "Sao Paulo")
    cout << 11 << endl;
    else if (Cidade == "Rio de Janeiro")
    cout << 21 << endl;
    else if (Cidade == "Juiz de Fora")
    cout << 32 << endl;
    else if (Cidade == "Campinas")
    cout << 19 << endl;
    else if (Cidade == "Vitoria")
    cout << 27 << endl;
    else if (Cidade == "Belo Horizonte")
    cout << 31 << endl;
    else if (Cidade == "Santa Rita do Sapucai")
    cout << 35 << endl;
    else
        cout << "DDD nao cadastrado" << endl;
	return 0;
}
*/
/*
////////////////////////////STR - Animal////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Caracteristica1,Caracteristica2,Caracteristica3;
    
    getline (cin >> ws, Caracteristica1);
    getline (cin >> ws, Caracteristica2);
    getline (cin >> ws, Caracteristica3);
    
    if (Caracteristica1 == "vertebrado")
    {
        if (Caracteristica2 == "ave")
        {
            if (Caracteristica3 == "carnivoro")
            {
                cout << "aguia" << endl;
            }
            else if (Caracteristica3 == "onivoro")
            {
                cout << "pomba" << endl;
            }
            
        }
        else if (Caracteristica2 == "mamifero")
        {
            if (Caracteristica3 == "onivoro")
            {
                cout << "homem" << endl;
            }
            else if (Caracteristica3 == "herbivoro")
            {
                cout << "vaca" << endl;
            }
            
        }
            
    }
    else if (Caracteristica1 == "invertebrado")
    {
        if (Caracteristica2 == "inseto")
        {
            if (Caracteristica3 == "hematofago")
            {
                cout << "pulga" << endl;
            }
            else if (Caracteristica3 == "herbivoro")
            {
                cout << "lagarta" << endl;
            }
            
        }
        else if (Caracteristica2 == "anelideo")
        {
            if (Caracteristica3 == "hematofago")
            {
                cout << "sanguessuga" << endl;
            }
            else if (Caracteristica3 == "onivoro")
            {
                cout << "minhoca" << endl;
            }
            
        }
    }  
    return 0;
}
/////////////////////////STR - Ordem alfabética/////////////////////////////////
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string nome1,nome2,nome3;
    
    getline (cin >> ws, nome1);
    getline (cin >> ws, nome2);
    getline (cin >> ws, nome3);
    
    if (nome1 < nome2 && nome2 < nome3)
	{
		cout << nome1 << " ";
		cout << nome2 << " ";
		cout << nome3;
	}
	else if (nome1 < nome3 && nome3 < nome2)
	{
		cout << nome1 << " ";
		cout << nome3 << " ";
		cout << nome2;
	}
	else if (nome2 < nome1 && nome1 < nome3)
	{
		cout << nome2 << " ";
		cout << nome1 << " ";
		cout << nome3;
	}
	else if (nome2 < nome3 && nome3 < nome1)
	{
		cout << nome2 << " ";
		cout << nome3 << " ";
		cout << nome1;
	}
	else if (nome3 < nome2 && nome2 < nome1)
	{
		cout << nome3 << " ";
		cout << nome2 << " ";
		cout << nome1;
	}
	else if (nome3 < nome1 && nome1 < nome2)
	{
		cout << nome3 << " ";
		cout << nome1 << " ";
		cout << nome2;
	}
	
	return 0;
}
*/
/*
///////////////////////////Grupo Dcoder/////////////////////////////////////////
#include <iostream>
using namespace std;

int main()
{
    int students;
    cin >> students;
    
    students = students/3;
    cout << students << endl;
    return 0;
}
*/
/*
////////////////////////////Celcius para Fahrenheit/////////////////////////////

#include <iostream>
using namespace std;

int main()
{
    int Fahrenheit, Celcius;
    
    cin >> Celcius;
    
    Fahrenheit = (Celcius * 9/5) + 32;

    cout << Fahrenheit << endl;
    return 0;

} 
*/
/*
////////////////////////////ceil and floor dcoder///////////////////////////////
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int ceilValue, floorValue
    double x;
    
    cin >> x;

    ceilValue = ceil(x);
    floorValue = floor(x);

    cout << ceilValue << " " << floorValue << endl;

    return 0;
}
*/
/*
//////////////////////////For////////////////////////////////////////////////
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	int i, n; //contador/numero de repeticoes
	
	n=5;
	for(i = 0; i<n; i++)
		cout << i << endl;
	return 0;
}
*/
/*
//////////////////////////For Vendas////////////////////////////////////////////
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	int i, n, vendas, soma; //contador/numero de repeticoes
	
	cin >> n;
	
	soma = 0
	
	for(i = 0; i<n; i++)
	{
		cin >> vendas ;
		soma = soma + vendas
	}
	cout << "Vendas da semana: " << soma << endl;
		
	return 0;
}
*/
/*
///////////////////////////////////For Vendas///////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
    //contador,repetições,termo anterior, termo atual, proximo termo
	int i, n, termoAnterior,termoAtual,proximoTermo; 
	
	//começa em 0
	termoAnterior = 0;
	//proximo termo 1
    termoAtual = 1;
    
    //entrada
    cin >> n;
    
    cout << termoAnterior << " ";//imprime 0
    
    //loop em n repeticoes
    for (int i = 1; i < n; i++) 
    {
        //atualiza os valores
        proximoTermo = termoAnterior + termoAtual;
        
        //mostra o valpr
        cout << termoAtual  << " ";
        
        //troca os valores
        termoAnterior = termoAtual;
        termoAtual = proximoTermo;
    }
	return 0;
}
*/
/*
/////////////////////////////for temperatura////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
    
	float temperatura; // temperatura de uma hora
	float maxima; // maior temperatura do dia
	int hora;// hora em que ocorreu maior temperatura
	int i; //contador
	
	
	maxima = -100;
	
    for (int i = 0; i < 3; i++) 
    {
    	cin >> temperaturas;
    	if (temperaturas > maximo)
		{
			maximo = temperaturas;
			hora = i;
		}
    } 
    
    cout << "temperatura maxima: " << maxima << end;
    cout << "hora: " << hora << end;
	return 0;
}
*/
/*
//////////////////////////////FOR POSITIVOS/////////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
    int numero;// numero digitado
	
	int positivos;// quantidade de positivos
	
	//analiza cada numero separadamente se é positivo
    for (int i = 0; i < 6; i++) 
    {
    	cin >> numero;
    	if (numero > 0)
		{
			positivos++;
		}
    } 
    
    //imprive a quantidade de positivos
    cout << positivos << " valores positivos"  << endl;
	return 0;
}
*/
/*
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double numero;// numero digitado
	double media;// valor da media
	int positivos;// quantidade de positivos
	
	//determina que media vale 0
	media = 0;
	
	//loop de 6 repetições
    for (int i = 0; i < 6; i++) 
    {
        //entrada
    	cin >> numero;
    	
    	//	positivos++;
			media += numero;
		}
    }
    
    //continuação do calculo da media
    if (positivos > 0)
    {
        media /= positivos;
    }
    
    //imprive a quantidade de positivos
    cout << positivos << " valores positivos"  << endl;
    cout << fixed << setprecision (1)<< media << endl;
	return 0;analiza cada numero separadamente se é positivo
    	if (numero > 0)
		{
		
}
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    //aumento do limite do int
    //variaveis N = Numero, i = repeticoes
    long int N,i;
    
    //entrada
    cin >> N;
 
    //loop = N vezea
    for (i=1; i<=N; i++)
    {
        //verifica se é par
        if (i%2 ==0)
            cout << i <<"^2 = " <<i*i << endl; //saida e mostra o quadrado

    }
    return 0;
}
*/
/*
///////////////////////////////// WHILE Senha //////////////////////////////////
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string senha;
	
	cout << "Digite sua senha" << endl;
	getline (cin >> ws, senha);
	
	while(senha != "1234")
	{
		cout << "Digite sua senha" << endl;
		getline (cin >> ws, senha);
	}
	
	cout << "Senha correta"<< endl;
	
	return 0;
}

///////////////////////////////// Do WHILE Senha //////////////////////////////////
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string senha;
	
	cout << "Digite sua senha" << endl;
	
	do
		getline (cin >> ws, senha);
	while(senha != "1234")
	{
		cout << "Senha correta"<< endl;
	}
	
	return 0;
}
*/
/*
///////////////////////////////// WHILE Senha //////////////////////////////////
#include <iostream>
using namespace std;
int main()
{
	int x;
	int soma;
	
	soma = 0;
	cin >> x;
	while (x != -1)
	{
		soma = soma + x;
		cin >> x;
	}
	
	cout << "soma = " << soma << endl;
	
	return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
	int X,Y;
	
	cin >> X >> Y;
	
	while (X != Y)
	{
		if (X>Y)
		    cout << "Crescente"<<endl;
		else if (X<Y)
		    cout << "Decrescente"<<endl;
		cin >> X >> Y;
	}
	
	return 0;
}