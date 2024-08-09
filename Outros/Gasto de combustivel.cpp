#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
  double H;
  double VM;
  double L;
  double KM;
 
  cin >> H;
  cin >> VM;
  
  KM = H*VM;
  L=KM/12;
  
  cout << fixed << setprecision(3)<< L << endl;
  return 0;
	}