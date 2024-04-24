#include <iostream>
using namespace std;

int main() {
    system("cls");

    int suku, angka = 1; //nilai awal untuk angka pertama
    
    x:
    cout << "Masukkan batas suku ke: "; 
    cin >> suku;

    while (suku <= 0 || suku >= 10000){ //buat batasan lebih dari 10000 dan jika 0 atau kurang dari 0 maka ulang ke awa
    cout << "masukkan lebih dari 0 atau kurang dari 10000";
    goto x;
    }
 
    system("CLS");
    cout << angka << " ";  //tampilkan nilai awal yang tadi ditetapkan 

        for (int i = 2; i <= suku; i++) {
        if (i % 2 == 0) {  
            angka += 5; //jika i nya genap maka ditambah 5
            cout << angka << " ";  //munuclin angka dan tambahin spasi
        } else {
            angka += 3; //jika i nya ganjil maka ditambah 5
            cout << angka << " "; //munuclin angka dan tambahin spasi
        }
    }
    return 0;
}