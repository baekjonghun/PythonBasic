
number  = 5

def print_number():
    print('numer value' , number)
    return


def priunt_squre():
    print('number squre : ' , number ** 2)
    return

# print('__name__: %s' %__name__)  #해당되는 곳에서 실행하면 main 이 되고 import 하면 name 이 출력됨.

if __name__ == '__main__':
    print('number : ' ,number)
    print(priunt_squre())
    print(print_number())
