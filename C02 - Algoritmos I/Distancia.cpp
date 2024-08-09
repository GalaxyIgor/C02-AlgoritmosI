#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
 
  double X1;
  double X2;
  double Y1;
  double Y2;
  double D;
 
  cin >> X1 >> Y1;
  cin >> X2 >> Y2;
  
  D = sqrt(pow(X2-X1,2)+pow(Y2-Y1,2));
  
  cout << fixed << setprecision(4)<< D << endl;
  return 0;
	}