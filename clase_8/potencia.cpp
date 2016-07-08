#include <iostream>
#include <cstdlib>

using namespace std;

float potencia(float x, int n){
    float pot = 1;
    for (int i = 0; i < n; i++) {
        pot *= x;
    }
    cout << "Potencia igual: " <<  pot << endl;
}

int main() {

float x;
int n;
cout << "VALOR EN X: ";
cin >> x;
cout << "VALOR EN N: ";
cin >> n;

    potencia(x,n);
}
