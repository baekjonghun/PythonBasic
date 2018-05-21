import sys


def sum_mul( chice , *args):
    if chice == 'sum':
        result  = 0
        for i in args:
            result += i
    if chice == 'mul':
        result = 1
        for i in args:
            result += i
    return result


result  = sum_mul('mul',1,2,3,4,5 )
print(result)
