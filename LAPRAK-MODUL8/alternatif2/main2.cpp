#include "queue.h"

// Contoh tambahan: memperlihatkan kondisi penuh "semu" pada alternatif 2.
int main() {
    Queue Q;
    createQueue(Q);
    cout << " H - T \t | Queue Info" << endl;
    for (int i = 1; i <= 5; i++) { enqueue(Q, i); }
    printInfo(Q);                       // penuh: 0 - 4
    dequeue(Q); printInfo(Q);           // head maju
    dequeue(Q); printInfo(Q);           // head = 2, tail = 4 (penuh semu)
    enqueue(Q, 6); printInfo(Q);        // elemen digeser ke awal, lalu 6 masuk
    enqueue(Q, 7); printInfo(Q);        // 0 - 4, penuh
    enqueue(Q, 8);                      // harus ditolak
    printInfo(Q);
    return 0;
}