#include <iostream>
using namespace std;
void selection_sort(int vetor[], int n)
{   
    for(int j =0 ; j < n; j++)						// 1 + 3n + 3n + 3
	{
		int pos_menor = j, menor = vetor[j], aux;	//5n
    	for(int i = j + 1 ; i < n; i++)				//(3 + 3n/2 + 3n/2)n = 6n + 3n ao quadrado
		{
        	if(vetor[i] < menor)					//2n ao quadrado
			{
	  		   	menor = vetor[i];					//3(n/2)n = 1,n ao quadrado
				pos_menor = i						//2(n/2)n = n ao quadrado
	   		}
			aux = vetor[j];							//3n
			vetor[j] = menor;						//3n
			vetor [pos_menor] = aux;				//3n
		}
	}
}//O(n) ao qudrado, pois tem 2 O(n²)				//Total = 7,5n ao quadrado + 26 n + 4