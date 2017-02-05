"""
Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 8/01/2017
Problem CODE - JOHNY
CODE CHEF
"""



test=int(raw_input())
for _ in range(test):
    
    size=int(raw_input())
    arr=[long(i) for i in raw_input().split()]
    k=int(raw_input())
    val=arr[k-1]
    a1=sorted(arr)
    print a1.index(val)+1