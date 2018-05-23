

import urllib.request as url_re

##딕셔너리를 이용해보자.
url = 'http://img.phinf.pholar.net/20161028_103/1477614159294WiTzM_JPEG/p'
url01 = 'http://imgnews.naver.com/image/5033/2011/06/13/201106131502361001_1.jpg'
savename  = 'cat.jpg'
savename01 = 'bada.jpg'
url_re.urlretrieve(url , savename)
url_re.urlretrieve(url01 , savename01)

print('저장 완료')
