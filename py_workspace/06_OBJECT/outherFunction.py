﻿05-6 외장 함수
이제 파이썬 프로그래밍 능력을 높여 줄 더 큰 날개를 달아 보자. 전 세계의 파이썬 사용자들이 만든 유용한 프로그램들을 모아 놓은 것이 바로 파이썬 라이브러리이다. "라이브러리"는 "도서관"이라는 뜻 그대로 원하는 정보를 찾아보는 곳이다. 모든 라이브러리를 다 알 필요는 없고 어떤 일을 할 때 어떤 라이브러리를 사용해야 한다는 정도만 알면 된다. 그러기 위해 어떤 라이브러리들이 존재하고 어떻게 사용되는지 알아야 할 필요가 있다. 자주 사용되고 꼭 알아두면 좋은 라이브러리들을 중심으로 하나씩 살펴보자.

(※ 파이썬 라이브러리는 파이썬 설치 시 자동으로 컴퓨터에 설치가 된다.)

sys
명령 행에서 인수 전달하기 - sys.argv
강제로 스크립트 종료하기 - sys.exit
자신이 만든 모듈 불러와 사용하기 - sys.path
pickle
os
내 시스템의 환경 변수값을 알고 싶을 때 - os.environ
디렉터리 위치 변경하기 - os.chdir
디렉터리 위치 리턴받기 - os.getcwd
시스템 명령어 호출하기 - os.system
실행한 시스템 명령어의 결과값 리턴받기 - os.popen
기타 유용한 os 관련 함수
shutil
파일 복사하기 - shutil.copy(src, dst)
glob
디렉터리에 있는 파일들을 리스트로 만들기 - glob(pathname)
tempfile
time
time.time
time.localtime
time.asctime
time.ctime
time.strftime
time.sleep
calendar
calendar.weekday
calendar.monthrange
random
webbrowser
namedtuple
defaultdict
연습문제
sys
sys 모듈은 파이썬 인터프리터가 제공하는 변수들과 함수들을 직접 제어할 수 있게 해주는 모듈이다.

명령 행에서 인수 전달하기 - sys.argv
C:/User/home>python test.py abc pey guido
명령 프롬프트 창에서 위의 예처럼 test.py 뒤에 또 다른 값들을 함께 넣어 주면 sys.argv라는 리스트에그 값들이 추가된다.

예제를 따라 하며 확인해 보자. 우선 다음과 같은 파이썬 프로그램을 작성하자. argv_test.py 파일은 C:/doit/mymod 디렉터리에 저장했다고 가정한다(만약 C:/doit/mymod 디렉터리가 없다면 먼저 생성하고 진행하자).

# argv_test.py
import sys
print(sys.argv)
명령 프롬프트 창에서 다음과 같이 실행해 보자.

C:/doit/mymod>python argv_test.py you need python
['argv_test.py', 'you', 'need', 'python']
python이라는 명령어 뒤의 모든 것들이 공백을 기준으로 나뉘어서 sys.argv 리스트의 요소가 됨을 알 수 있다.

(※ 명령 프롬프트 창에서는 /, \든 상관없지만, 소스코드 안에서는 반드시 / 또는 \\ 기호를 사용해야 한다.)

강제로 스크립트 종료하기 - sys.exit
>>> sys.exit()
sys.exit는 Ctrl+Z나 Ctrl+D를 눌러서 대화형 인터프리터를 종료하는 것과 같은 기능을 한다. 프로그램 파일 내에서 사용하면 프로그램을 중단시킨다.

자신이 만든 모듈 불러와 사용하기 - sys.path
sys.path는 파이썬 모듈들이 저장되어 있는 위치를 나타낸다. 즉, 이 위치에 있는 파이썬 모듈들은 경로에 상관없이 어디에서나 불러올 수가 있다.

다음은 그 실행 결과이다.

>>> import sys
>>> sys.path
['', 'C:\\Windows\\SYSTEM32\\python36.zip', 'c:\\Python36\\DLLs', 
'c:\\Python36\\lib', 'c:\\Python36', 'c:\\Python36\\lib\\site-packages']
>>>
위의 예에서 ''는 현재 디렉터리를 말한다.

# path_append.py
import sys
sys.path.append("C:/doit/mymod")
위와 같이 파이썬 프로그램 파일에서 sys.path.append를 이용해 경로명을 추가할 수 있다. 이렇게 하고 난 후에는 C:/doit/mymod라는 디렉터리에 있는 파이썬 모듈을 불러와서 사용할 수가 있다.

pickle
pickle은 객체의 형태를 그대로 유지하면서 파일에 저장하고 불러올 수 있게 하는 모듈이다. 다음 예는 pickle 모듈의 dump 함수를 이용하여 딕셔너리 객체인 data를 그대로 파일에 저장하는 방법을 보여 준다.

>>> import pickle
>>> f = open("test.txt", 'wb')
>>> data = {1: 'python', 2: 'you need'}
>>> pickle.dump(data, f)
>>> f.close()
다음은 pickle.dump에 의해 저장된 파일을 pickle.load를 이용해서 원래 있던 딕셔너리 객체(data) 상태 그대로 불러오는 예이다.

>>> import pickle
>>> f = open("test.txt", 'rb')
>>> data = pickle.load(f)
>>> print(data)
{2:'you need', 1:'python'}
위의 예에서는 딕셔너리 객체를 이용하였지만 어떤 자료형이든 상관없이 저장하고 불러올 수 있다.

os
OS 모듈은 환경 변수나 디렉터리, 파일 등의 OS 자원을 제어할 수 있게 해주는 모듈이다.

내 시스템의 환경 변수값을 알고 싶을 때 - os.environ
시스템은 제각기 다른 환경 변수값을 가지고 있는데, os.environ은 현재 시스템의 환경 변수 값들을 보여 준다. 다음을 따라 해보자.

>>> import os
>>> os.environ
environ({'PROGRAMFILES': 'C:\\Program Files', 'APPDATA': … 생략 …})
>>>
위의 결과값은 필자의 시스템 정보이다. os.environ은 환경 변수에 대한 정보를 딕셔너리 객체로 리턴한다. 자세히 보면 여러 가지 유용한 정보를 찾을 수 있다.

리턴받은 객체가 딕셔너리이기 때문에 다음과 같이 호출할 수 있다. 다음은 필자 시스템의 PATH 환경 변수에 대한 내용이다.

>>> os.environ['PATH']
'C:\\ProgramData\\Oracle\\Java\\javapath;...생략...'
디렉터리 위치 변경하기 - os.chdir
os.chdir을 이용하면 아래와 같이 현재 디렉터리의 위치를 변경할 수 있다.

>>> os.chdir("C:\WINDOWS")
디렉터리 위치 리턴받기 - os.getcwd
os.getcwd는 현재 자신의 디렉터리 위치를 리턴한다.

>>> os.getcwd()
'C:\WINDOWS'
시스템 명령어 호출하기 - os.system
시스템 자체의 프로그램이나 기타 명령어들을 파이썬에서 호출할 수도 있다. os.system("명령어")처럼 사용한다. 다음은 현재 디렉터리에서 시스템 명령어인 dir을 실행하는 예이다.

>>> os.system("dir")
실행한 시스템 명령어의 결과값 리턴받기 - os.popen
os.popen은 시스템 명령어를 실행시킨 결과값을 읽기 모드 형태의 파일 객체로 리턴한다.

>>> f = os.popen("dir")
읽어 들인 파일 객체의 내용을 보기 위해서는 다음과 같이 하면 된다.

>>> print(f.read())
기타 유용한 os 관련 함수
함수	설명
os.mkdir(디렉터리)	디렉터리를 생성한다.
os.rmdir(디렉터리)	디렉터리를 삭제한다.단, 디렉터리가 비어있어야 삭제가 가능하다.
os.unlink(파일)	파일을 지운다.
os.rename(src, dst)	src라는 이름의 파일을 dst라는 이름으로 바꾼다.
shutil
shutil은 파일을 복사해 주는 파이썬 모듈이다.

파일 복사하기 - shutil.copy(src, dst)
src라는 이름의 파일을 dst로 복사한다. 만약 dst가 디렉터리 이름이라면 src라는 파일 이름으로 dst라는 디렉터리에 복사하고 동일한 파일 이름이 있을 경우에는 덮어쓴다.

다음의 예를 보자.

>>> import shutil
>>> shutil.copy("src.txt", "dst.txt")
위 예를 실행해 보면 src.txt 파일과 동일한 내용의 파일이 dst.txt로 복사되는 것을 확인할 수 있다.

glob
가끔 파일을 읽고 쓰는 기능이 있는 프로그램을 만들다 보면 특정 디렉터리에 있는 파일 이름 모두를 알아야 할 때가 있다. 이럴 때 사용하는 모듈이 바로 glob이다.

디렉터리에 있는 파일들을 리스트로 만들기 - glob(pathname)
glob 모듈은 디렉터리 내의 파일들을 읽어서 리턴한다. *, ? 등의 메타 문자를 써서 원하는 파일만 읽어 들일 수도 있다.

다음은 C:/doit이라는 디렉터리에 있는 파일 중 이름이 문자 q로 시작하는 파일들을 모두 찾아서 읽어 들이는 예이다.

>>> import glob
>>> glob.glob("C:/doit/q*")
['C:\doit\quiz.py', 'C:\doit\quiz.py.bak']
>>>
tempfile
파일을 임시로 만들어서 사용할 때 유용한 모듈이 바로 tempfile이다. tempfile.mktemp()는 중복되지 않는 임시 파일의 이름을 무작위로 만들어서 리턴한다.

>>> import tempfile
>>> filename = tempfile.mktemp()
>>> filename
'C:\WINDOWS\TEMP\~-275151-0'
tempfile.TemporaryFile()은 임시 저장 공간으로 사용될 파일 객체를 리턴한다. 이 파일은 기본적으로 바이너리 쓰기 모드(wb)를 갖는다. f.close()가 호출되면 이 파일 객체는 자동으로 사라진다.

>>> import tempfile
>>> f = tempfile.TemporaryFile()
>>> f.close()
time
시간과 관련된 time 모듈에는 유용한 함수가 굉장히 많다. 그중에서 가장 유용한 몇 가지만 알아보자.

time.time
time.time()은 UTC(Universal Time Coordinated 협정 세계 표준시)를 이용하여 현재 시간을 실수 형태로 리턴하는 함수이다. 1970년 1월 1일 0시 0분 0초를 기준으로 지난 시간을 초 단위로 리턴한다.

>>> import time
>>> time.time()
988458015.73417199
time.localtime
time.localtime은 time.time()에 의해서 반환된 실수값을 이용해서 연도, 월, 일, 시, 분, 초,.. 의 형태로 바꾸어 주는 함수이다.

>>> time.localtime(time.time())
time.struct_time(tm_year=2013, tm_mon=5, tm_mday=21, tm_hour=16,
    tm_min=48, tm_sec=42, tm_wday=1, tm_yday=141, tm_isdst=0)
time.asctime
위의 time.localtime에 의해서 반환된 튜플 형태의 값을 인수로 받아서 날짜와 시간을 알아보기 쉬운 형태로 리턴하는 함수이다.

>>> time.asctime(time.localtime(time.time()))
'Sat Apr 28 20:50:20 2001'
time.ctime
time.asctime(time.localtime(time.time()))은 time.ctime()을 이용해 간편하게 표시할 수 있다. asctime과 다른점은 ctime은 항상 현재 시간만을 리턴한다는 점이다.

>>> time.ctime()
'Sat Apr 28 20:56:31 2001'
time.strftime
time.strftime('출력할 형식 포맷 코드', time.localtime(time.time()))
strftime 함수는 시간에 관계된 것을 세밀하게 표현할 수 있는 여러 가지 포맷 코드를 제공한다.

시간에 관계된 것을 표현하는 포맷 코드

포맷코드	설명	예
%a	요일 줄임말	Mon
%A	요일	Monday
%b	달 줄임말	Jan
%B	달	January
%c	날짜와 시간을 출력함	06/01/01 17:22:21
%d	날(day)	[00,31]
%H	시간(hour)-24시간 출력 형태	[00,23]
%I	시간(hour)-12시간 출력 형태	[01,12]
%j	1년 중 누적 날짜	[001,366]
%m	달	[01,12]
%M	분	[01,59]
%p	AM or PM	AM
%S	초	[00,61]
%U	1년 중 누적 주-일요일을 시작으로	[00,53]
%w	숫자로 된 요일	[0(일요일),6]
%W	1년 중 누적 주-월요일을 시작으로	[00,53]
%x	현재 설정된 로케일에 기반한 날짜 출력	06/01/01
%X	현재 설정된 로케일에 기반한 시간 출력	17:22:21
%Y	년도 출력	2001
%Z	시간대 출력	대한민국 표준시
%%	문자	%
%y	세기부분을 제외한 년도 출력	01
다음은 time.strftime을 사용하는 예이다.

>>> import time
>>> time.strftime('%x', time.localtime(time.time()))
'05/01/01'
>>> time.strftime('%c', time.localtime(time.time()))
'05/01/01 17:22:21'
time.sleep
time.sleep 함수는 주로 루프 안에서 많이 사용된다. 이 함수를 사용하면 일정한 시간 간격을 두고 루프를 실행할 수 있다. 다음의 예를 보자.

#sleep1.py
import time
for i in range(10):
    print(i)
    time.sleep(1)
위 예는 1초 간격으로 0부터 9까지의 숫자를 출력한다. 위 예에서 볼 수 있듯이 time.sleep 함수의 인수는 실수 형태를 쓸 수 있다. 즉, 1이면 1초, 0.5면 0.5초가 되는 것이다.

calendar
calendar는 파이썬에서 달력을 볼 수 있게 해주는 모듈이다.

calendar.calendar(연도)로 사용하면 그 해의 전체 달력을 볼 수 있다. 결과값은 달력이 너무길어 생략하겠다.

>>> import calendar
>>> print(calendar.calendar(2015))
calendar.prcal(연도)를 사용해도 위와 똑같은 결과값을 얻을 수 있다.

>>> calendar.prcal(2015)
다음의 예는 2015년 12월의 달력만 보여 준다.

>>> calendar.prmonth(2015, 12)
December 2015
Mo Tu We Th Fr Sa Su
      2  3  4  5  6
7  8  9  10 11 12 13
14 15 16 17 18 19 20
21 22 23 24 25 26 27
28 29 30 31
calendar.weekday
calendar 모듈의 또 다른 유용한 함수를 보자. weekday(연도, 월, 일) 함수는 그 날짜에 해당하는 요일 정보를 리턴한다. 월요일은 0, 화요일은 1, 수요일은 2, 목요일은 3, 금요일은 4, 토요일은 5, 일요일은 6이라는 값을 리턴한다.

>>> calendar.weekday(2015, 12, 31)
3
위의 예에서 2015년 12월 31일은 목요일임을 보여 준다.

calendar.monthrange
monthrange(연도, 월) 함수는 입력받은 달의 1일이 무슨 요일인지와 그 달이 며칠까지 있는지를 튜플 형태로 리턴한다.

>>> calendar.monthrange(2015,12)
(1, 31)
위의 예는 2015년 12월의 1일은 화요일이고, 이 달은 31일까지 있다는 것을 보여 준다.

날짜와 관련된 프로그래밍을 할 때 위의 2가지 함수는 매우 유용하게 사용된다.

random
random은 난수(규칙이 없는 임의의 수)를 발생시키는 모듈이다. random과 randint에 대해서 알아보자.

다음은 0.0에서 1.0 사이의 실수 중에서 난수값을 리턴하는 예를 보여 준다.

>>> import random
>>> random.random()
0.53840103305098674
다음 예는 1에서 10 사이의 정수 중에서 난수값을 리턴한다.

>>> random.randint(1, 10)
6
다음 예는 1에서 55 사이의 정수 중에서 난수값을 리턴한다.

>>> random.randint(1, 55)
43
random 모듈을 이용해서 재미있는 함수를 하나 만들어 보자.

# random_pop.py
import random
def random_pop(data):
    number = random.randint(0, len(data)-1)
    return data.pop(number)

if __name__ == "__main__":
    data = [1, 2, 3, 4, 5]
    while data: print(random_pop(data))
결과값:
2 
3 
1 
5 
4
위의 random_pop 함수는 리스트의 요소 중에서 무작위로 하나를 선택하여 꺼낸 다음 그 값을 리턴한다. 물론 꺼내진 요소는 pop 메서드에 의해 사라진다.

random_pop 함수는 random 모듈의 choice 함수를 사용하여 다음과 같이 좀 더 직관적으로 만들 수도 있다.

def random_pop(data):
    number = random.choice(data)
    data.remove(number)
    return number
random.choice 함수는 입력으로 받은 리스트에서 무작위로 하나를 선택하여 리턴한다.

리스트의 항목을 무작위로 섞고 싶을 때는 random.shuffle 함수를 이용하면 된다.

>>> import random
>>> data = [1, 2, 3, 4, 5]
>>> random.shuffle(data)
>>> data
[5, 1, 3, 4, 2]
>>>
[1, 2, 3, 4, 5]라는 리스트가 shuffle 함수에 의해 섞여서 [5, 1, 3, 4, 2]로 변한 것을 확인할 수 있다.

webbrowser
webbrowser는 자신의 시스템에서 사용하는 기본 웹 브라우저가 자동으로 실행되게 하는 모듈이다. 아래의 예제는 웹 브라우저를 자동으로 실행시키고 해당 URL인 http://google.com으로 가게 해준다.

>>> import webbrowser
>>> webbrowser.open("http://google.com")
webbrowser의 open 함수는 웹 브라우저가 이미 실행된 상태이면 입력 주소로 이동한다. 만약 웹 브라우저가 실행되지 않은 상태이면 새로 웹 브라우저를 실행한 후 해당 주소로 이동한다.

open_new 함수는 이미 웹 브라우저가 실행된 상태이더라도 새로운 창으로 해당 주소가 열리도록 한다.

>>> webbrowser.open_new("http://google.com")
namedtuple
namedtuple이란 파이썬 자료형 중 하나로 튜플이지만 속성으로 그 값에 접근할 수 있게 해 주는 자료형이다.

먼저 다음과 같은 프로그램을 생각해 보자.

a = ("홍길동", 25, "Programmer")
b = ("김철수", 32, "Manager")
c = ("김영희", 41, "Designer")

for person in [a, b, c]:
    print("이름:%s" % person[0])
    print("나이:%s" % person[1])
    print("직업:%s" % person[2])
a, b, c라는 튜플을 순서대로 출력하는 프로그램이다. 각 튜플은 차례대로 이름, 나이, 직업을 요소로 갖는 튜플이다.

튜플의 요소에 접근하기 위해서는 인덱싱만이 가능하므로 좀 더 편리한 접근을 위해 다음과 같이 개선이 가능하다.

class Person:
    def __init__(self, name, age, job):
        self.name = name
        self.age = age
        self.job = job

a = Person(name="홍길동", age=25, job="Programmer")
b = Person(name="김철수", age=32, job="Manager")
c = Person(name="김영희", age=41, job="Designer")

for person in [a, b, c]:
    print("이름:%s" % person.name)
    print("나이:%s" % person.age)
    print("직업:%s" % person.job)

튜플 대신 Person이라는 클래스를 생성하면 위 예처럼 인덱싱이 아닌 속성으로 접근할 수 있게 된다.

이번에는 좀 더 편리한 namedtuple을 이용한 방법을 알아보도록 하자. namedtuple을 사용하면 다음과 같이 작성할 수 있다.

from collections import namedtuple

Person = namedtuple("Person", ["name", "age", "job"])

a = Person(name="홍길동", age=25, job="Programmer")
b = Person(name="김철수", age=32, job="Manager")
c = Person(name="김영희", age=41, job="Designer")

for person in [a, b, c]:
    print("이름:%s" % person.name)
    print("나이:%s" % person.age)
    print("직업:%s" % person.job)
namedtuple을 이용하면 Person 클래스를 따로 만들지 않아도 비슷하게 동작하게 할 수 있다.

namedtuple의 첫번째 입력항목은 namedtuple의 자료형의 명칭(type name)이다. 보통 namedtuple로 생성되는 객체명과 동일하게 한다. 뒤에 따라오는 리스트는 Person이라는 namedtuple의 변수로 사용될 항목들이 된다.

namedtuple의 첫번째 입력항목은 namedtuple로 생성되는 객체의 클래스 타입을 의미한다.

>>> from collections import namedtuple
>>> Person = namedtuple("Person", ["name", "age", "job"])
>>> Person
<class '__main__.Person'>
>>> Person = namedtuple("Human", ["name", "age", "job"])
>>> Person
<class '__main__.Human'>
위 예를 보면 두개의 Person은 첫번째 입력항목만 제외하고 모두 같다. 사용하는 방법도 다를게 없다. 다만 생성된 객체의 클래스 타입이 다를 뿐이다.

namedtuple은 이름 그대로 tuple이기 때문에 다음과 같이 인덱싱으로도 역시 접근이 가능하다.

for person in [a, b, c]:
    print("이름:%s" % person[0])
    print("나이:%s" % person[1])
    print("직업:%s" % person[2])
단, namedtuple은 요소값을 변경할 수 없는(immutable) 튜플의 성격을 갖기 때문에 그 값을 변경할 수는 없다. 따라서 다음과 같은 코드는 오류가 발생하게 된다.

>>> from collections import namedtuple
>>> Person = namedtuple("Person", ["name", "age", "job"])
>>> a = Person(name="홍길동", age=25, job="Programmer")
>>> a.name = "고길동"
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
AttributeError: can't set attribute
defaultdict
우리가 좋아하는 다음과 같은 문장을 보자.

Life is too short, you need python
위 문장에서 각 문자(character)가 몇 개씩 있는지 알고 싶다면 어떻게 해야 할까?

딕셔너리를 이용하면 다음과 같은 코드를 만들 수 있을 것이다.

>>> a = 'Life is too short, you need python'
>>> d = dict()
>>> for c in a:
...     if c in d:
...         d[c] += 1
...     else:
...         d[c] = 1
... 
>>> d.items()
dict_items([('L', 1), ('i', 2), ('f', 1), ('e', 3), (' ', 6), ('s', 2), ('t', 3), ('o', 5), ('h', 2), ('r', 1), ('y', 2), ('u', 1), ('n', 2), ('d', 1), ('p', 1)])
위 코드 작성시 주의 할 점은 if c in d: 구문 처럼 딕셔너리 d에 해당 키 값이 있는지 조사하는 부분이다. 해당 키 값이 이미 있을때는 값을 1만큼 증가시켜 주고 없을 경우에는 1이라는 초기 값을 세팅해 주었다.

이렇듯 딕셔너리의 키에 해당되는 값을 추가하거나 변경할 경우에는 위처럼 방어적인 코드가 반드시 필요하다. defaultdict를 이용하면 이러한 방어적인 코드를 작성해야 하는 스트레스를 줄여줄 수 있다.

defaultdict를 이용하면 위 코드를 다음과 같이 작성할 수 있다.

>>> from collections import defaultdict
>>> a = 'Life is too short you need python'
>>> d = defaultdict(int)
>>> for c in a:
...     d[c] += 1
... 
>>> d.items()
dict_items([('L', 1), ('i', 2), ('f', 1), ('e', 3), (' ', 6), ('s', 2), ('t', 3), ('o', 5), ('h', 2), ('r', 1), ('y', 2), ('u', 1), ('n', 2), ('d', 1), ('p', 1)])
d 객체에 키가 있는지 조사하여 방어적으로 코딩했던 부분을 생략할 수 있음을 알 수 있다. d = defaultdict(int) 라는 문장은 d라는 defaultdict 객체의 디폴트 값은 int라는 의미이다. 따라서 d에 해당 키 값이 없을 경우 자동적으로 int의 초기값인 0이라는 값이 저장되게 된다.

이번에는 int가 아닌 list를 디폴트 값으로 활용하는 예를 보자.

>>> s = [('a', 100), ('b', 200), ('c', 300), ('a', 150), ('c', 120)]
>>> d = defaultdict(list)
>>> for k, v in s:
...     d[k].append(v)
... 
>>> d.items()
dict_items([('a', [100, 150]), ('b', [200]), ('c', [300, 120])])
딕셔너리의 value에 초기값으로 빈 리스트가 올 수 있도록 d = defaultdict(list)와 같이 선언 해 주어 깔끔한 코드를 작성할 수 있는 모습이다.

[스레드를 다루는 threading 모듈]

컴퓨터에서 동작하고 있는 프로그램을 프로세스(Process)라고 한다. 보통 1개의 프로세스는 1가지 일만 하지만, 스레드를 이용하면 한 프로세스 내에서 2가지 또는 그 이상의 일을 동시에 수행하게 할 수 있다. 간단한 예제로 설명을 대신하겠다.

import threading
import time

def say(msg):
    while True:
        time.sleep(1)
        print(msg)

for msg in ['you', 'need', 'python']:
    t = threading.Thread(target=say, args=(msg,))
    t.daemon = True
    t.start()

for i in range(100):
    time.sleep(0.1)
    print(i)
첫 번째 for문에서 ['you', 'need', 'python']이라는 리스트의 요소 개수만큼 스레드가 생성되고, 생성된 스레드는 say 메서드를 수행하게 되어 1초에 한 번씩 입력으로 받은 msg 변수값을 리턴한다. 두 번째 for문은 매 0.1초마다 0부터 99까지 숫자를 출력하는데, 바로 이 부분이 메인 프로그램이 되며 이 메인 프로그램이 종료되는 순간 생성된 스레드들도 함께 종료가 된다. t.daemon = True와 같이 daemon 플래그를 설정하면 주 프로그램이 종료되는 순간 데몬 스레드도 함께 종료된다.

위 예제의 실행 결과값은 다음과 비슷할 것이다.

0
you
need
python
1
2
3
4
5
6
7
8
9
10
you
need
python
11
12
...
위 결과값에서 볼 수 있듯이 스레드는 메인 프로그램과는 별도로 실행되는 것을 확인할 수 있다.

이러한 스레드 프로그래밍을 가능하게 해주는 것이 바로 threading.Thread 클래스이다. 이 클래스의 첫번째 인수는 함수 이름을, 두 번째 인수는 첫 번째 인수인 함수의 입력 변수를 받는다. 다음과 같이 스레드를 클래스로 정의해도 동일한 결과를 얻을 수 있다.

import threading
import time

class MyThread(threading.Thread):
    def __init__(self, msg):
        threading.Thread.__init__(self)
        self.msg = msg
        self.daemon = True

    def run(self):
        while True:
            time.sleep(1)
            print(self.msg)

for msg in ['you', 'need', 'python']:
    t = MyThread(msg)
    t.start()

for i in range(100):
    time.sleep(0.1)
    print(i)
스레드를 클래스로 정의할 경우에는 __init__ 메서드에서 threading.Thread.__init__(self)와 같이 부모 클래스의 생성자를 반드시 호출해야 한다. MyThread로 생성된 객체의 start 메서드를 실행할 때는 MyThread 클래스의 run 메서드가 자동으로 수행된다.

연습문제
(연습문제 풀이 : https://wikidocs.net/17090#05-6)


[문제1] sys.argv

다음과 같이 실행할 때 입력 값을 모두 더하여 출력하는 스크립트(c:\doit\myargv.py)를 작성하시오.

(힌트. 외장함수 sys.argv 를 이용해 보자)

C:\> cd doit
C:\doit> python myargv.py 1 2 3 4 5 6 7 8 9 10
55

[문제2] os

os 모듈을 이용하여 다음과 같이 동작하도록 코드를 작성해 보자.

C:\doit 이라는 디렉토리로 이동한다.
dir 명령을 실행하고 그 결과를 변수에 담는다.
dir 명령의 결과를 출력한다.

[문제3] glob

glob 모듈을 이용하여 C:\doit 디렉토리의 파일중 확장자가 py인 파일만 출력하는 프로그램을 작성하시오.


[문제4] time

time 모듈을 이용하여 현재 날짜와 시간을 다음과 같은 형식으로 출력하시오.

YYYY/MM/DD HH:mm:ss (YYYY:년도, MM:월, DD:일, HH:24시간 기준시간, mm:분, ss:초)
출력 예

2018/04/03 17:20:32

[문제5] random

random모듈을 이용하여 로또번호(1~45 사이의 숫자 6개)를 생성하시오. (단, 중복된 숫자가 있으면 안됨)


[문제6] namedtuple

다음 프로그램을 Student 클래스 대신 namedtuple을 이용하여 재 구성 하시오.

class Student:
    def __init__(self, name, score):
        self.name = name
        self.score = score

a = Student("홍길동", 30)

print(a.name)
print(a.score)