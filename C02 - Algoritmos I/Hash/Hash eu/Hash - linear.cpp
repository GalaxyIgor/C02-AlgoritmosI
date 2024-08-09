#include<iostream>
using namespace std;

int hash_aux(int k, int m)
{
    int hash_value = k % m;
    if (hash_value < 0) 
    {
        hash_value += m;
    }
    return hash_value;
}
int hash_linear(int k, int i, int m) 
{
    int h_lin = (hash_aux(k, m) + i) % m;
    return h_lin;
}

int main ()
{
    int k,m;
    
    cin >> k >> m;

    for (int i = 0; i < m; i++) 
    {
        cout << hash_linear(k, i, m) << " ";
    }
    cout << endl;
    
    return 0;
}