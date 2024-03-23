#Ejemplos de código en lenguajes de programación que soportan la POO incluyen:
#En C++, se pueden definir clases que encapsulan datos y funciones miembro, y se pueden crear
#objetos que son instancias de esas clases. Por ejemplo:

class Punto:
    def __init__(self, x=0.0, y=0.0):
        self.x = x
        self.y = y

    def desplazar(self, dx, dy):
        self.x += dx
        self.y += dy

if __name__ == "__main__":

    p = Punto()

    p.x = 1.0
    p.y = 2.0

    # Llamada a la función miembro para desplazar el punto
    p.desplazar(0.5, 1.0)

    # Impresión de los datos miembro después de desplazar el punto
    print("Coordenadas del punto después de desplazar: ({}, {})".format(p.x, p.y))
