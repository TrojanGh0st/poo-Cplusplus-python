#En Python, se pueden definir clases y objetos de manera similar a Java, pero con una sintaxis más
#sencilla. Además, Python tiene herencia múltiple, que permite que una clase herede propiedades
#y comportamiento de varias clases diferentes. Por ejemplo:

class Animal:
    def __init__(self, nombre):
        self.nombre = nombre
        
    def hacer_sonido(self):
        pass
        
class Perro(Animal):
    def hacer_sonido(self):
        print("Guau!")
        
class Gato(Animal):
    def hacer_sonido(self):
        print("Miau!")

a = Perro("Firulais")
b = Gato("Garfield")

a.hacer_sonido()
b.hacer_sonido()
