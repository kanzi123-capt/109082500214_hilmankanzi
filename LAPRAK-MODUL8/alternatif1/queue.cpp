#include "queue.h"

// Alternatif 1: head selalu 0 jika queue tidak kosong, hanya tail yang bergerak.
// Queue kosong ditandai head = -1 dan tail = -1.

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmptyQueue(Queue Q) {
    return Q.head == -1 && Q.tail == -1;
}

// Penuh jika tail sudah berada di indeks terakhir (head selalu 0)
bool isFullQueue(Queue Q) {
    return Q.tail == MAKS - 1;
}

// Menambah elemen di belakang (tail)
void enqueue(Queue &Q, infotype x) {
    if (isFullQueue(Q)) {
        cout << "Queue penuh!" << endl;
        return;
    }
    if (isEmptyQueue(Q)) {
        Q.head = 0;
        Q.tail = 0;
    } else {
        Q.tail++;
    }
    Q.info[Q.tail] = x;
}

// Mengambil elemen di depan (head), lalu semua elemen di belakangnya digeser
// ke depan dan tail mundur satu. Jika queue kosong, kembalikan -1.
infotype dequeue(Queue &Q) {
    if (isEmptyQueue(Q)) {
        cout << "Queue kosong!" << endl;
        return -1;
    }
    infotype x = Q.info[Q.head];
    if (Q.head == Q.tail) {            // hanya satu elemen
        createQueue(Q);
    } else {
        for (int i = Q.head; i < Q.tail; i++) {
            Q.info[i] = Q.info[i + 1];
        }
        Q.tail--;
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