#Programación funcional: se enfoca en la evaluación de funciones matemáticas puras, sin efectos 
#secundarios y sin estado mutable. Un ejemplo en Python sería:

def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)
        
        
print("RESULTADO:", factorial(5)) 
print("RESULTADO:", factorial(0))
