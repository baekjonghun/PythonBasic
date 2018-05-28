# -*- coding:utf-8 -*- 
# 작성자:백종훈
# 작성일:2018-05-28
#제목:검색된 이미지 다운로드 
import sys, io
import urllib.request as dl
from bs4 import BeautifulSoup

# 
# print('beal')
# url = "https://i.ytimg.com/vi/dHmyY0iX0ww/hqdefault.jpg"
# dl.urlretrieve(url, 'cat.jpg')


a = dl.urlopen("https://www.google.co.kr/search?tbm=isch&source=hp&biw=1920&bih=949&ei=W40KW7-GOsWD8wX5zKOgBw&q=%EA%B3%A0%EC%96%91%EC%9D%B4&oq=%EA%B3%A0%EC%96%91%EC%9D%B4&gs_l=img.3..35i39k1j0l9.3475.5653.0.5884.14.12.2.0.0.0.149.1072.2j8.10.0....0...1ac.1j4.64.img..4.10.897.0...0.IpcXaRQYRb8#imgrc=_")
html = a.read().decode("utf-8")



soup = BeautifulSoup(html , 'html.parser')


print(soup) 