#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Node {
    string kode;
    Node *next;
};

struct Stack {
    Node *top;
    int jumlah;
};

void createStack(Stack &S) {
    S.top = nullptr;
    S.jumlah = 0;
}

bool isEmpty(Stack S) {
    return S.top == nullptr;
}

bool sudahAda(Stack S, string kode) {
    Node *bantu = S.top;
    while (bantu != nullptr) {
        if (bantu->kode == kode) {
            return true;
        }
        bantu = bantu->next;
    }
    return false;
}

bool push(Stack &S, string kode) {
    if (sudahAda(S, kode)) {
        cout << "Gagal: kode " << kode << " sudah ada di gudang." << endl;
        return false;
    }
    Node *baru = new Node;
    baru->kode = kode;
    baru->next = S.top;   
    S.top = baru;         
    S.jumlah++;
    cout << "Kotak " << kode << " ditaruh di paling atas." << endl;
    return true;
}

bool pop(Stack &S, string &kode) {
    if (isEmpty(S)) {
        cout << "Gudang kosong, tidak ada kotak yang bisa diambil." << endl;
        return false;
    }
    Node *hapus = S.top;
    kode = hapus->kode;   
    S.top = hapus->next;  
    delete hapus;
    S.jumlah--;
    return true;
}

void printStack(Stack S) {
    if (isEmpty(S)) {
        cout << "Gudang kosong." << endl;
        return;
    }
    cout << "Kotak tersimpan (" << S.jumlah << " kotak):" << endl;
    Node *bantu = S.top;
    int posisi = 1;
    while (bantu != nullptr) {
        cout << posisi << ". " << bantu->kode;
        if (bantu == S.top) {
            cout << "  <- paling atas";
        }
        cout << endl;
        bantu = bantu->next;
        posisi++;
    }
}

void destroyStack(Stack &S) {
    while (S.top != nullptr) {
        Node *hapus = S.top;
        S.top = hapus->next;
        delete hapus;
    }
    S.jumlah = 0;
}

void tampilMenu() {
    cout << endl;
    cout << "=== GUDANG SEMPIT ===" << endl;
    cout << "1. Masukkan kotak" << endl;
    cout << "2. Ambil kotak teratas" << endl;
    cout << "3. Tampilkan kotak tersimpan" << endl;
    cout << "0. Keluar" << endl;
}

int main() {
    Stack gudang;
    createStack(gudang);

    int pilihan = -1;
    string kode;

    do {
        tampilMenu();
        cout << "Pilih menu: ";

        if (!(cin >> pilihan)) {
            if (cin.eof()) {
                break;
            }
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input tidak valid, masukkan angka menu." << endl;
            pilihan = -1;
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (pilihan) {
            case 1:
                cout << "Masukkan kode kotak: ";
                if (cin >> kode) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    push(gudang, kode);
                }
                break;
            case 2:
                if (pop(gudang, kode)) {
                    cout << "Kotak " << kode << " diambil." << endl;
                }
                break;
            case 3:
                printStack(gudang);
                break;
            case 0:
                cout << "Program selesai." << endl;
                break;
            default:
            cout << "Menu tidak tersedia," << endl;
        }
    } while (pilihan != 0);

    destroyStack(gudang);
    return 0;

}