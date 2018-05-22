
test_list = ['one', 'two', 'three']
for i in test_list: 
    print(i)



a = [(1,2), (3,4), (5,6)]
for (first, last) in a:
    print(first + last) #����Ʈ�� ��Ұ� Ʃ���̴�. ���� ���� ����




marks = [90, 25, 67, 45, 80]

number = 0 
for mark in marks: 
    number = number +1 
    if mark >= 60: 
        print("%d�� �л��� �հ��Դϴ�." % number)
    else: 
        print("%d�� �л��� ���հ��Դϴ�." % number)


marks = [90, 25, 67, 45, 80]
for number in range(len(marks)):
    if marks[number] < 60: continue
    print("%d�� �л� �����մϴ�. �հ��Դϴ�." % (number+1))



    
for i in range(2,10): 
    for j in range(1, 10): 
        print(i*j, end=" ") #�ش� ���� �������� �ʰ� ��� end = "" (�Է��μ�)
    print('') 



a = [1,2,3,4]
result = []
for num in a:
    result.append(num*3)

print(result)
#[3, 6, 9, 12]

#-����Ʈ ����-
result = [num * 3 for num in a]
print(result)
#[3, 6, 9, 12]

result = [num * 3 for num in a if num % 2 == 0]
print(result)
#[6, 12]

#[ǥ���� for �׸� in �ݺ����ɰ�ü if ����]

#[ǥ���� for �׸�1 in �ݺ����ɰ�ü1 if ����1
#        for �׸�2 in �ݺ����ɰ�ü2 if ����2
#        ...
#        for �׸�n in �ݺ����ɰ�ün if ����n]