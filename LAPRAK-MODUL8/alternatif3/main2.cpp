#include "queue.h"

// Contoh tambahan: memperlihatkan tail yang berputar kembali ke indeks 0 pada alternatif 3.
int main() {
    Queue Q;
    createQueue(Q);
    cout << " H - T \t | Queue Info" << endl;
    for (int i = 1; i <= 5; i++) { enqueue(Q, i); }
    printInfo(Q);                       // penuh: 0 - 4
    dequeue(Q); printInfo(Q);           // head maju
    dequeue(Q); printInfo(Q);           // head = 2, tail = 4
    enqueue(Q, 6); printInfo(Q);        // tail berputar ke indeks 0
    enqueue(Q, 7); printInfo(Q);        // tail = 1, queue penuh
    enqueue(Q, 8);                      // harus ditolak
    printInfo(Q);
    return 0;
}