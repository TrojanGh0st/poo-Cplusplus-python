#include <iostream>
#include <string>
using namespace std;

class Coche {
public:
    string modelo;  
    int anio;       

    void acelerar() {
        cout << "El coche " << modelo << " está acelerando." << endl;
    }

};

int main() {
    
    Coche Coche01;
    Coche01.modelo = "Toyota";
    Coche01.anio = 2001;

    Coche01.acelerar();

    return 0;
}
