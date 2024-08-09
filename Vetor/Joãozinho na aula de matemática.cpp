#include <iostream>
using namespace std;
int main()
{
    int Total[1000];
    int i;
    int N;
    cin>> N;
    for( i=0;i<=10;i++)
    {
        Total[i]= N*i;
        cout<<N<< " x "<<i<<" = "<< Total[i]<< endl;
    }
}