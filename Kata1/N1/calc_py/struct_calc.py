import tkinter as tk
from tkinter import ttk

def hacerSuma():
    num1 = float(entryNumeroUno.get())
    num2 = float(entryNumeroDos.get())
    resultado = num1 + num2
    labelSumar.config(text=f"El resultado de la suma es de: {resultado}")

def hacerResta():
    num1 = float(entryNumeroUno.get())
    num2 = float(entryNumeroDos.get())
    resultado = num1 - num2
    labelRestar.config(text=f"El resultado de la resta es de: {resultado}")

def hacerDivision():
    num1 = float(entryNumeroUno.get())
    num2 = float(entryNumeroDos.get())
    try:
        resultado = num1 / num2
        labelDividir.config(text=f"El resultado de la division es de: {resultado}")
    except ZeroDivisionError:
        labelDividir.config(text=f"Division por 0 no es posible papasito")

def hacerMultiplicacion():
    num1 = float(entryNumeroUno.get())
    num2 = float(entryNumeroDos.get())
    resultado = num1 * num2
    labelMultiplicar.config(text=f"El resultado de la multiplicación es de: {resultado}")

ventana = tk.Tk()
ventana.title("Calculadora")
ventana.config(width=500, height=500)

labelNumeroUno = ttk.Label(ventana, text="Ingrese un numero:")
labelNumeroUno.place(x=20, y=20)
entryNumeroUno = ttk.Entry(ventana)
entryNumeroUno.place(x=140, y=20, width=160)

labelNumeroDos = ttk.Label(ventana, text="Ingrese un numero:")
labelNumeroDos.place(x=20, y=50)
entryNumeroDos = ttk.Entry(ventana)
entryNumeroDos.place(x=140, y=50, width=160)

labelSumar = ttk.Label(ventana, text="El resultado de la suma es de: n/a")
labelSumar.place(x=20, y=90)
botonSumar = ttk.Button(ventana, text="Sumar", command=hacerSuma)
botonSumar.place(x=400, y=90)

labelRestar = ttk.Label(ventana, text="El resultado de la resta es de: n/a")
labelRestar.place(x=20, y=130)
botonRestar = ttk.Button(ventana, text="Restar", command=hacerResta)
botonRestar.place(x=400, y=130)

labelDividir = ttk.Label(ventana, text="El resultado de la division es de: n/a")
labelDividir.place(x=20, y=170)
botonDividir = ttk.Button(ventana, text="Dividir", command=hacerDivision)
botonDividir.place(x=400, y=170)

labelMultiplicar = ttk.Label(ventana, text="El resultado de la multiplicación es de: n/a")
labelMultiplicar.place(x=20, y=210)
botonMultiplicar = ttk.Button(ventana, text="Multiplicar", command=hacerMultiplicacion)
botonMultiplicar.place(x=400, y=210)


ventana.mainloop()