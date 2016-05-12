#coding=utf-8

import json
import urllib

title = "Python书籍"
query = {
  "q": "python",
  "field":"id,title,image",
  "count": 20,
}
doubanapi= "https://api.douban.com/v2/book/search"
requseturl = doubanapi + '?' + urllib.urlencode(query, 1)

print(title)
response = urllib.urlopen(requseturl)
contents = response.read()
text = contents.decode('utf8')
data = json.loads(text)

for book in data['books']:
  print book['title']
