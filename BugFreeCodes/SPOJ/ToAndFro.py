"""
Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 2/02/2017
Problem CODE - TOANDFRO
SPOJ

"""


def chunkstring(string, length):
    return (string[0+i:length+i] for i in range(0, len(string), length))


while(True):
    
    n=int(raw_input())
    if(n==0):break
    
    x=raw_input()
    a=list(chunkstring(x,n))
    
    for i in range(0,len(a)):
        if(i%2!=0):
            a[i]=a[i][::-1]
            
    b= "".join(a)
    l1=list()
    for i in range(0,n):
        
        for k in range(i+0,i+len(x),n):
            
            l1.append(b[k])
            
    print "".join(l1)
    


    
        