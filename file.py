import paho.mqtt.client as mqtt 
import time
import pprint
broker = "test.mosquitto.org"


#Functions
def on_log(client,userdata,level,buf):
    pprint("log:"+buf)
    return;

def on_connect(client,userdata,flags,rc):
    if rc==0:
        pprint("Connect ok")
    else:
        pprint("bad connection RC =",rc)




client = mqtt.Client("dani")

client.on_connect=on_connect
client.on_log=on_log

pprint("Connect to broker",broker)

client.connect(broker)
client.loop_start()
time.sleep(4)
client.loop_stop()
client.disconnect()
