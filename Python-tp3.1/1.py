class Calculadora:
    # Atributo de clase
    nombre = "Calculadora"

    def __init__(self):
        # Atributos de instancia
        self.resultado = 0

    # Método de instancia
    def sumar(self, a, b):
        self.resultado = a + b

    # Método de instancia
    def restar(self, a, b):
        self.resultado = a - b

    # Método de clase
    @classmethod
    def obtener_nombre(cls):
        return cls.nombre

    # Método estático
    @staticmethod
    def multiplicar(a, b):
        return a * b

# Crear una instancia de la clase Calculadora
calculadora = Calculadora()

# Utilizar métodos de instancia
calculadora.sumar(5, 3)
print(calculadora.resultado)  # Salida: 8

calculadora.restar(10, 4)
print(calculadora.resultado)  # Salida: 6

# Utilizar método de clase
print(Calculadora.obtener_nombre())  # Salida: Calculadora

# Utilizar método estático
resultado_multiplicacion = Calculadora.multiplicar(2, 3)
print(resultado_multiplicacion)  # Salida: 6
