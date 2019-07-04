import paho.mqtt.client as mqtt
import time

def on_connect(client, userdata, flag, rc):
    print("Connected")

def on_message(client, userdata, msg):
    print(msg.payload.decode('utf-8'))
    '''
    print(msg.topic,  str(msg.payload.decode('utf-8')))
    if(msg.topic=="get/fan"):
        client.publish("post/fan", str(msg.payload.decode('utf-8')), retain=True);
    else:
        client.publish("post/bulb", str(msg.payload.decode('utf-8')), retain=True);
'''
def on_subscribe(client, userdata, mid, granted_qos):
    print("Subscribed")


client = mqtt.Client()
#client.username_pw_set(username="kishan",password="root")

client.on_connect = on_connect
client.on_message = on_message
#client.connect("klinux.tk", 90,0)
client.connect("klinux.tk")

client.subscribe("test", qos=0)
client.on_subscribe=on_subscribe

client.loop_stop()
client.loop_start()
time.sleep(5)
client.loop_stop()

