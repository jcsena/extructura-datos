#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    //se declara el numero de valores que tendra el vector
    int num_vector = 15;

    //se incializa el la variable vector v[@num_vector]
    int v[num_vector];

    //suma de los datos que se encontraran en el vector
    long suma = 0;

    //se declara la variable el promedio
    float promedio;

    //ciclo principal para generar el vector
    for (int i = 0; i < num_vector; i++) {

        //se valida que el indice sea mayo que de 2
        if(i > 2){

            //inicializo la variable que contendra el valor
            int res = 1;

            //ciclo para realizar operacion
            for (int j = 2; j <= i; j++) {
                res = j * res;
            }

            //se asigna valor a indice de vector en ese momento
            v[i] = res;
        }else{

            //por defecto si es menor o igual a 2 asigno el mismo valor
            v[i] = i + 1;
        }

    }

    //ciclo  para mostrar los valores agregados a vector
    for (int i = 0; i < num_vector; i++) {

        //se asigna la suma
        suma = suma + v[i];
        //salida de datos posicion
     cout << "Posicisión: " << i << " igual: " << v[i] << endl;
    }

    //se asgina el valor de promedio  @suma , @num_vector
    promedio = (suma/num_vector);

    //imprimiendo suma y promedio
    cout << "Suma: " << suma <<  " Promedio: "<< promedio << endl;
}
