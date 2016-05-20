


//Real SxH, P, R, SB, SN, HT


#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    float  SxH, P, R, SB, SN, HT;
    string nombre;


    cout << "Nombre: "; cin >> nombre;
    cout << "Introduzca numero de horas trabajadas: "; cin >> HT;
    cout << "Introduzca salario por hora: "; cin >> SxH;

    SB = SxH * HT;
    R = (P*SB)/ 100;
    SN = SB-R;

    cout << "Salario bruto: "<< SB << endl;
    cout << "Retencion: "<< R << endl;
    cout << "Salario neto: "<< SN << endl;
    cout << "nombre: "<< nombre << endl;

}
