#include <iostream>
using namespace std;

int main() {
    system("CLS"); 

    int input, output = 0; 

    y:
    cout << "Masukkan sampai ke-n: "; 
    cin >> input;


    while (input <= 0 || input > 10000) { //ketika dia lebih kecil 0 atau lebih besar dari 10000 maka eror dan akan dibawa ke awal (meminta inputan lagi)
        cout << "eror (input 0<N<=10000)" << endl;
        goto y; //ke y (ke awal)
    }

    for (int i = 0; i <= input; i++) { 
        if (i % 2 == 0) {  //jika i nya nanti bil genap
            output += i*i; // maka dia akan mengalikan dirinya sendiri agar jadi kuadrat dan hasilnya itu nanti ditambah ke var outputnya
        }
    } 
    cout << "output adalah " << output;
    return 0;
}