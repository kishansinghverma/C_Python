import datetime

dt=datetime.datetime.now()
print(dt.year,",",dt.strftime("%B"), ",",dt.strftime("%d"),",", dt.strftime("%A"))
print(dt.hour,":", dt.minute,":", dt.second)
print("Good Evening") if(dt.hour>=12) else print("Good Morning")




    
