#include <iostream>
using namespace std;

//fungsi untuk hitung faktorial dari sebuah bilangan
int faktorial(int n) {
    int a = 1; 
    int i = 1; 

    while (i <= n) {
        a = a * i;
        i++; 
    }
    return a; //ambil nilai faktorial
}

//untuk hitung binom untuk pascal
int binom(int n, int k) {
    return faktorial(n) / (faktorial(k) * faktorial(n - k)); //hitungnya pake fungsi faktorial itu
}

int main() {
    system("CLS"); 

    int baris, kolom; 

    x: 
    cout << "Masukkan baris dan kolom [baris] [kolom]: ";
    cin >> baris >> kolom; 

  
    while( (baris < 1) || (baris > 30) )
    {
        cout << "Masukkan nilai antara 1 hingga 30" << endl; //kalau ga sesuai syara whileitu berarti balik lg ke awal
        goto x;
    }

    while( (kolom < 1) || (kolom > 30) )
    {
        cout << "Masukkan nilai antara 1 hingga 30" << endl; //kalau ga sesuai syara whileitu berarti balik lg ke awal
        goto x; 
    }

    if (kolom > baris ) { 
        cout << "Kolom harus lebih kecil dari baris" << endl; //kalau ga sesuai syara if itu berarti balik lg ke awal
        goto x;
    } 

    cout << "Nilai pada baris ke-" << baris << " kolom ke-" << kolom << " adalah " << binom(baris - 1, kolom - 1) << endl;

    //buat segitiga pascalnya
    for (int i = 0; i < baris; i++) {
    for (int j = kolom; j > i + 1; j--) {
        cout << " ";
    }
    for (int j = 0; j <= i; j++) {
        cout << faktorial(i) / (faktorial(j) * faktorial(i-j)) << " ";
    }
    cout << endl;
    }
    return 0; 
}
