#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
  double A;
  double B;
  double C;
  double TRI;
  double CIR;
  double TRA;
  double QUA;
  double RET;
  
  
  cin >> A >> B >> C;
  
  TRI=(A*C)/2;
  CIR=3.14159*(C*C);
  TRA=(A+B)*(C)/2,
  QUA=B*B;
  RET=A*B;
  
  cout<< fixed << setprecision(3);
  cout <<"TRIANGULO: " << TRI << endl;
  cout <<"CIRCULO: " << CIR << endl;
  cout <<"TRAPEZIO: " << TRA << endl;
  cout <<"QUADRADO: " << QUA << endl;
  cout <<"RETANGULO: "<< RET << endl;
  
  

    return 0;
}