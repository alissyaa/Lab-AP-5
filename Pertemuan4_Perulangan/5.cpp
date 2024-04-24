#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int bilangan;

y: 
    cout << "\nMasukkan suatu bilangan bulat: ";
    cin >> bilangan;

    while (bilangan <= 0 || bilangan > 10000) { //ketika dia lebih kecil 1 atau lebih besar dari 10000 maka eror dan akan dibawa ke awal (meminta inputan lagi)
        cout << "eror (masukkan bilangan 0<N<=10000)";
        goto y; //ke y (ke awal)
    }
        
    bool prima = true;
    if (bilangan <= 1) { //jika bilangannya kurang dari sama dengan 1 maka false
        prima = false;
    } else {
        for (int i = 2; i <= bilangan/2; i++) {   //mulai dari 2 hingga bilangan/2 karena jika ada faktor yang lebih besar dari setengah bilangan, maka akan ada faktor yang lebih kecil dari setengahnya juga yang sudah diperiksa sebelumnya
            if (bilangan % i == 0) { //periksa bilangannya habis dibagi dengan i. Jika habis dibagi, berarti false.
                prima = false;
                break; //keluar dari loop
            }
        }
    }
    
    system ("CLS");
    if (prima) {
        cout << bilangan << " itu Prima" << endl;
    } else {
        cout << bilangan << " itu Bukan Prima" << endl;
    }
    return 0;
}
