#Programación orientada a objetos:
#Se enfoca en el uso de objetos y clases para encapsular datos y comportamientos.
#Proporciona un alto nivel de reutilización de código a través de la herencia y la composición.
#Ejemplo en Java

class Persona:
    def __init__(self, nombre="", edad=0):
        self.nombre = nombre
        self.edad = edad

    def saludar(self):
        print("Hola, soy", self.nombre, "y tengo", self.edad, "años.")


class Estudiante(Persona):
    def __init__(self, nombre="", edad=0, carrera=""):
        super().__init__(nombre, edad)
        self.carrera = carrera

    def estudiar(self):
        print(self.nombre, "está estudiando", self.carrera + ".")


if __name__ == "__main__":
    P01 = Persona()
    P01.nombre = "Pablo"
    P01.edad = 10
    print("Nombre:", P01.nombre)
    print("Edad:", P01.edad)
    P01.saludar()

    E01 = Estudiante()
    E01.nombre = "Esteban"
    E01.edad = 20
    E01.carrera = "Ingeniería"
    print("Nombre:", E01.nombre)
    print("Edad:", E01.edad)
    E01.saludar()
    E01.estudiar()

