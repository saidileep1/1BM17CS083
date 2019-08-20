list=[[1,2,3],[10,21,30],[101,200,301]]
print([j for i in list for j in i])
print([j for i in list for j in i if(j%2==0)])


