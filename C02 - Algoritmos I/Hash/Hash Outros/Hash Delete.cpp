HASH_DELETE(T,m,k)
j = HASH_SEARCH(T,m,k)
if(j != -1)
T[j].status = 2
T[j].k = -1
return 0 // consegui remover
else
return -1 // k nao esta na tabela
