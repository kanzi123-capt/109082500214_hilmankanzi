#ifndef DATA_MHS_H_INCLUDED
#define DATA_MHS_H_INCLUDED

#include <string>
using namespace std;

const int MAX_MHS = 10;

struct mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

void inputMhs(mahasiswa &m);
float hitungNilaiAkhir(float uts, float uas, float tugas);
void tampilMhs(mahasiswa m);

#endif