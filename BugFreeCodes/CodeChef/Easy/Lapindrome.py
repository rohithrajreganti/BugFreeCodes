"""
Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 8/01/2017
Problem CODE - LAPIN
CODE CHEF
"""
def tester(s1,s2):
    l1=0
    for i in s1:
        if(s1.count(i)==s2.count(i)):
            l1+=1
            
    if(len(s1)==l1): return True
    else: return False
    
test=int(raw_input())
for _ in range(test):
    s=(raw_input())
    if(len(s)%2==0) :
        s1=s[0:len(s)/2]
        s2=s[len(s)/2:]
        val=tester(s1,s2)
        if(val):print "YES"
        else:print "NO"
        #print val
    else:
        s1=s[0:len(s)/2]
        s2=s[len(s)/2+1:]
        val=tester(s1,s2)
        if(val):print "YES"
        else:print "NO"
        #print val
        

        
        
         