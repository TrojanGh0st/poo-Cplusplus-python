#¿QUÉ ES LA POO Y POR QUÉ ES IMPORTANTE? 
#Un ejemplo de la POO en código es la creación de una clase "Persona" en el lenguaje de
#programación Java -> Python:

class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    @property
    def nombre(self):
        return self._nombre

    @nombre.setter
    def nombre(self, nombre):
        self._nombre = nombre

    @property
    def edad(self):
        return self._edad

    @edad.setter
    def edad(self, edad):
        self._edad = edad

# Ejemplo de uso
P01 = Persona("Pablo", 10)

# Acceso a los atributos directamente
print("Nombre:", P01.nombre)
print("Edad:", P01.edad)

# Modificación de los atributos directamente
P01.nombre = "Pedro"
P01.edad = 25

print("Nombre modificado:", P01.nombre)
print("Edad modificado:", P01.edad)

