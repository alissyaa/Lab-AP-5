#include <bits/stdc++.h>
using namespace std;

int main() {
    string nama;
    system ("cls");

    cout << "==getline==\n";
    cout << "Masukkan nama: ";
    getline(cin, nama); 
    cout << "Nama anda adalah " << nama << endl;

    cout << "\n==cin==\n";
    cout << "Masukkan nama: ";
    cin >> nama; 
    cout << "Nama anda adalah " << nama << endl;

    cout << "\nBisa dilihat perbedaan saat memakai getline dan cin";

    return 0;
} 