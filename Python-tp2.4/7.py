#Ejercicio 7.1

def division(dividendo, divisor):
    try:
        result = dividendo / divisor
        return result
    except ZeroDivisionError:
        print("Error: No se puede dividir entre cero")

result = division(27, 0)

#Ejercicio 7.2

print()

def mas_10(numero):
    try:
        resultado = numero + 10
        return resultado
    except TypeError:
        print("Error: Tipo de dato (cinco) incorrecto")


resultado = mas_10(5)
print("5 + 10 =", resultado)

resultado = mas_10("“cinco”")

#Ejercicio 7.3

print()

list = ["Gigi", "Bella", "Kendall", "Kylie", "Hailey"]
try:
    # Iterar más allá del límite del indice
    for i in range(len(list) + 1):
        print(list[i])
except IndexError:
    print("Error: Índice fuera de rango")


#Ejercicio 7.4

print()

diccionario = {"Nombre": "Bella", "Edad": 26, "Ciudad": "NYC"}

try:
    print(diccionario["Apellido"])
except KeyError:
    print("Error: Clave inexistente")


