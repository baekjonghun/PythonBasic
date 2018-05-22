import sys
print(sys.stdin.encoding) #시스템의 인코딩 방식 예)cp949



han =  '가'
print(han) #한글이 께진다
print(han.encode('cp949')) #한글이 께진다


# 파이썬 3에서 한글 텍스트 파일 읽기
f = open('myfile.txt', 'r', encoding='utf8')
text = f.read() # 읽어들이면서 지정된 인코딩을 이용하여 문자열 데이터로 변환한다.
print(text)



# 1. 완성형
# -*- coding: euckr -*-
#
#
#
# 2. 확장 완성형 (윈도우)
# -*- coding: cp949 -*-
#
#
#
# 3. UTF-8
#  -*- coding: utf-8 -*-
#
# 출처: http://devnauts.tistory.com/69 [devnauts]
# utf 일  경우 사용한다.
# str = u"한글 포함 상수"
