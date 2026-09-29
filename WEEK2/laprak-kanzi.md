# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Hilman Kanzi - 109082500214</p>

## Dasar Teori
Bahasa C++ merupakan bahasa pemrograman yang digunakan untuk mengolah data dengan variabel, tipe data, operator, input, dan output. Operator aritmatika digunakan untuk melakukan perhitungan seperti penjumlahan, pengurangan, perkalian, dan pembagian. Selain itu, percabangan if digunakan untuk menentukan proses berdasarkan kondisi tertentu. Pada Unguided 1, konsep tersebut digunakan untuk mengolah dua bilangan dan menampilkan hasil perhitungannya.[1]

Array digunakan untuk menyimpan beberapa data dengan tipe yang sama dan setiap datanya dapat diakses menggunakan indeks. String digunakan untuk menyimpan atau mengolah data berupa teks. Pada Unguided 2, array string digunakan untuk menyimpan nama bilangan, kemudian fungsi terbilang() digunakan untuk mengubah angka menjadi bentuk tulisan.[1]

Perulangan for digunakan untuk menjalankan perintah secara berulang. Pada Unguided 3, perulangan digunakan untuk membuat pola angka, mengatur spasi, serta menampilkan angka dari besar ke kecil dan sebaliknya. Penggunaan percabangan, array, fungsi, dan perulangan membantu program berjalan sesuai dengan proses yang telah dibuat.[1]

## Unguided 

### 1. unguided 1

```C++
#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "\nHasil operasi:" << endl;
    cout << "Penjumlahan = " << a + b << endl;
    cout << "Pengurangan = " << a - b << endl;
    cout << "Perkalian   = " << a * b << endl;

    if (b != 0) {
        cout << "Pembagian   = " << a / b << endl;
    } else {
        cout << "Pembagian   = tidak dapat dilakukan (dibagi 0)" << endl;
    }

    return 0;
}
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](ss-unguided1.png)


##### Output 2
![Screenshot Output Unguided 1_2](ss-unguided11.png)

Penjelasan :

Program ini digunakan untuk melakukan operasi aritmatika pada dua bilangan. Variabel a dan b menggunakan tipe data float agar dapat menyimpan bilangan desimal. Perintah cin digunakan untuk memasukkan nilai dari pengguna, sedangkan cout digunakan untuk menampilkan hasil program. Setelah kedua nilai dimasukkan, program melakukan operasi penjumlahan, pengurangan, dan perkalian menggunakan operator aritmatika.

Pada bagian if (b != 0), program mengecek terlebih dahulu apakah bilangan kedua bukan nol. Jika b tidak sama dengan nol, maka pembagian dilakukan menggunakan a / b. Jika b bernilai nol, program tidak melakukan pembagian dan menampilkan keterangan bahwa pembagian tidak dapat dilakukan. Jadi, program ini menerapkan variabel, input-output, operator aritmatika, dan percabangan if sesuai dengan konsep dasar pemrograman C++.

### 2. unguided 2

```C++
#include <iostream>
using namespace std;

string angka[] = {
    "nol", "satu", "dua", "tiga", "empat",
    "lima", "enam", "tujuh", "delapan", "sembilan",
    "sepuluh", "sebelas", "dua belas", "tiga belas",
    "empat belas", "lima belas", "enam belas",
    "tujuh belas", "delapan belas", "sembilan belas"
};

string terbilang(int n) {
    if (n < 20) {
        return angka[n];
    }
    else if (n < 100) {
        return angka[n / 10] + " puluh " + 
               (n % 10 == 0 ? "" : angka[n % 10]);
    }
    else {
        return "seratus";
    }
}

int main() {
    int n;

    cout << "Masukkan angka (0-100): ";
    cin >> n;

    if (n >= 0 && n <= 100) {
        cout << n << " : " << terbilang(n) << endl;
    } 
    else {
        cout << "Input harus antara 0 sampai 100." << endl;
    }

    return 0;
}
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](ss-unguided2.png)

Penjelasan :

Program ini digunakan untuk mengubah angka menjadi bentuk tulisan dari 0 sampai 100. Array angka digunakan untuk menyimpan nama-nama bilangan dalam bentuk string, seperti "nol", "satu", "dua", dan seterusnya. Kemudian fungsi terbilang(int n) digunakan untuk mengolah angka yang dimasukkan. Jika angka kurang dari 20, program langsung mengambil kata dari array. Jika angka kurang dari 100, program menggabungkan angka puluhan dengan kata "puluh" dan angka satuannya.

Pada bagian main(), variabel n digunakan untuk menyimpan angka yang dimasukkan melalui cin, sedangkan cout digunakan untuk menampilkan hasilnya. Program juga menggunakan percabangan if untuk memastikan angka yang dimasukkan berada pada rentang 0 sampai 100. Jadi, program ini menerapkan array, string, fungsi, input-output, dan percabangan if sesuai dengan materi C++ pada modul.

### 3. unguided 3

```C++
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "input: ";
    cin >> n;

    cout << "output:\n";

    for (int i = n; i >= 1; i--) {

        // Spasi di awal baris
        for (int s = n; s > i; s--) {
            cout << "  ";
        }

        // Angka menurun
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Bintang
        cout << "*";

        // Angka menaik
        for (int j = 1; j <= i; j++) {
            cout << " " << j;
        }

        cout << endl;
    }

    return 0;
}
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](ss-unguided3.png)

Penjelasan :

Program ini digunakan untuk membuat pola angka dan tanda bintang berdasarkan angka yang dimasukkan. Variabel n digunakan untuk menyimpan input dari pengguna, sedangkan cin digunakan untuk memasukkan nilai dan cout untuk menampilkan hasil. Perulangan for pertama digunakan untuk mengatur jumlah baris, sedangkan perulangan for kedua digunakan untuk memberikan spasi di awal setiap baris.

Setelah itu, perulangan for berikutnya digunakan untuk menampilkan angka secara menurun, kemudian program menampilkan tanda *, dan perulangan terakhir menampilkan angka secara menaik. Setiap baris diakhiri dengan endl agar pola berpindah ke baris berikutnya. Jadi, program ini menerapkan input-output dan perulangan for untuk membuat pola sesuai dengan konsep perulangan pada pemrograman C++.

## Kesimpulan
bahasa C++ dapat digunakan untuk membuat program dengan memanfaatkan variabel, tipe data, input-output, operator, percabangan, array, string, fungsi, dan perulangan. Pada praktikum ini, konsep tersebut diterapkan melalui program operasi aritmatika, mengubah angka menjadi tulisan, serta membuat pola angka dan tanda bintang.

Dari ketiga program tersebut, dapat dipahami bahwa setiap konsep dalam C++ memiliki fungsi yang berbeda dan dapat digunakan secara bersama-sama untuk menyelesaikan suatu permasalahan. Praktikum ini juga membantu memahami cara kerja dasar program C++ mulai dari menerima input, mengolah data, sampai menampilkan output sesuai dengan proses yang dibuat.

## Referensi
[1]Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
