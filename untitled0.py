# -*- coding: utf-8 -*-
"""
Created on Mon Mar  9 23:37:41 2020

@author: HSNL
"""

a=input().split(' ')
a=[int(x) for x in a]
if (a[0]*a[1])%2==0:
    print(a[0]*a[1]/2)
else:
    print(a[0]*a[1]//2+1)


