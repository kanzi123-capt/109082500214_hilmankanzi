#include "queue.h"

// Alternatif 2: head dan tail sama-sama bergerak maju.
// Queue kosong ditandai head = -1 dan tail = -1.

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return Q.head == -1 && Q.tail == -1;
}

// Penuh hanya jika head di indeks 0 dan tail di indeks terakhir.
// Jika tail di indeks terakhir tetapi head > 0, itu penuh "semu" dan
// ruang kosong dibuat dengan menggeser elemen saat enqueue.
bool isFullQueue(Queue Q) {
    return Q.head == 0 && Q.tail == MAKS - 1;
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
        if (Q.tail == MAKS - 1) {      // penuh semu: geser elemen ke awal tabel
            int banyak = Q.tail - Q.head + 1;
            for (int i = 0; i < banyak; i++) {
                Q.info[i] = Q.info[Q.head + i];
            }
            Q.head = 0;
            Q.tail = banyak - 1;
        }
        Q.tail++;
    }
    Q.info[Q.tail] = x;
}

// Mengambil elemen di depan, head maju satu. Jika queue kosong, kembalikan -1.
infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
        return -1;
    }
    infotype x = Q.info[Q.head];
    if (Q.head == Q.tail) {            // hanya satu elemen
        createQueue(Q);
    } else {
        Q.head++;
    }
    return x;
}

// Menampilkan head, tail, dan isi queue dari head sampai tail
void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << "\t | ";
    if (isEmptyQueue(Q)) {
        cout << "empty queue";
    } else {
        for (int i = Q.head; i <= Q.tail; i++) {
            cout << Q.info[i];
            if (i < Q.tail) cout << " ";
        }
    }
    cout << endl;
}