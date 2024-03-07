#include <bits/stdc++.h>
using namespace std;

int main () {
    system("cls");
    double kilometer, meter;
    
    cout << "Masukkan meter: ";
    cin >> meter;

    kilometer = meter / 1000;

    system("cls");
    cout << "==Hasil Konversi==\n";
    cout << "jarak meter yang kamu masukkan adalah " << meter << " meter";
    cout << "\nHasil konversi ke kilometer menjadi " << kilometer << " kilometer";

    return 0;
}