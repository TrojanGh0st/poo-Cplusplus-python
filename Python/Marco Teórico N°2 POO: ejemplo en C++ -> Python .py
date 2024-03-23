#Programación orientada a objetos: utiliza objetos y clases para encapsular datos y
#comportamientos, y proporciona un alto nivel de reutilización de código. Un ejemplo en Java -> Python sería:

class Coche:
    def __init__(self):
        self.modelo = "" 
        self.anio = 0    

    def acelerar(self):
        print("El coche", self.modelo, "está acelerando.")

if __name__ == "__main__":
    Coche01 = Coche()
    Coche01.modelo = "Toyota"
    Coche01.anio = 2001

    Coche01.acelerar()
