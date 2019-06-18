import zmq
from iota import TryteString

context = zmq.Context()
socket = context.socket(zmq.SUB)
socket.connect('tcp://zmq.devnet.iota.org:5556')
socket.subscribe('tx')

while True:
    print ("Waiting for events from the node")
    message = socket.recv()
    data = message.split()
    print ("Transaction Address: ", data[2])
    print ("Value: ", data[1])
    trytes=TryteString(data[1])
    #message_trytes = trytes.decode()
    print("Decoded:",trytes)
    
