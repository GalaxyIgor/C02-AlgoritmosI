#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
 
  double A;
  double B;
  double MEDIA;
 
  cin >> A;
  cin >> B;
 
  A = A * 3.5;
  B = B * 7.5;
  MEDIA = (A + B) / (3.5+7.5);
  
  cout << fixed << setprecision(5);
  cout << "MEDIA = " << MEDIA << endl;
    return 0;
}