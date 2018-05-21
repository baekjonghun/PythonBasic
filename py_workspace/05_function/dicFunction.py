# date 2018-05-21
# name JongHunBeak


def func(**kwargs):
    print(kwargs)



func(name = 'beak')


def func1(*args , **map):
    print(args)
    print(map)



    # 키워드가 앞에 오도록 한다. name = 'beak'
func1(1,2,3,4,5  , name = 'beak' , age = 31)

# 튜플 형태인 두개의 값을 호출한다.
def sum_and_mul(a,b):
    return a+b , a*b

result = sum_and_mul(3,4)
print(result)


 # break 문 처럼 return 도 빠져나오고 싶을때 블록을 빠져나올수 있다.
 # def say_nick(nick):
 #     if nick == '바보':
 #         return
 #     print('나의 별병은 %s 입니다.' %nick)

#매개변수는 항상 초기화 하여 사용 하도록 한다. 밑의 함수는 에러가 걸린다.
# def say_myself(name , man =True , old):
#     print('나의 이름은 %s 입니다.' %name)
#     print('나이는 %d 입니다.'%old)
#     if man:
#         print('남자 입니다.')
#     else:
#         print('여자 입니다.')



a  =1
def varTest(a):
    a = a + 1
# 저장이 되어 있지 않기 때문에 a = 1 이 저장 된다.
varTest(a)
print(a)



#글로 벌을 써서 인스턴스 변수 명시
a  =1
def varTest(a):
    #함수 밖의 a 를 쓰도록 하겠다는 뜻 ... .
    global a
    a = a + 1
varTest(a)
print(a)


#Lambada 함수
myList  = [lambda a , b: a+b , lambda a, b: a*b]
myList[0](3,4)
