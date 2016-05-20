
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a,b, mod;

    cout << "Introduzca la variable a: "; cin >> a;
    cout << "Introduzca la variable b: "; cin >> b;

    if(b == 0) { cout <<  "la división no es posible"; return 0;}

    mod = a % b;

    cout << "El cociente es: "<< mod;

}
