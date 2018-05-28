# -*- coding:utf-8 -*-
# 작성자:백종훈
# 작성일:2018-05-28
#제목:daum keyword Top10 data insert~~


import urllib.request as dl
from bs4 import BeautifulSoup
import sys
import io

sys.stdout = io.TextIOWrapper(sys.stdout.detach(), encoding = 'utf-8')
sys.stderr = io.TextIOWrapper(sys.stderr.detach(), encoding = 'utf-8')

a = dl.urlopen("https://www.daum.net/")
html = a.read().decode("utf-8")

soup = BeautifulSoup(html , 'html.parser')

top10 = soup.find('ol' , class_ = 'list_hotissue issue_row').find_all(tabindex = '-1')



for(index , value) in  enumerate(top10 , 1):
    print('{}, {} , {} '.format(index , value.string , value))
