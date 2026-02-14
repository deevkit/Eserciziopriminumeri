#include <iostream>
using namespace std;
bool isPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int numero;
    cout << "Inserisci il numero per verificarne se e' un numero primo" << endl;
    cin >> numero;

    if (isPrimo(numero)) {
        cout << "Il numero " << numero << " e' primo!" << endl;
    } else {
        cout << "Il numero " << numero << " NON e' primo." << endl;
    }
    return 0;
}