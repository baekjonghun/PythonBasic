# 파일열기모드	설명
# r	읽기모드 - 파일을 읽기만 할 때 사용
# w	쓰기모드 - 파일에 내용을 쓸 때 사용
# a	추가모드 - 파일의 마지막에 새로운 내용을 추가 시킬 때 사용


# 파일의 생성  예)dir , 'w'
f = open("newFile.txt" , 'w')
for i in range(1,11):
    data  = '%d 번째 줄 입니다.\n' %i
    f.write(data)
f.close()


while open('foo.txt' , 'w') as f:
    # while 문을 벗어 나는 순간 자동으로 닫힌다.
    f.write('life is too short , you need python')



# 파일 출력하기
while True:
    line = f.readline()
    if not line : break
    print(line)

f.close()

# readline() 함수 이용하기  파일의 모든 라인을 읽어 온다.
lines = f.readlines()
for line in lines:
    print(line)
f.close()


# read() 함수 이용하기 data 전체를 불러옴...
data  = f.read()
print(data)
f.close()

# sys 라는 입력인수 직접 지정 가능
import sys
args =  sys.argv[1:]
for i in args:
    print(i)

# cmd  - > sys1.py aaa bbb ccc
# output- > aaa bbb ccc
