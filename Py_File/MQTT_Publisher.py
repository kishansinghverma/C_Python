import paho.mqtt.client as mqtt

client = mqtt.Client()
client.username_pw_set(username="kishan",password="root")
client.connect("klinux.tk",90,0)
while True:
    client.publish("post/test", input(), retain=True);
client.disconnect();
