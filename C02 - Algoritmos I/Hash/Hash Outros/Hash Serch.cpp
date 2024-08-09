#include <iostream>
using namespace std;
HASH-SEARCH(T,k,m)
i <- 0
do
 j <- h(k,i,m)
 if T[j].k = k 
 return j
 i <- i+1
while (T[j].status != 0 and i < m)
return -1
