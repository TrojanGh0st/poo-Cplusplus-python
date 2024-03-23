/*Programación orientada a objetos:
Se enfoca en el uso de objetos y clases para encapsular datos y comportamientos.
Proporciona un alto nivel de reutilización de código a través de la herencia y la composición.
Ejemplo en Java:*/

#include <iostream>
#include <string>
using namespace std;


class Persona {
public:
    string nombre;
    int edad;
};


class Estudiante : public Persona {
public:
    string carrera;
};

int main() {
    Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.carrera = "Ingeniería";

    cout << "Nombre: " << estudiante1.nombre << ", Edad: " << estudiante1.edad << ", Carrera: " << estudiante1.carrera << endl;

    Estudiante estudiante2;
    estudiante2.nombre = "Maria";
    estudiante2.edad = 22;
    estudiante2.carrera = "Medicina";

    cout << "Nombre: " << estudiante2.nombre << ", Edad: " << estudiante2.edad << ", Carrera: " << estudiante2.carrera << endl;

    return 0;
}
