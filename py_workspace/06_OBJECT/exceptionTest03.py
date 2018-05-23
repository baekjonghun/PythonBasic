import sys
import io
sys.stdout = io.TextIOWrapper(sys.stdout.detach(), encoding='utf-8')
sys.stderr = io.TextIOWrapper(sys.stderr.detach(), encoding='utf-8')

#  -*- coding: utf-8 -*-

list_input =  ['55' , '100' , 'list' , '250' , 'spy' , '500']


print("변경전",list_input)

try:
    list_sub =  []
    for k in list_input:
        index  = k
        temp = index[0:1]
        for  i in range(1,11):
            if str(i) == temp: #1~10까지 맨 앞의 숫자일 경우 값을 넣는다.
                list_sub.append(k)
except Exception as ex:
    print("error:" , ex)

finally:
    print("변경후",list_sub)





# [] 내부의 숫자는 [] ~~  입니다.
