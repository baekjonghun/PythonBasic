

#  -*- coding: utf-8 -*-
import sys
import io



try:
    radious_input = float(input("반지름 입력"))
except Exception as exception_value:
    print('문자를 입력하셧 군요 : %s'  %exception_value)
else:
    print('반지름  %0.2f'  %radious_input)
    print('둘레 %0.2f' %(radious_input * 2 * 3.14))
    print('넓이 %0.2f' %(radious_input ** 2 * 3.14))

finally:
    print('예외에 상관없이 실행하는 구문')
