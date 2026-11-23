
#include "queue.h"
#include <iostream>

using namespace std;

int main() {
    queue Q;
    address P;

    CreateQueue(Q);

    cout << "===== PROGRAM ADT QUEUE =====" << endl;

    cout << "\n1. Membuat Queue Kosong" << endl;
    if (isEmpty(Q)) {
        cout << "Queue berhasil dibuat dan masih kosong." << endl;
    }

    cout << "\n2. Menambahkan Elemen Queue" << endl;

    P = alokasi(10);
    insert(Q, P);

    P = alokasi(20);
    insert(Q, P);

    P = alokasi(30);
    insert(Q, P);

    cout << "Isi Queue: ";
    printInfo(Q);

    cout << "Jumlah Elemen: " << nbList(Q) << endl;

    cout << "\n3. Mencari Elemen Queue" << endl;

    P = findElm(Q, 20);

    if (P != Nil) {
        cout << "Elemen 20 ditemukan." << endl;
    } else {
        cout << "Elemen 20 tidak ditemukan." << endl;
    }

    cout << "\n4. Mengecek Address Elemen" << endl;

    if (fFindElm(Q, P)) {
        cout << "Address elemen terdapat dalam Queue." << endl;
    } else {
        cout << "Address elemen tidak terdapat dalam Queue." << endl;
    }

    cout << "\n5. Menghapus Elemen Pertama" << endl;

    deleteQueue(Q, P);

    if (P != Nil) {
        cout << "Elemen yang dihapus: " << P->info << endl;
        dealokasi(P);
    }

    cout << "Isi Queue sekarang: ";
    printInfo(Q);

    cout << "Jumlah Elemen: " << nbList(Q) << endl;

    cout << "\n6. Menghapus Semua Elemen Queue" << endl;

    delAll(Q);

    if (isEmpty(Q)) {
        cout << "Semua elemen berhasil dihapus." << endl;
    }

    cout << "Jumlah Elemen: " << nbList(Q) << endl;

    cout << "\n===== PROGRAM SELESAI =====" << endl;

    return 0;
}
