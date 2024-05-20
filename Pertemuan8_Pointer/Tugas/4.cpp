#include <iostream>
using namespace std;

void penambahan(int *a, int *b) { //buat penambahan
    cout << "Hasil penambahan: " << *a + *b << endl;
}

void pengurangan(int *a, int *b) { //buat pengurangan
    cout << "Hasil pengurangan: " << *a - *b << endl;
}

void perkalian(int *a, int *b) { //buat perkallian
    cout << "Hasil perkalian: " << *a * *b << endl;
}

void pembagian(int *a, int *b) { //buat pembagian
    if (*b != 0) { //ini dibuat karena pas input b nya 0 itu gk muncul apa apa
        cout << "Hasil pembagian: " << *a / *b << endl;
    } else {
        cout << "Gak terdefenisi" << endl; 
    }
}


int main() {
    system("CLS");
    int a, b;
    char operasi;

    cout << "Masukkan operasi (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan dua angka: ";
    cin >> a >> b;

    switch (operasi) { //pakai case karena lebih enak diliat daripasa if
        case '+': penambahan(&a, &b); break;
        case '-': pengurangan(&a, &b); break;
        case '*': perkalian(&a, &b); break;
        case '/': pembagian(&a, &b); break;
        default: cout << "eror  >-<" << endl;
        return 1;
    }
    return 0;
}