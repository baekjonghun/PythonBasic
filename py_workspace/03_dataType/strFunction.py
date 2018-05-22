# 문자 개수 세기
a = "hooby"
print(a.count('o'))

#위치 알려 주기
a  = "pthon is best choice"
print(a.find('b'))

# 문자열 삽입
a  = ","
print(a.join('abcd'))

# 소문자를 대문자로 바꾸기
a = "hi"
print(a.upper())

# 대문자를 소문자로 바꾸기
a = "HI"
print(a.lower())

#왼쪽 공백 지우기
a = "   none"
print(a.lstrip())

# 오른쪽 공백 지우기
a = "hi  "
print(a.rstrip())

# 양쪽 공백 지우기
a = "   Hello   "
print(a.strip())

# 문자열 바꾸기
a = "Life is too short"
print(a.replace("Life" , "Your leg")) #result = Your leg is too short
