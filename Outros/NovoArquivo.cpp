#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double N, H;
    cin >> N;
    H=0;
    for (int i=1 ;i<=N;i++)
    {
        H = (1 + H)/i;
    }
    
    cout << fixed << setprecision (4) << H << endl;
	return 0;
}
