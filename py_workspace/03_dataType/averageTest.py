a = [1,2,3]

print(id(a))

b = a #주소값 복사 
a is b #True ~~ 

#주소값이 다른 새로운 객체 생성 

#1.[:] 이용
a = [1,2,3] 
b = a[:]

#2.copy 모듈 이용 
from copy import copy
b =  copy(a)



#변수를 만드는 여러가지 방법 
a, b  = ('python', 'life')

c = d = 'python'

print(c,d)