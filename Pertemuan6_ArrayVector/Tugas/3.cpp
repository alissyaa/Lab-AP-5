#include <iostream>
#include <cstring> //buat pakai strlen untuk hitung panjang stringnya
using namespace std;

string ubah(const char* str, int start, int end) { //const char* itu pointer ke konstanta char, jadi char yang dimaksud gabisa diubah.di fungsi itu
    string reversed;
    for (int i = end; i >= start; --i) { 
        reversed += str[i]; //mengambil karakter dari string awal dan menambahkannya ke string yang terbalik
    }
    return reversed; //mengembalikan string yang sudah terbalik
}

int main() {
    system("cls"); 
    char str[101]; //kan panjangnya maksimum 100 karakter dan satu karakter untuk null-terminator ('\0'). jadi kalo string contoh hello kan ada 5 nah itu jadinya [6]
    do {
        cout << "Masukkan string maksimal 100 karakter: ";
        cin.getline(str, 101); 

    } while (strlen(str) > 100 || strlen(str) < 1); //diulang sampai panjang string lebih dari 0 dan kurang dari atau sama dengan 100

    int panjang = strlen(str); //panjang string 
    int tengah = panjang / 2; //nentuin titik tengah string
    string kiri = ubah(str, 0, tengah - 1); //ambil string yang dari awal hingga setengah string dan membaliknya
    string kanan = ubah(str, tengah, panjang - 1); //ambil string dari setengah hingga akhir string dan membaliknya

    cout << "String yang telah diperbaiki: " << kiri << kanan << endl; //nampilin hasil penggabungan string dua yang tadi udah dibalik
    return 0;
}
