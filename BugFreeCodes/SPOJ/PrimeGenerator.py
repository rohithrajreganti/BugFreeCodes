a,n,k=[int(i) for i in raw_input().split()]
reactorlist=list()
"""for i in range(k):
    reactorlist.append(0)
for j in range(a):
    reactorlist[0]+=1
    for i in range(k):
        if(reactorlist[i]>n and i<k-1):
            reactorlist[i]=0
            reactorlist[i+1]+=1
        elif(reactorlist[i]>n):
            reactorlist[i]=0
for i in reactorlist:
    print i,
   """
for i in range(k):
    
    print a%(n+1),
    a=a/(n+1)
             

            
        