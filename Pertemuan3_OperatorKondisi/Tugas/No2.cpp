#include <iostream>
using namespace std;

int main() {
    system("CLS");
    string nama;
    int Golongan, JumlahAnak;
    long GajiTotal, gol, anak, Pajak, GajiSementara;

    cout << "Masukkan Nama Anda : ";
    getline(cin, nama);
    cout << "Masukkan Golongan (1,2,3) : ";
    cin >> Golongan;
    cout << "Jumlah Anak: ";
    cin >> JumlahAnak;

    if (Golongan == 1) {
        gol = 5000000;
    } else if (Golongan == 2) {
        gol = 3000000;
    } else {
        gol = 2500000;
    }

    if (JumlahAnak >= 1 && JumlahAnak <= 2) {
        anak = 500000 * JumlahAnak;
    } else if (JumlahAnak > 2) {
        anak = 500000 * 2 + (JumlahAnak - 2) * 750000;
    } else {
        anak = 0;
    }

    GajiSementara = gol + anak;
    Pajak = GajiSementara * 0.05;
    GajiTotal = gol - Pajak;

    system("CLS");
    cout << "Nama Anda : " << nama << endl;
    cout << "Golongan (1,2,3) : " << Golongan << endl;
    cout << "Jumlah Anak : " << JumlahAnak << endl;
    cout << "Gaji Total : Rp." << GajiTotal << ",-" << endl;

    return 0;
}