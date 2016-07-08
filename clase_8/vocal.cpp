#include <iostream>
#include <cstdlib>

using namespace std;

string isVocal(string v){
    string end = "No es una vocal";

    string vocales[10] = { "a", "e", "i", "o", "u", "A", "E", "I", "O", "U" };

    for (int i = 0; i < 10; i++) {
        if(vocales[i] == v){
            end = "Es una vocal";
            break;
        }
    }
    return end;
}


int main() {

    string  caracater;
    cout << "Escribir un caracater: ";

    cin >>  caracater;

    cout << "Letra resultante: " << isVocal(caracater) << endl;
}
