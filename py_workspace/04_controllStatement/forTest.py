
test_list = ['one', 'two', 'three']
for i in test_list: 
    print(i)



a = [(1,2), (3,4), (5,6)]
for (first, last) in a:
    print(first + last) #리스트의 요소가 튜플이다. 각각 변수 대입




marks = [90, 25, 67, 45, 80]

number = 0 
for mark in marks: 
    number = number +1 
    if mark >= 60: 
        print("%d번 학생은 합격입니다." % number)
    else: 
        print("%d번 학생은 불합격입니다." % number)


marks = [90, 25, 67, 45, 80]
for number in range(len(marks)):
    if marks[number] < 60: continue
    print("%d번 학생 축하합니다. 합격입니다." % (number+1))



    
for i in range(2,10): 
    for j in range(1, 10): 
        print(i*j, end=" ") #해당 값에 개행하지 않고 출력 end = "" (입력인수)
    print('') 



a = [1,2,3,4]
result = []
for num in a:
    result.append(num*3)

print(result)
#[3, 6, 9, 12]

#-리스트 내포-
result = [num * 3 for num in a]
print(result)
#[3, 6, 9, 12]

result = [num * 3 for num in a if num % 2 == 0]
print(result)
#[6, 12]

#[표현식 for 항목 in 반복가능객체 if 조건]

#[표현식 for 항목1 in 반복가능객체1 if 조건1
#        for 항목2 in 반복가능객체2 if 조건2
#        ...
#        for 항목n in 반복가능객체n if 조건n]