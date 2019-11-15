import paho.mqtt.client as mqtt
import time


def on_connect(client, userdata, flags, rc):
    client.subscribe("topic/test")
    print("Connected with result code " + str(rc))


def on_message(client, userdata, msg):
    current = time.time()
    print("Current Time:", current)
    recieved = eval(msg.payload.decode())
    print("Recieved Time: ", recieved)
    print("Delay(ms): ", (current - recieved))
    print(".........................", end="\n\n")


client = mqtt.Client()
host = "139.59.33.112"
port = 90
client.connect(host, port, 60)

client.on_connect = on_connect
client.on_message = on_message
client.loop_forever()
