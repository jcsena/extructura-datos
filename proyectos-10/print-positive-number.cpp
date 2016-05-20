
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a,b;

    cout << "Introduzca la variable a: "; cin >> a;
    cout << "Introduzca la variable b: "; cin >> b;



    if(a > 0 && b > 0){
        cout << "Imprimir datos " << a << endl;
        cout << "Imprimir datos " << b << endl;
        return 0;
    }
    cout << "Los numeros son negativos" << endl;
}
