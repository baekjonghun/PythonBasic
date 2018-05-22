#중복을 허용하지 않는다 . 순서가없고 index 로 불러오기 불가 

s1  = set([1,2,3,4,3])

t1 = tuple(s1) #중복 제거후 튜플형 변환 


test1 = set([1,2,3,4,5,6])
test2 = set([4,5,6,7,8,8])

result = test1 & test2 #교집합 
result = test1 | test2 #합집합
result = test1 - test2 #차집합 

#add,update,remove 가능
