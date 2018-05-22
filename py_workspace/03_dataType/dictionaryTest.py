#중복되는 키를 입력하지 말자 

dic = {'name':'pey' , 'phone':'01199993323' , 'birth':'1118'} 

a  = {'a':[1,2,3]} #리스트 넣기

#딕셔너리 쌍 추가하기 
a = {1:'a'}
a[2] = 'b' #{1:'a' , 2:'b'}

#삭제하기 
del a[1]

 
#딕셔너리 관련 함수 

a.keys() #키의 리스트 
a.values() #값의 리스트 
a.items() #튜플로 묶은 객체
a.clear() #모두 지우기 
a.get('1') #키로 value 얻기 없으면 none  = a['1'] error 
a.get('1' ,'test') #1을 못찾으면 defalt 반환 



if 1 in a:
    print('1key 찾음')
else:
    print("못 찾음")

