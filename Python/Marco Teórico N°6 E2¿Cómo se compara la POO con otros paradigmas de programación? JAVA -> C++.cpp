#En Java, se pueden definir clases y objetos de manera similar a C++. Además, Java también tiene
#interfaces, que son como clases abstractas que sólo definen los métodos que deben ser
#implementados por clases concretas. Por ejemplo:
#JAVA - Python

import math

# Interfaz Forma
class Forma:
    def area(self):
        pass

    def perimetro(self):
        pass

# Clase Circulo que implementa la interfaz Forma
class Circulo(Forma):
    def __init__(self, r):
        self.radio = r

    # Implementación del método area para calcular el área del círculo
    def area(self):
        return math.pi * self.radio ** 2

    # Implementación del método perimetro para calcular el perímetro del círculo
    def perimetro(self):
        return 2 * math.pi * self.radio

if __name__ == "__main__":
    # Creación de un objeto Circulo
    c = Circulo(2.0)

    # Uso de la interfaz Forma para acceder a los métodos area y perimetro del círculo
    f = c
    a = f.area()
    p = f.perimetro()

    # Impresión del área y el perímetro del círculo
    print("Area del circulo:", a)
    print("Perimetro del circulo:", p)
