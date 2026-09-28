#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "\nHasil operasi:" << endl;
    cout << "Penjumlahan = " << a + b << endl;
    cout << "Pengurangan = " << a - b << endl;
    cout << "Perkalian   = " << a * b << endl;

    if (b != 0) {
        cout << "Pembagian   = " << a / b << endl;
    } else {
        cout << "Pembagian   = tidak dapat dilakukan (dibagi 0)" << endl;
    }

    return 0;
}