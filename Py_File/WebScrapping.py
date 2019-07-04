import urllib.request
import re

url = 'https://www.randomlists.com/random-names'

req = urllib.request.Request(url)
resp = urllib.request.urlopen(req)
respData = resp.read()
'''
numbers=re.findall('\+91............', str(respData))
mails=re.findall('[A-Za-z0-9]+@[A-Za-z0-9.]+\.[A-Za-z]{2,4}', str(respData))
for x in numbers:
    print(x)

for x in mails:
    print(x)
'''
names=re.findall('(([a-zA-Z]{5})+\s+[a-zA-Z]{5})',str(respData))
for x in names:
    print(x)


