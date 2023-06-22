numero_palabras = int(input("Ingrese el número de palabras que desea agregar a la lista: "))

lista_palabras = []

for i in range(numero_palabras):
    palabra = input(f"Ingrese la palabra {i+1}: ")
    lista_palabras.append(palabra)

print("La lista de palabras es:")
print(lista_palabras)
