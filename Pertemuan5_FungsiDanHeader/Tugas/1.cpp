#include <iostream>
#include <typeinfo>
using namespace std;

int Fizbuz(int n, int tipe) {
    if ((n % 3 == 0) && (n % 5 == 0)) {
        cout << "FizzBuzz";
    } else if (n % 3 == 0) {
        cout << "Fizz";
    } else if (n % 5 == 0) {
        cout << "Buzz";
    } else {
        cout << n;
        tipe = n;
    }
    return tipe;
}

void deret(int n) {
    int tipe = 0;
    int a = 2; 
    int tambah = 4;
    for (int i = 0; i < n; i++) {
        tipe = Fizbuz(a, tipe);
        if (i < n - 1) {
            cout << ", ";
        }
        a += tambah;
        tambah += 2;
    }
    cout << endl;
    cout << "Tipe data dari " << tipe << " adalah " << typeid(tipe).name() << endl;
}

void garis(int karakter) {
    cout << string(karakter, '=') << endl;
}

int main() {
    system ("CLS");
    int n;

    garis(34);
    cout << "Selamat datang" << endl;
    garis(34);
    cout << "Input bilangan n (3<n<=100): ";
    cin >> n;
    garis(34);
    while ((n < 3) || (n > 100)) {
        cout << "Inputan tidak valid, berikan nilai dari rentang 3 - 100" << endl;
        cout << "Input bilangan n (3<n<=100): ";
        cin >> n;
    }
    deret(n);
    return 0;
}
