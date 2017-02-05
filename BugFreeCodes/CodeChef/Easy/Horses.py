"""
Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 5/01/2017
Problem CODE - HORSES
CODE CHEF
"""


test=int(raw_input())
for i in xrange(test):
	n=int(raw_input())
	s=[int(i) for i in raw_input().split()]
	sort=sorted(s,reverse=True)
	
	min=sort[0]-sort[1]
	
	for i in xrange(len(sort)-1):
		j=i+1
		
		if((sort[i]-sort[j])<min):
			
			min=sort[i]-sort[j]
			

	print min


