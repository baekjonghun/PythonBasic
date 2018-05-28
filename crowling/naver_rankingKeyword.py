# -*- coding:utf-8 -*- 
# 작성자:백종훈
# 작성일:2018-05-27
#네이버 순위 1 ~ 10 까지의 랭킹 순위 

import urllib.request as dl
from bs4 import BeautifulSoup
from mpmath import limit

a = dl.urlopen("http://www.naver.com")
html = a.read().decode("utf-8")


soup = BeautifulSoup(html , 'html.parser')

temp = soup.find_all(class_='ah_k' ,limit = 10)


num = 0

for i in temp:
    num += 1
    print(num , ":" , i.string)


