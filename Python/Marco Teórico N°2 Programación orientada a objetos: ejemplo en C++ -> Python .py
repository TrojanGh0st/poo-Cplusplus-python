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
