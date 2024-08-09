HASH-INSERT(T,k,m)
i <- 0
do
 j <- h(k,i,m)
 if (T[j].status != 1)
 T[j].k <- k
T[j].status <- 1
 return j // posição em que k foi inserida em T
 else 
 i <- i+1
while (i != m)
return -1 // tabela cheia
