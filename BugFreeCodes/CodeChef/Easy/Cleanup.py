"""
Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 4/01/2017
Problem CODE - CLEANUP
CODE CHEF
"""


test=int(raw_input())
for _ in xrange(test):
	

	n,m=[int(i) for i in raw_input().split()]
	completed=[int(i) for i in raw_input().split()]

	a=list()
	for i in xrange(1,n+1):
		if i not in completed:
			a.append(i)
	chef=list()
	assistant=list()
	for i in xrange(1,len(a)+1):
		if((i-1)%2==0):
			assistant.append(a[i-1])
		else:
			chef.append(a[i-1])



	else:
		for i in assistant:
			print i," ",
		
	print "\n"
	if(len(chef)==0):print "\n"
	else:
		for i in chef:
			print i," ",
		

	if(len(assistant)==0):print "\n"

k=raw_input()






