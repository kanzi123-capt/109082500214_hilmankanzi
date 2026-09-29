#include <iostream>
using namespace std;

string angka[] = {
    "nol", "satu", "dua", "tiga", "empat",
    "lima", "enam", "tujuh", "delapan", "sembilan",
    "sepuluh", "sebelas", "dua belas", "tiga belas",
    "empat belas", "lima belas", "enam belas",
    "tujuh belas", "delapan belas", "sembilan belas"
};

string terbilang(int n) {
    if (n < 20) {
        return angka[n];
    }
    else if (n < 100) {
        return angka[n / 10] + " puluh " + 
               (n % 10 == 0 ? "" : angka[n % 10]);
    }
    else {
        return "seratus";
    }
}

int main() {
    int n;

    cout << "Masukkan angka (0-100): ";
    cin >> n;

    if (n >= 0 && n <= 100) {
        cout << n << " : " << terbilang(n) << endl;
    } 
    else {
        cout << "Input harus antara 0 sampai 100." << endl;
    }

    return 0;
}