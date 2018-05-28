# -*- coding:utf-8 -*- 
# 작성자:백종훈
# 작성일:2018-05-27
#제목:daum 금융 순위  1 ~3위 까지 데이터 수집


import urllib.request as dl
from bs4 import BeautifulSoup

a = dl.urlopen("http://finance.daum.net/")
html = a.read().decode("utf-8")


result = [] ##데이터 처리를 위한 리스트 

#처음부터 범위를 확 줄인다.
soup = BeautifulSoup(html , 'html.parser').find(id  = 'topMyListNo1')

#Name
bank_name = soup.find_all(class_ = 'cost num' , limit = 3)
#number
bank_cost = soup.find_all('a' , limit = 3)


#string 값으로 3개씩 데이터 가공 
for i in range(0,3):
    subStr = bank_name[i].string + ':' + bank_cost[i].string 
    result.append(subStr)




#최종 출력 
print(result)
    
