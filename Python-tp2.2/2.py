def numeros():
    num1 = int(input("Ingrese un primer numero entero: "))
    num2 = int(input("Ingrese un segundo numero entero: "))

    print("Numeros pares:")
    for num in range(num1, num2 + 1):
        if num % 2 == 0:
            print(num)

    print("Numeros impares:")
    for num in range(num1, num2 + 1):
        if num % 2 != 0:
            print(num)

numeros()

print()
print()

def numero_positivo():
    while True:
        numero = int(input("Ingrese un número positivo: "))
        if numero > 0:
            break
        else:
            print("El número ingresado no es positivo. Ingrese un numero nuevamente.")
    
    print("Número positivo ingresado:", numero)

numero_positivo()

print()
print()

def solicitar_numeros():
    num1 = int(input("Ingrese el primer número entero: "))
    num2 = int(input("Ingrese el segundo número entero: "))

    while num2 <= num1:
        print("El segundo número debe ser mayor que el primero.")
        num2 = int(input("Ingrese el segundo número entero nuevamente: "))

    print("Primer número:", num1)
    print("Segundo número:", num2)

solicitar_numeros()

print()
print()

def numeros_consecutivos():
    num1 = int(input("Ingrese el primer número entero: "))
    num2 = int(input("Ingrese el segundo número entero: "))

    if num1 <= num2:
        numeros = list(range(num1, num2 + 1)) #uso la funcion range para crear lista de nros consecutivos entre n1 y n2
    else:
        numeros = list(range(num2, num1 + 1))

    print("Números consecutivos:")
    for num in numeros:
        print(num)

numeros_consecutivos()
