
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a,b, suma;

    cout << "Introduzca la variable a: "; cin >> a;
    cout << "Introduzca la variable b: "; cin >> b;

    suma = a + b;

    if(suma < 0){
        cout << "Imprimir datos " << a << endl;
        cout << "Imprimir datos " << b << endl;
        cout << "Suma " << suma << endl;
        return 0;
    }

        cout << "no cumple la condición" << endl;
}
