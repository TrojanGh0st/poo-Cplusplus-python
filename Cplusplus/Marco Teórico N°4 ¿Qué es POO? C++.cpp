/*4. ¿QUÉ ES LA POO Y POR QUÉ ES IMPORTANTE? 
Un ejemplo de la POO en código es la creación de una clase "Persona" en el lenguaje de
programación Java -> C++:
*/

#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad) : nombre(nombre), edad(edad) {}

    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    void setEdad(int edad) {
        this->edad = edad;
    }

    string getNombre() {
        return this->nombre;
    }

    int getEdad() {
        return this->edad;
    }
};

int main() {
    Persona P01("Pablo", 10);
    
    cout << "Nombre: " << P01.getNombre() << endl;
    cout << "Edad: " << P01.getEdad() << endl;

    P01.setNombre("Pedro");
    P01.setEdad(25);

    cout << "Nombre modificado: " << P01.getNombre() << endl;
    cout << "Edad modificado: " << P01.getEdad() << endl;

    return 0;
}
