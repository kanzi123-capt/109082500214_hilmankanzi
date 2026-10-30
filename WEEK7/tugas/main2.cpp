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

    infotype cari;
    cout << "Masukkan Kode Buku yang dicari : ";
    cin >> cari.kodeBuku;

    address P = findElm(L, cari);
    if (P != Nil) {
        printDetail(P);
    } else {
        cout << "Kode buku " << cari.kodeBuku << " tidak ditemukan." << endl;
    }

    while (L.First != Nil) {
        deleteFirst(L, P);
        dealokasi(P);
    }
    return 0;
}