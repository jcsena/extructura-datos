#include <iostream>
#include <cstdlib>

using namespace std;



int main() {

    //se declara el numero de valores que tendra el vector
    int num_vector = 10;
    float menor;
    float mayor;
    float v[num_vector];

    for (int i = 0; i < num_vector; i++) {
        float num;
        cout << "Digite # " << i + 1 << ": ";
        cin >> num;
        v[i] = num;
        if(i > 0){
            if(v[i] > mayor){
                mayor = v[i];
            }
            if(v[i] < menor){
                menor = v[i];
            }
        }else{
            menor = v[i];
            mayor = v[i];
        }

    }
    cout << endl << endl;

    for (int i = 0; i < num_vector; i++) {
        cout << "Pocision " << i << ": " << v[i] << endl;
    }

    cout << "Mayor: " << mayor << " Menor: " << menor << endl;



}
