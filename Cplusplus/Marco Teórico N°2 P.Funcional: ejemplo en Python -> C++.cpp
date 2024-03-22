"Programación funcional: se enfoca en la evaluación de funciones matemáticas puras, sin efectos 
"secundarios y sin estado mutable. Un ejemplo en C++ sería:

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    cout << "RESULTADO: " << factorial(5) << endl;

    cout << "RESULTADO: " << factorial(0) << endl;

    return 0;
}
