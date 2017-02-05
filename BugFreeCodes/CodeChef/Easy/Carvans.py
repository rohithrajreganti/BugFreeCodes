"""
Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 8/01/2017
Problem CODE - CARAVANS
CODE CHEF
"""

test=int(raw_input())
for _ in range(test):
	N=int(raw_input())
	count=1
	arr=list()
	arr=[int(i) for i in raw_input().split()]
	for i in range(len(arr)-1):
		if(arr[i+1]>arr[i]):
			arr[i+1]=arr[i]
		else:
			count+=1
	print count