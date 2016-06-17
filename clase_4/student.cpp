#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;


#define p_par 0.2
#define p_pro 0.3
#define p_exa 0.4
#define p_tra 0.1


int main() {

    //se declara el numero de valores que tendra el vector
    int num_vector = 15;

    float v[num_vector];
    string n[num_vector];

    for (int i = 0; i < num_vector; i++) {

        cout << "Estudiante # " << i + 1 << endl;

        string name;
        float par, pro, exa, tra, prome;

        cout << "Nombre: ";cin >> name;
        cout << "Nota Parciles: "; cin >> par;
        cout << "Nota Proyectos: "; cin >> pro;
        cout << "Nota Examenes: "; cin >> exa;
        cout << "Nota Trabajos: "; cin >> tra;

        prome = (p_par * par) + (p_pro * pro) + (p_exa * exa) + (p_tra * tra);
        v[i] = prome; n[i] = name;
        cout << endl;

    }

    for (int i = 0; i < num_vector; i++) {
        cout << "#" << i+1 << ") Nombre: " << n[i] << ", Promedio: " << v[i] << endl;
    }

}
