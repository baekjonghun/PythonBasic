
# 문자열 포맷팅
number = 10
day = "three"
print("I date %d apples. so I was for %s days. " % (number ,day))

#제대로 나온다 .
print("error is null %d" %98) #result = error is null 98

# 포맷 코드와 숫자 함께 사용하기
# 1)정렬과 공백
print("%10s" % 'hi') #result =         hi
print("%-10sjain" % 'hi') #result =hi        jain

print("%10.4f" % 3.42134234) #소수 4째 자리까지 나타내고 오른쪽 정렬

# --format 함수 의 사용----
number = 10
day  = 'three'
print("I date {0} apples . so I was sick for {1} days. ".format(number , day))


# 이름으로 넣기
print("I date {number} apples . so I was sick for {day} days. ".format(number = 10 , day = 3))


print("{0:<10}".format("hi")) #왼쪽 정렬
print("{0:<10}".format("hi")) #오른쪽 정렬
print("{0:^10}".format("hi")) #가운데 정렬
print("{0:=^10}".format("hi")) #공백 채우기 result =====hi====

# 소수점 표현하기
print("{0:0.4f}".format(3.42134234))
print("{0:10.4f}".format(3.42134234))

# f문자열 사용하기 (3.6 버전 에서 사용 )
age = 30
print(f'I am a {age + 1} commnit')
