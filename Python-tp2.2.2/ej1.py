def draw_rectangle(anchura, altura, caracter):
    for i in range(altura): #La función range(altura) genera una secuencia de números que va desde 0 hasta altura - 1 por lo q el codigo se ejecuta altura veces
        for j in range(anchura):
            print(caracter, end='')
        print()

anchura = int(input("Ingrese la anchura del rectángulo: "))
altura = int(input("Ingrese la altura del rectángulo: "))
caracter = input("Ingrese el carácter a utilizar en el dibujo: ")

draw_rectangle(anchura, altura, caracter)
