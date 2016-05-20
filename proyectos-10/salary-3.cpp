

#include <iostream>
#include <cstdlib>

using namespace std;

float retention (float SB)
{
    if(SB > 3000) return ((8/100) * SB);
    if(SB > 1500) return ((5/100) * SB);
    return 0;
}

int main() {

    float  SB, SN, Ret;
    string nombre;

    cout << "Nombre: "; cin >> nombre;
    cout << "Salario Bruto: "; cin >> SB;
    Ret = retention(SB);
    SN = SB - Ret;

    cout << "Nombre: "<< nombre << endl;
    cout << "Salario Brunto: " << SB << endl;
    cout << "Retencion: "<< Ret << endl;
    cout << "Salario Neto: "<< SN << endl;


}
