/*Programación funcional:
Se enfoca en la evaluación de funciones matemáticas puras, sin efectos secundarios y sin estado
mutable.
Se utiliza la recursión y la composición de funciones para crear soluciones más complejas.
Ejemplo en Python:* - > C++*/

#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int operar(int (*f)(int, int), int a, int b) {
    return f(a, b);
}

int main() {
    int resultado = operar(suma, 5, 3);
    cout << resultado << endl;
    resultado = operar(resta, 5, 3);
    cout << resultado << endl;

    return 0;
}

