 #include <iostream>
#include <iomanip>
#include "data_mhs.h"
using namespace std;

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3f * uts + 0.4f * uas + 0.3f * tugas;
}

void inputMhs(mahasiswa &m) {
    cout << "Nama   : ";
    getline(cin >> ws, m.nama);
    cout << "NIM    : ";
    cin >> m.nim;
    cout << "UTS    : ";
    cin >> m.uts;
    cout << "UAS    : ";
    cin >> m.uas;
    cout << "Tugas  : ";
    cin >> m.tugas;
    m.nilaiAkhir = hitungNilaiAkhir(m.uts, m.uas, m.tugas);
}

void tampilMhs(mahasiswa m) {
    cout << left << setw(15) << m.nama
         << setw(12) << m.nim
         << right << fixed << setprecision(2)
         << setw(8) << m.uts
         << setw(8) << m.uas
         << setw(8) << m.tugas
         << setw(12) << m.nilaiAkhir << endl;
}