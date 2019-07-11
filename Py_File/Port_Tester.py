import urllib.request
import threading
def test(url, i):
    try:
        req = urllib.request.Request(url)
        resp = urllib.request.urlopen(req)
        respData = resp.read()
        print(i, "Available")
    except:
        print(i, "Not Available")

for i in range(1, 65537):
    url = 'http://portquiz.net:'+str(i)
    threading.Thread(target=test, args=(url, i,)).start()