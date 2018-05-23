import sys
import io


#  -*- coding: utf-8 -*-

list_input =  ['55' , '100' , 'list' , '250' , 'spy' , '500']

list_number = []

for int_linst_input in list_number:

    try:
        int(int_linst_input)
        list_number.append(int_linst_input)
    except:
        pass


print(list_number)
