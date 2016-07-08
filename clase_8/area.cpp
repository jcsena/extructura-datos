#include <iostream>
#include <cstdlib>

using namespace std;

int cuadrado(){
    float altura;
    cout << "Por favor digite la altura del cuadrado: ";
    cin >> altura;
    cout << "El area del cuadrado es : " << altura*altura << endl;
}
int rectangulo(){
    float altura;
    float base;
    cout << "Por favor digite la altura del rectangulo: ";
    cin >> altura;
    cout << "Por favor digite la base del rectangulo: ";
    cin >> base;
    cout << "El area del rectangulo es : " << altura*base << endl;
}

int triangulo(){
    float altura;
    float base;
    cout << "Por favor digite la altura del tringulo: ";
    cin >> altura;
    cout << "Por favor digite la base del triangulo: ";
    cin >> base;
    cout << "El area del triangulo es : " << (altura*base)/2 << endl;
}


int circulo(){
    float radio;
    cout << "Por favor digite el radio del circulo: ";
    cin >> radio;
    cout << "El area del circulo es : " << (radio*radio)*3.1416 << endl;
}

int main() {

    int num = 0;

    cout << "Elija la opcion para calcular el area: " << endl;

    cout << "(1) Circulo" << endl;
    cout << "(2) Cuadrado" << endl;
    cout << "(3) Rectangulo" << endl;
    cout << "(4) Triangulo" << endl;

    cin >> num;
    if(num == 1){
        cout << "Has elegido la area del Circulo";
        circulo();
    }else if(num == 2){
        cout << "Has elegido la area del Cuadrado";
        cuadrado();
    }
    else if(num == 3){
        cout << "Has elegido la area del rectangulo";
        rectangulo();
    }
    else if(num == 4){
        cout << "Has elegido la area del Triangulo";
        triangulo();
    }
    else{
        cout << "Opcion incorrecta :(";
    }
}
