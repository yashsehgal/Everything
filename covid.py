#This is a application made by abhra kanti dubey (14 yrs old and a big fan of code house)which tell the data of covid-19 cases
#For this you have install covid module
# pip install covid

import covid as co
from covid import Covid
import tkinter as tk
from tkinter import *
from importlib import reload
# from tkinter import ImageTk


covid=Covid()

active = covid.get_total_active_cases()
# Get Total Confirmed cases
confirmed = covid.get_total_confirmed_cases()
# Get Total Recovered cases
recovered = covid.get_total_recovered()
# Get Total Deaths
deaths = covid.get_total_deaths()

def refresh():
	screen()
	reload(co)
	reload(tk)

root=tk.Tk()
root.title("World Corona Tracker")
root.geometry("600x600")
root.configure(background="#01CBC6")
 #root.iconbitmap(r"C:\Users\PCL\Desktop\software\sars2.ico")


name=Label(
	root,
	text="World Corona Tracker by Abhra",
	font=("AR JULIAN",25,"normal"),
	width=50,
	bg="orange",
	fg="black",
	relief=SOLID,
	)
name.pack(padx=10,pady=15)

#img = ImageTk.PhotoImage(Image.open(r"C:\Users\PCL\Desktop\ABHRA\sars.png"))
#panel = tk.Label(root, image = img,relief=FLAT,bg="#01CBC6")
	# panel.pack(side = "bottom", fill = "both", expand = "yes")
#panel.pack()

a="Active Cases : "

active_cases=Label(
	root,
	text=(a + str(active)),
	font=("lemon",20,"normal"),
	width=50,
	bg="#FFF222",
	relief=SOLID
	)
active_cases.pack(padx=10,pady=13)

b="Confirmed Cases :"

confirmed_cases=Label(
	root,
	text=(b + str(confirmed)),
	font=("lemon",20,"normal"),
	width=50,
	bg="#FFF222",
	relief=SOLID
	).pack(padx=10,pady=13)

c="Recovered Cases : "

recovered_cases=Label(
	root,
	text=(c + str(recovered)),
	font=("lemon",20,"normal"),
	width=50,
	bg="#FFF222",
	relief=SOLID
	)
recovered_cases.pack(padx=10,pady=13)

d="Deaths : "

deaths_cases=Label(
	root,
	text=(d + str(deaths)),
	font=("lemon",20,"normal"),
	width=50,
	bg="#FFF222",
	relief=SOLID
	)
deaths_cases.pack(padx=10,pady=13)



re=Button(
	root,
	text="REFRESH",
	font=("Britannic Bold",17,"normal"),
	command=refresh,
	width=25,
	bg="red",
	fg="yellow",
	relief=SOLID
	).pack()

thanks=Label(
	root,
	text="  STAY SAFE AND STAY HEALTHY  ",
	font=("Verdana",20,"bold"),
	width=100,
	bg="white",
	fg="#FF362E",
	relief=SOLID,
	).pack(pady=10,padx=15)

root.mainloop()

