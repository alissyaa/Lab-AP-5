#include <iostream>

using namespace std;

int main() {
    system("CLS");

    int tinggi;
    cout << "Masukkan tinggi segitiga piramida: ";
    cin >> tinggi;

    for (int i = tinggi; i > 0; i--) {
        for (int j = 0; j < tinggi - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            if (i == tinggi || k == 0 || k == i - 1) {
                cout << "* ";
            } else {
                cout << "  "; // Menggunakan dua spasi untuk membuat celah
            }
        }
        cout << endl;
    }
    return 0;
}
