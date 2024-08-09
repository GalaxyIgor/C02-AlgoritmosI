#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
  double N;
  double H;
  double V;
  double S;
 
  cin >> N;
  cin >> H;
  cin >> V;
  
  S=(H*V);
  
  cout << "NUMBER = " << N << endl;
  cout<< fixed << setprecision(2);
  cout << "SALARY = U$ " << S << endl;

    return 0;
}