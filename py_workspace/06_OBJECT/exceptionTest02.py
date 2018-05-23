#  -*- coding: utf-8 -*-
import sys
import io


sys.stdout = io.TextIOWrapper(sys.stdout.detach() , encoding = "utf - 8")
sys.stderr = io.TextIOWrapper(sys.stdout.detach() , encoding = "utf - 8")

number_list = [55,10,72,500]

try:
    index_print = int(input("정수 입력>>>"))
    print("{}번째 요소{}".format(index_print , number_list[index_print]))

except ValueError as exception_kind :
    print("정수를 입력하세요!!")
    print(type(exception_kind), exeotion_)
except IndexError as exception_kind:
    print("리스트의 인댁스를 벗어났습니다. ")
    print(type(exception_kind , exception_kind)
except Exception as exception_kind:
