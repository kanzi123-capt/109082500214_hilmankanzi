#include <iostream>
using namespace std;
int main() {
    int bilangan1, bilangan2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    cout << "Penjumlahan: " << bilangan1 + bilangan2 << endl;
    cout << "Pengurangan: " << bilangan1 - bilangan2 << endl;
    cout << "Perkalian: " << bilangan1 * bilangan2 << endl;

    if (bilangan2 != 0) {
        cout << "Pembagian: " << static_cast<double>(bilangan1) / bilangan2 << endl;
    } else {
        cout << "Pembagian: tidak dapat dilakukan karena pembagi bernilai nol" << endl;
    }

    return 0;
}