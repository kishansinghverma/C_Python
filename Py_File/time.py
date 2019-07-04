import time
time=int(time.time())
year=int((time/(60*60*24*30*12)))
month=int(((time/(60*60*24*30))%12))
day=int(((time/(60*60*24))%30))
hour=int(((time/(60*60))+5)%24)
second=time%60
minute=int((time/60)+30)%60

print(year+1970,":",month,":",day,":",hour+1,":",minute,":",second)

