from bs4 import BeautifulSoup
from urllib import request
import sys, io

sys.stdout = io.TextIOWrapper(sys.stdout.detach() , encoding = 'utf-8')
sys.stdout = io.TextIOWrapper(sys.stdout.detach() , encoding = 'utf-8')

html = '''
<html>
<body>

<div>
<h1>1.강의 목적 </h1>

<ul>
  <li>파이썬 기초1</li>
  <li>파이썬 기초2</li>
  <li>파이썬 기초3</li>
</ul>

<h1>2.강의 일정</h1>
<h1>3.교재 목록</h1>
</div>

<a id ='link' href='www.daum.net' text='참고'>참고 사이트</a>

</body>

</html>
'''

soup = BeautifulSoup(html , 'html.parser')

# tag_h1 = soup.h1
# print('tag_h1' , tag_h1)

# #return 되는 자료 형이 다르다.
# print('tag_h1.string'  , type(tag_h1.string))
# print('tag_h1.get_text()'  , tag_h1.get_text())

select_use = soup.select('div#main > ul > li')
# print('select_use :' , type(select_use))
# print('select_use : ', select_use[0])

# 같은 형제의 3번째
# print(soup.select_one('li:nth-of-type(3)'))

a_tag = soup.select_one('body > a')
ptint('a_tag' , a_tag)
print("a_tag.get('title')"  , a_tag.get('title'))
print("a_age.get('href')"  , a_tag.get('href'))

print("a_tag['href'] : ' , a_tag['href'])
print("a_tag['title'] : ' , a_tag['title'])
print("a_tag.attrs: " , a_tag.attrs)

a_tag['title'] = '변경완료'
print('a_tag['title'] : ' , a_tag['title'])
print('a_tag.attrs:' , a_tag.attrs)

print(soup.get_text(strip=True))
