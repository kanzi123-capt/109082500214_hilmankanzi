#include "Buku.h"

bool bacaBuku(infotype &x) {
    cout << "masukkan kode buku: ";
    if (!(cin >> x.kodeBuku)) return false;
    cout << "masukkan judul buku: ";
    if (!(cin >> x.judul)) return false;
    cout << "masukkan tahun terbit: ";
    if (!(cin >> x.thnTerbit)) {
        if (cin.eof()) return false;
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "tahun terbit harus berupa angka, data tidak disimpan" << endl;
        return false;
    }
    return true;
}

int main() {
    List L;
    CreateList(L);

    for (int i = 0; i < 4; i++) {
        infotype x;
        if (!bacaBuku(x)) {
            if (cin.eof()) break;
            continue;
        }
        if (findElm(L, x) != Nil) {
            cout << "kode buku sudah terdaftar" << endl;
        } else {
            address P = alokasi(x);
            insertLast(L, P);
        }
    }

    cout << "DATA LIST 1" << endl;
    printInfo(L);

    address P;
    while (L.First != Nil) {
        deleteFirst(L, P);
        dealokasi(P);
    }
    return 0;
}