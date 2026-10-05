#include <iostream>
using namespace std;

void tukarReference(int &a, int &b, int &c) {
    int temp = a;

    a = b;
    b = c;
    c = temp;
}

int main() {
    int a = 17;
    int b = 10;
    int c = 50;

    cout << "Sebelum ditukar:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    tukarReference(a, b, c);

    cout << "\nSesudah ditukar:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}