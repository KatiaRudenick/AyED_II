"""
Un año es bisiesto si es divisible por 4, excepto el último de cada siglo (aquel divisible por 100), salvo que este último sea divisible por 400.
"""
def es_bisiesto(anio):
    if anio % 4 == 0 and (anio % 100 != 0 or anio % 400 == 0):
        return True
    else:
        return False

anio = int(input("Ingrese un año: "))

if es_bisiesto(anio):
    print(f"{anio} es bisiesto")  #la expresión {anio} dentro del f-string se evalúa como el valor de la variable anio y se muestra por pantalla 
else:
    print(f"{anio} no es bisiesto")
