#include <iostream>
using namespace std;
 
int main() 
{
 
  int H;
  int M;
  int N;
  int S;
  
  cin >> N;
  
  H=N/3600;
  M=(N%3600)/60;
  S=N%60;
  
  cout << H << ":" << M << ":" << S << endl;
  
  return 0;
}