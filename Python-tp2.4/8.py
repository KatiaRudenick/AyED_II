archivo = open("archivo.txt", "a+")
archivo.write("Estoy aprendiendo Python")
archivo.close()

print()

archivo = open("archivo.txt", "r")

# Estado del archivo
print("Estado del archivo:", archivo.closed)

# Modo de apertura
print("Modo de apertura:", archivo.mode)

# Nombre del archivo
print("Nombre del archivo:", archivo.name)

# Codificación de caracteres
print("Codificación de caracteres:", archivo.encoding)

# Leer y mostrar el contenido del archivo
contenido = archivo.read()
print("Contenido del archivo:")
print(contenido)
archivo.close()

print()

with open("archivo2.txt", "a+") as archivo2:
    archivo2.write("Estoy aprendiendo Python")

print()

with open("archivo2.txt", "r") as archivo2:
    # Estado del archivo
    print("Estado del archivo:", archivo2.closed)

    # Modo de apertura
    print("Modo de apertura:", archivo2.mode)

    # Nombre del archivo
    print("Nombre del archivo:", archivo2.name)

    # Codificación de caracteres
    print("Codificación de caracteres:", archivo2.encoding)

    # Leer y mostrar el contenido del archivo
    contenido2 = archivo2.read()
    print("Contenido del archivo:")
    print(contenido2)
