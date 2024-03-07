#include <bits/stdc++.h>
using namespace std;

int main() {
    string nama;
    char KOM;
    float ipk;
    int nim;

    cout << "Masukkan nama  : ";
    getline(cin, nama);
    cout << "Masukkan NIM   : ";
    cin >> nim;
    cout << "Masukkan KOM   : ";
    cin >> KOM;
    cout << "Masukkan IPK   : ";
    cin >> ipk;

    system("cls");
    cout << "\n==Informasi Mahasiswa==\n";
    cout << "Nama   : " << nama;
    cout << "\nNIM    : " << nim;
    cout << "\nKOM    : " << KOM;
    cout << "\nIPK    : " << ipk;

    return 0;
}