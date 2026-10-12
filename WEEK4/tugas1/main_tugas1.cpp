#include <iostream>
#include <iomanip>
#include "data_mhs.h"
using namespace std;

int main() {
    mahasiswa dataMhs[MAX_MHS];
    int n;

    do {
        cout << "Jumlah mahasiswa (1-" << MAX_MHS << ") : ";
        cin >> n;
    } while (n < 1 || n > MAX_MHS);

    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        inputMhs(dataMhs[i]);
    }

    cout << "\n=== DATA MAHASISWA ===" << endl;
    cout << left << setw(15) << "Nama" << setw(12) << "NIM"
         << right << setw(8) << "UTS" << setw(8) << "UAS"
         << setw(8) << "Tugas" << setw(12) << "Nilai Akhir" << endl;
    cout << string(63, '-') << endl;
    for (int i = 0; i < n; i++) {
        tampilMhs(dataMhs[i]);
    }
    return 0;
}