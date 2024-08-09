#include <iostream>
using namespace std;
 
int main() {
 
  int ID;
  int ANO;
  int MES;
  int DIA;
  
  cin >> ID;
  
  ANO=ID/365;
  MES=ID%365/30;
  DIA=ID%365%30;
  
  cout << ANO <<" ano(s)" << endl;
  cout << MES <<" mes(es)" << endl;
  cout << DIA <<" dia(s)" << endl;
  return 0;
	}