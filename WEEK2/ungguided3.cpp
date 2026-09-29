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