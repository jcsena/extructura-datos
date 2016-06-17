#include <iostream>
#include <cstdlib>

using namespace std;

int factorial(int i){

    if(i <= 2) return i;

    int res = 1;
    for (int j = 2; j <= i; j++) {
        res = j * res;
    }
    return res;
}

int main() {

    //se declara el numero de valores que tendra el vector
    int num_vector = 10;

    //se incializa el la variable vector v[@num_vector]
    int v[num_vector];

    //se declara la variable el promedio
    float promedio;

    //ciclo principal para generar el vector
    for (int i = 0; i < num_vector; i++) {

            //se asigna valor a indice de vector en ese momento
            v[i] = factorial(i+1);
            cout << "Posicisión: " << i << " Factorial: "<< i+1  << " igual: " << v[i] << endl;
    }
}
