#! /usr/bin/env python

"""
Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 6/02/2017
Problem CODE - EIGHTS
SPOJ

"""
l1=list()
for i in range(100):
	if str(i**3).endswith("888"):
		l1.append(i)

test=int(raw_input())
for i in range(test):



	num=int(raw_input())
	k=num%4
	m=num/4

	if(m==0 ):
		if(k==1):print  "192"
		if(k==2): print "442"
		if(k==3): print "692"
		if(k==0):print "942"
	else:
		if(k==1):print  (str(m)+"192")
		if(k==2): print (str(m)+"442")
		if(k==3): print (str(m)+"692")
		if(k==0):
			if((m-1)!=0):
				print (str(m-1)+"942")
			else:
				print "942"


