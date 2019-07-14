import urllib.request
import threading
import time
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
    time.sleep(0.3)