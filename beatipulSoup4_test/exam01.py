

i = 5
#
# def increment(p):
#     global i
#
#     sum = 0
#     while(i <= p):
#         sum += i
#     return sum
#
# print('누적합:' , increment(5))

#되도록 지역 변수만 사용하도록 한다.


def decrement():
    global i
    while( i >= 1):
        print(i)
        i -= 1

decrement()
