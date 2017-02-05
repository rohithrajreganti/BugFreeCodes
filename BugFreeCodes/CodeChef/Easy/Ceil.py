"""
Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 4/01/2017
Problem CODE - CIEL
CODE CHEF
"""

a,b=[int(i) for i in raw_input().split()]
ans=str(a-b)
if(len(ans)==1 and ans=='1'): print 2
elif (len(ans)==1 and ans!='1'): print 1 
elif(ans[0]=='1'): print "2"+ans[1:]
else : print "1"+ans[1:]
