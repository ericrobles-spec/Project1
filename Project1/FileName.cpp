#include <iostream>
#include <string>

using namespace std;

bool es_par(int n) {
    if (n % 2 == 0) return true;
    else return false;
}

int main() {
    string par = "par";
    string impar = "impar";

    bool* miVector = new bool[10];
    for (int i = 0; i < 10; i++) {
        miVector[i] = es_par(i);
    }

    int numero;
    while (true) {
        cout << "Introduce un digito (0-9): ";
        cin >> numero;

        if (numero >= 0 && numero <= 9) {
            if (miVector[numero]) {
                cout << "El numero " << numero << " es " << par << "." << endl;
            }
            else {
                cout << "El numero " << numero << " es " << impar << "." << endl;
            }
        }
        else {
            cout << "Numero fuera de rango. Debes introducir un digito entre 0 y 9." << endl;
        }
    }

    delete[] miVector;

    return 0;
}