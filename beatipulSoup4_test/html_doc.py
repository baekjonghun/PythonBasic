from bs4 import BeautifulSoup


html_doc = """
<html><head><title>The Dormouse's story</title></head>

<p class="title"><b>The Dormouse's story</b></p>

<p class="story">Once upon a time there were three little sisters; and their names were
<a href="http://example.com/elsie" class="sister" id="link1">Elsie</a>,
<a href="http://example.com/lacie" class="sister" id="link2">Lacie</a> and
<a href="http://example.com/tillie" class="sister" id="link3">Tillie</a>;
and they lived at the bottom of a well.</p>

<p class="story">...</p>
"""



soup  = BeautifulSoup(html_doc)

print(soup.p.attrs)


print(soup.title)
# <title>The Dormouse's story</title>
# string type
print(soup.title.string)
# 속성의 value 값
print(soup.p['class'])

# 태그
# soup = BeautifulSoup('<b class="boldest">Extremely bold</b>')
# tag = soup.b
# type(tag)

# 문자열 편집
# tag.string.replace_with("No longer bold")
# tag
# <blockquote>No longer bold</blockquote>


# 공백 제거
# 이런 문자열들은 공백이 쓸데 없이 많은 경향이 있으므로, 대신에 .stripped_strings 발생자를 사용해 제거해 버릴 수 있다:


# .contents 그리고 .children  직계 후손만 가리킨다.
# .parent 한칸 위로
# .parents 위로 탐색


# 옆으로 같은 레벨끼리 의 이동
# sibling_soup.b.next_sibling
# <c>text2</c>

# sibling_soup.c.previous_sibling
# <b>text1</b>


# element 상세 이동 태그 포함.
# .next_element 그리고 .previous_element
#
# soup.find_all(text="Elsie")
# # [u'Elsie']
#
# soup.find_all(text=["Tillie", "Elsie", "Lacie"])
# # [u'Elsie', u'Lacie', u'Tillie']
#
# soup.find_all(text=re.compile("Dormouse"))
# [u"The Dormouse's story", u"The Dormouse's story"]
#
# def is_the_only_string_within_a_tag(s):
#     """Return True if this string is the only child of its parent tag."""
#     return (s == s.parent.string)
#
# soup.find_all(text=is_the_only_string_within_a_tag)
# # [u"The Dormouse's story", u"The Dormouse's story", u'Elsie', u'Lacie', u'Tillie', u'...']

#
#
#
# 예쁘게-인쇄하기
# prettify()
#
#
#
# 문서의 일부만을 해석하기
# 뷰티플수프를 사용하여 문서에서 <a> 태그를 살펴보고 싶다고 해보자.
# 전체 문서를 해석해서 훓어가며 <a> 태그를 찾는 일은 시간 낭비이자 메모리 낭비이다.
#  처음부터 <a> 태그가 아닌 것들을 무시하는 편이 더 빠를 것이 분명하다. SoupStrainer 클래스는 문서에
#  어느 부분을 해석할지 고르도록 해준다. 그냥 SoupStrainer를 만들고 그것을 BeautifulSoup 구성자에 parse_only 인자로 건네면 된다.

# (이 특징은 html5lib 해석기를 사용중이라면 작동하지 않음을 주목하자. html5lib을 사용한다면, 어쨋거나 문서 전체가 해석된다. 이것은 html5lib가 작업하면서 항상 해석 트리를 재정렬하기 때문이다. 문서의 일부가 실제로 해석 트리에 맞지 않을 경우, 충돌을 일으킨다. 혼란을 피하기 위해, 아래의 예제에서 뷰티플수프에게 파이썬의 내장 해석기를 사용하라고 강제하겠다.)
