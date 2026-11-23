#include "queue.h"

// Alternatif 3: head dan tail berputar (circular buffer).
// Setelah indeks terakhir, indeks berikutnya kembali ke 0.
// Queue kosong ditandai head = -1 dan tail = -1.

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return Q.head == -1 && Q.tail == -1;
}

// Penuh jika posisi setelah tail (berputar) adalah head
bool isFullQueue(Queue Q) {
    return !isEmptyQueue(Q) && (Q.tail + 1) % MAKS == Q.head;
}

void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh!" << endl;
        return;
    }
    if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
    } else {
        Q.tail = (Q.tail + 1) % MAKS;
    }
    Q.info[Q.tail] = x;
}

// Mengambil elemen di depan, head maju satu (berputar). Jika kosong, kembalikan -1.
infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
        return -1;
    }
    infotype x = Q.info[Q.head];
    if (Q.head == Q.tail) {            // hanya satu elemen
        createQueue(Q);
    } else {
        Q.head = (Q.head + 1) % MAKS;
    }
    return x;
}

// Menampilkan head, tail, dan isi queue dari head sampai tail (mengikuti putaran)
void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << "\t | ";
    if (isEmptyQueue(Q)) {
        cout << "empty queue";
    } else {
        int i = Q.head;
        while (true) {
            cout << Q.info[i];
            if (i == Q.tail) break;
            cout << " ";
            i = (i + 1) % MAKS;
        }
    }
    cout << endl;
}