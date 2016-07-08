#include <iostream>
#include <cstdlib>

using namespace std;

string dato(int i){

    if(i <= 0) return "N";
    return "P";
}

int main() {

    int  num;
    cout << "Escribir un numero: ";

    cin >>  num;

    cout << "Letra resultante: " << dato(num) << endl;
    // dato(num);
}
