# -*- coding: utf-8 -*-
"""
@Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 4/01/2017
Problem CODE - ERROR
CODE CHEF
"""

test=int(raw_input())
for i in range(test):
    s=raw_input()
    c1=s.count("010")
    c2=s.count("101")
    if(c1+c2>=1):print "Good"
    else : print "Bad"