#include <iostream>
#include <cstdlib>

using namespace std;

int isPrimo(int v){

    int i,a=0;

    for(i=1;i<=v;i++)
    {
        if(v%i==0){
             a++;
        }
    }

    if(a==2){
        cout << "El número es primo" << endl;
    }else{
    cout << "El número no es primo" << endl;
    }

}


int main() {

    int  num;
    cout << "Escribir un numero: ";

    cin >>  num;

    isPrimo(num);
}
