#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int angka;

    x:
    cout << "Masukkan angka untuk hore: ";
    cin >> angka;

    while (angka < 1 || angka > 10000){ //ketika dia lebih kecil 1 atau lebih besar dari 10000 maka eror dan akan dibawa ke awal (meminta inputan lagi)
        cout << "eror (masukkan angka 1<=N<=10000)" << endl;
        goto x;
    }

    system("CLS");
    cout << "H"; //keluarin h

    for (int i = 0; i < angka; ++i) 
    {
        cout << "o"; // keluarin o sebanya angka yg dia mau
    }
    
    cout << "r"; //keluarin r

    for (int i = 0; i < angka; ++i)
    {
        cout << "e"; //keluarin e sebanyak angka yg dia mau
    }
    for (int i = 0; i < angka; ++i)
    {
        cout << "!"; //keluarin tnda seru sebanyak angka yang dia mau
    }
    return 0;
}