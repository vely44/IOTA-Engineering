
import Tkinter
import tkMessageBox
import os
import paho.mqtt.client as paho
#################
def function1():
    tkMessageBox.showinfo("Info","Roomba")
    client.publish("ESEiot/1819sep","function1")
def function2():
    tkMessageBox.showinfo("Info","Roomba")
    client.publish("ESEiot/1819sep","function2")
def function3():
    tkMessageBox.showinfo("Info","Roomba")
    client.publish("ESEiot/1819sep","function3")
def function4():
    tkMessageBox.showinfo("Info","Roomba")
    client.publish("ESEiot/1819sep","function4")



client = paho.Client()
client.connect("broker.hivemq.com")

root = Tkinter.Tk()
topframe = Tkinter.Frame(root)
topframe.pack()
bottomframe = Tkinter.Frame(root)
bottomframe.pack()
lastframe=Tkinter.Frame(root)
lastframe.pack()
root.title('Roomba Control')
#topframe.title('Roomba Check')

#strvar = "None"

button1 = Tkinter.Button(topframe, text = "Button1", command = function1)
button2 = Tkinter.Button(topframe, text = "Button2", command = function2)
button3 = Tkinter.Button(topframe, text = "Button3", command = function3)
button4 = Tkinter.Button(topframe, text = "Button4", command = function4)

button5 = Tkinter.Button(lastframe, text = "Confirm", command = function4)
button6 = Tkinter.Button(lastframe, text = "Confirm", command = function4)

Tkinter.Label(bottomframe, text='Data1').grid(row=0) 
Tkinter.Label(bottomframe, text='Data2').grid(row=1) 
e1 = Tkinter.Entry(bottomframe) 
e2 = Tkinter.Entry(bottomframe) 
e1.grid(row=0, column=1) 
e2.grid(row=1, column=1) 

button1.pack()
button2.pack()
button3.pack()
button4.pack()
button5.pack()
button6.pack()

#user_input = strvar.get()


root.mainloop()
