#include <iostream>
using namespace std;

const int N = 3;

void tampilArray(int arr[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}


void tukarArray(int A[N][N], int B[N][N],
                int baris1, int kolom1, int baris2, int kolom2) {
    int temp = A[baris1][kolom1];
    A[baris1][kolom1] = B[baris2][kolom2];
    B[baris2][kolom2] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[N][N] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int *ptr1, *ptr2;
    int baris1, kolom1, baris2, kolom2;

    cout << "=== Isi Array A ===" << endl;
    tampilArray(A);
    cout << "\n=== Isi Array B ===" << endl;
    tampilArray(B);

    cout << "\nMasukkan posisi array A (baris kolom, 0-2) : ";
    cin >> baris1 >> kolom1;
    cout << "Masukkan posisi array B (baris kolom, 0-2) : ";
    cin >> baris2 >> kolom2;

    if (baris1 < 0 || baris1 >= N || kolom1 < 0 || kolom1 >= N ||
        baris2 < 0 || baris2 >= N || kolom2 < 0 || kolom2 >= N) {
        cout << "Posisi tidak valid!" << endl;
        return 1;
    }

    tukarArray(A, B, baris1, kolom1, baris2, kolom2);

    cout << "\n=== Setelah Penukaran Array ===" << endl;
    cout << "Array A:" << endl;
    tampilArray(A);
    cout << "Array B:" << endl;
    tampilArray(B);

    int x = 100, y = 200;
    ptr1 = &x;
    ptr2 = &y;
    cout << "\n=== Pointer ===" << endl;
    cout << "Sebelum tukar : x = " << *ptr1 << ", y = " << *ptr2 << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Sesudah tukar : x = " << *ptr1 << ", y = " << *ptr2 << endl;

    return 0;
}