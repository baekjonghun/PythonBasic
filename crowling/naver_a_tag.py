# -*- coding:utf-8 -*- 
# 작성자:백종훈
# 작성일:2018-05-27
#naver a tag 긁어 오기 

import urllib.request as dl
from bs4 import BeautifulSoup

a = dl.urlopen("http://www.naver.com")
html = a.read().decode("utf-8")


soup = BeautifulSoup(html , 'html.parser')

temp = soup.find_all('a')

num = 0
 

for i in temp:
    num += 1
    print(num,":", i.string , ":",i.get('href'))

