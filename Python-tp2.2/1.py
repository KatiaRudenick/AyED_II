lista = []  #Creo lista vacia que la voy a ir llenando con el for

for numero in range(1, 101): #el for va a agregar el rango de numeros q va del 0 al 100
    lista.append(numero)  # Agregar cada número a la lista. El append es una funcion de python que se utiliza para agregar un elemento al final de una lista. Toma un solo argumento, que es el elemento que se desea agregar a la lista.

print(lista)  # Imprimir la lista completa

print()
print()

meses = ("Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre")

numero = int(input("Ingresar un número entre 1 y {}: ".format(len(meses)))) #len(): para obtener la longitud de un objeto, devuelve el número de elementos en una secuencia
#la longitud en este caso es la longitud de la tupla, la cual es 12
if 1 <= numero <= len(meses):
    mes = meses[numero - 1]
    print("El mes {} es {}.".format(numero, mes)) # .format() método de las cadenas en Python que se utiliza para formatear y reemplazar valores dentro de una cadena. 
else:
    print("Error: El número ingresado está fuera del rango.")

print()
print()

numero = int(input("Ingrese un número: "))

tabla_multiplicar = []#se crea una lista vacia
for i in range(1, 11): #se multiplica por 1 hasta 10
    resultado = numero * i
    tabla_multiplicar.append(resultado)#se coloca al final de la lista cada resultado

print("La tabla de multiplicar de {} es: {}".format(numero, tabla_multiplicar))

print()
print()

contactos = {} #se crea un diccionario vacio

while True:
    nombre = input("Ingrese el nombre del usuario (o 'no' para terminar): ")
    
    if nombre == "no":
        break
    
    if nombre in contactos: #si el nombre ingresado coincide con alguno del diccionario te pide ingresar otro
        print("El nombre ya existe. Ingrese otro nombre.")
        continue
    
    telefono = input("Ingrese el teléfono: ")
    
    contactos[nombre] = telefono #se le asocia a la clave, q es el nombre, el valor que es el tel

print("Contactos guardados:")
for nombre, telefono in contactos.items(): #.items() devuelve una lista de pares clave-valor, donde cada par está representado como una tupla.
    print("Nombre: {}, Teléfono: {}".format(nombre, telefono))
