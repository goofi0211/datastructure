# -*- coding: utf-8 -*-
"""
Created on Thu Jan  9 11:54:41 2020

@author: HSNL
"""

#1A2B game
import random
items = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
random.shuffle(items)
answer=''
a_count=0 # initial A count
b_count=0 # initial B count
for i in range(4):
    answer+=str(items[i])
while(True):
    number=input('Enter the number: ')
    if not number.isdigit():  #cheak all input is digit
        pass
    else:
        if number==answer:
            print('excellent you guess the correct number')
            break
        for i in range(4):
            for j in range(4):
                if i==j and number[i]==answer[j]:
                    a_count+=1
                elif number[i]==answer[j]:
                    b_count+=1
        print('{0}A{1}B'.format(a_count,b_count))
        a_count=0
        b_count=0
        
        