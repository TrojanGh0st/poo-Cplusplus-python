/*Programación orientada a objetos:
Se enfoca en el uso de objetos y clases para encapsular datos y comportamientos.
Proporciona un alto nivel de reutilización de código a través de la herencia y la composición.
Ejemplo en Java: -> C++*/

#include <iostream>
#include <string>
using namespace std;

class Persona {
public:
    string nombre;
    int edad;
    
    Persona(string nombre = "", int edad = 0) : nombre(nombre), edad(edad) {}

    void saludar() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
    }
};

class Estudiante : public Persona {
public:
    string carrera;

    Estudiante(string nombre = "", int edad = 0, string carrera = "") : Persona(nombre, edad), carrera(carrera) {}

    void estudiar() {
        cout << nombre << " está estudiando " << carrera << "." << endl;
    }
};

int main() {
    Persona P01;
    P01.nombre = "Pablo";
    P01.edad = 10;
    cout << "Nombre: " << P01.nombre << endl;
    cout << "Edad: " << P01.edad << endl;
    P01.saludar();

    Estudiante E01;
    E01.nombre = "Esteban";
    E01.edad = 20;
    E01.carrera = "Ingeniería";
    cout << "Nombre: " << E01.nombre << endl;
    cout << "Edad: " << E01.edad << endl;
    E01.saludar();
    E01.estudiar();

    return 0;
}
