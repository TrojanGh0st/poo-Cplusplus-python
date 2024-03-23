/*Ejemplos de código en lenguajes de programación que soportan la POO incluyen:
En C++, se pueden definir clases que encapsulan datos y funciones miembro, y se pueden crear
objetos que son instancias de esas clases. Por ejemplo:*/

#include <iostream>
using namespace std;

class Punto {
public:
    double x, y;

    void desplazar(double dx, double dy) {
        x += dx;
        y += dy;
    }
};

int main() {
    Punto p;

    p.x = 1.0;
    p.y = 2.0;

    p.desplazar(0.5, 1.0);

    cout << "Coordenadas del punto después de desplazar: (" << p.x << ", " << p.y << ")" << endl;

    return 0;
}
