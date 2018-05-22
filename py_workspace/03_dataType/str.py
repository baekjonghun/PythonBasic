#============ 문자열을 사용하는 법 ============

# 1.큰따옴 표로 둘러 싸기
"Hello World"

# 2.작은 따옴표로  둘러싸기
'python is fun'

# 3.큰 따옴표 3개 연속하여 둘러 싸기
"""ilfe is too short need python"""

# 4.작은 따옴표 3개 연속하여 둘러 싸기 (이스케이프를 사용한다.) result = ilfe is too "short 'need python
str = '''ilfe is too \"short \'need python'''
print(str)

# 5.여러줄인 문자열을 변수에 대입하고 싶을때
str1 = '''ilfe is too \n short \n need python'''
print(str1)

str2 = '''ilfe is too
short
need
python'''
print(str2)


# -- 문자열 연산하기 --
head = "Python"
tail = " is fun!"
print(head  + tail)

# 문자열 곱하기 result = pythonpython
st1  = 'python'
print(st1 * 2)

#문자열 곱하기 응용
print("=" * 50)
print("my Program")
print("=" * 50)

temp  = "Life os too short , you need Python"
# result = L
print(temp[0])
# 뒤에서는 1부터 시작한다고 생각하자.
print(temp[-2])


# ----문자열 슬라이딩 ----- (슬라이싱은 바로 앞에 자리 까지 뽑아옴) result = Life
print(temp[:4])
print(temp[5:8]) #os


# ----값을 바꾸기 ---문자열 tuple 형은 문자열을 변경할 수가 없다.
a  = "Pithon"
# a[1] = 'y' error

# 슬라이싱을 통하여 문자열을 바꾼다.
a = "Pithon"
print(a[:1] +  'y' + a[2:])
