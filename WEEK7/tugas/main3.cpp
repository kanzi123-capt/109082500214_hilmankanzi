#include "Buku.h"

int main() {
    List L;
    CreateList(L);

    infotype b1 = {"B001", "Algoritma", 2020};
    infotype b2 = {"B003", "Struktur_Data", 2018};
    infotype b3 = {"B004", "Jaringan_Komputer", 2022};
    insertLast(L, alokasi(b1));
    insertLast(L, alokasi(b2));
    insertLast(L, alokasi(b3));

    infotype hapus;
    cout << "Masukkan Kode Buku yang akan dihapus : ";
    cin >> hapus.kodeBuku;

    address target = findElm(L, hapus);
    address P = Nil;

    if (target == Nil) {
        cout << "Data dengan kode buku " << hapus.kodeBuku << " tidak ditemukan." << endl;
    } else {
        if (target == L.First) {
            deleteFirst(L, P);             
        } else if (target == L.Last) {
            deleteLast(L, P);               
        } else {
            deleteAfter(target->prev, P);   
        }
        dealokasi(P);
        cout << "Data dengan kode buku " << hapus.kodeBuku << " berhasil dihapus." << endl;
    }

    cout << "DATA LIST 1" << endl;
    printInfoDetail(L);

    while (L.First != Nil) {
        deleteFirst(L, P);
        dealokasi(P);
    }
    return 0;
}