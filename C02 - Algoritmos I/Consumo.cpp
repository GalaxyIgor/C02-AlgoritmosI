#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
  double X;
  double Y;
  double M;
 
  cin >> X;
  cin >> Y;

   
   M = X/Y;
   
   cout << fixed << setprecision(3);
   cout << M << " km/l"  << endl;
    return 0;
}