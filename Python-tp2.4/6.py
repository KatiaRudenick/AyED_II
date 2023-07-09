from functools import reduce

print()

numbers = [1, 2, 3, 4, 5]
squared = map(lambda x: x**2, numbers) #se eleva al cuadrado
print("Los cuadrados de los números de la lista son: " + str(list(squared)))

print()

num = (2, 8, 3, 10, 6, 4, 7)
result = len(list(filter(lambda x: x > 5, num)))
print("Cantidad de elementos mayores a 5:", result)

print()

numeros = (9, 8, 3, 10, 6, 4, 7, 1, 16)
cantidad = reduce(lambda acc, x: acc + 1 if x > 5 else acc, numeros, 0) # acc (acumulador), x (cada elemento de la tupla), el tercer argumento es el valor inicial del acumulador, que es 0 
"""
Si x es mayor a 5, se suma 1 al acumulador (acc).
Si x no es mayor a 5, se mantiene el valor actual del acumulador.
"""
print("Cantidad de elementos mayores a 5:", cantidad)

