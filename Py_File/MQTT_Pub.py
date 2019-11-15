import paho.mqtt.client as mqtt
import time

client = mqtt.Client()
host="139.59.33.112"
port=90
client.connect(host,port,60)

print(time.time())
client.publish("topic/test", str(time.time()))
client.disconnect();
print("Done")
