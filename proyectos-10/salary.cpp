
#include <iostream>

using namespace std;

int main() {
    string nombre;
    float sxH,SM;
    int HT;


    cout << "Nombre: "; cin >> nombre;
    cout << "Introduzca numero de horas trabajadas: "; cin >> HT;
    cout << "Introduzca salario por hora: "; cin >> sxH;

    SM = sxH * HT;

    cout << "nombre del empleado: " << nombre <<endl;
    cout << "salario mensual: " << SM << endl;
}
