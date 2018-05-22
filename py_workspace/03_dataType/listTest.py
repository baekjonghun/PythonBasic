a = []
b = [1,2,3]
c = ['life' , 'is' , 'too' ,'short']
d = [1,2,'life','is']
e = [1,2,['Life','is']]

temp = [1, 2, 3, ['a', 'b', 'c']]

print(temp[-1][0]) #a

#리스트의 슬라이싱 
a1 = [1,2,3,4,5]
a[0:2] #[1.2]

#반복 및 연산

result = a1[0] + a1[1]
result = a1 * 3 #반복 

#수정 
a1[0] = 2

#삭제
del a1[0]

#-- 함수의  사용
#추가
a1.append(4) #12345
a1.sort() #정렬
a1.reverse() #순서 반대로 
a1.index(3) #index 위치의 값
a1.insert(0,4)
a1.remove(2) #2가 나오는 첫번째 값만 제거
a1.pop() #맨 마지막 요소 꺼내옴
a1.count() #리스트의 포함된 요소x의 개수 세기(count)

#리스트의 확장
a = [1,2,3]
a.extend([4,5]) #1,2,3,4,5




