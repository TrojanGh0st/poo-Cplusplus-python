/*En Java, se pueden definir clases y objetos de manera similar a C++. Además, Java también tiene
interfaces, que son como clases abstractas que sólo definen los métodos que deben ser
implementados por clases concretas. Por ejemplo:
JAVA -> C++ */

#include <iostream>
#include <cmath>
using namespace std;

class Forma {
public:
    virtual double area() const = 0;
    virtual double perimetro() const = 0;
};

class Circulo : public Forma {
private:
    double radio;

public:
    Circulo(double r) : radio(r) {}

    double area() const override {
        return M_PI * radio * radio;
    }

    double perimetro() const override {
        return 2 * M_PI * radio;
    }
};

int main() {
    Circulo c(2.0);

    const Forma* f = &c;
    double a = f->area();
    double p = f->perimetro();

    cout << "Area del circulo: " << a << endl;
    cout << "Perimetro del circulo: " << p << endl;

    return 0;
}
