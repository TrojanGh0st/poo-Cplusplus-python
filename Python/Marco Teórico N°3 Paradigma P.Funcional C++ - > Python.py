#Programación funcional:
#Se enfoca en la evaluación de funciones matemáticas puras, sin efectos secundarios y sin estado
#mutable.
#Se utiliza la recursión y la composición de funciones para crear soluciones más complejas.
#Ejemplo en Python:


def suma(a, b):
    return a + b

def resta(a, b):
    return a - b

def operar(f, a, b):
    return f(a, b)

resultado = operar(suma, 5, 3)
print(resultado)
resultado = operar(resta, 5, 3)
print(resultado)
