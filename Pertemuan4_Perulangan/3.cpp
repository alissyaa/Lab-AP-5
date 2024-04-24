#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int a, b;
  
  y:
  cout << "Masukkan tahun: ";
  cin >> a;

  while (a < 1000 || a > 9000) { //ketika dia lebih kecil 1000 atau lebih besar dari 9000 maka eror dan akan dibawa ke awal (meminta inputan lagi)
        cout << "eror (input 1000 <= a <= 9000)" << endl;
        goto y; //ke y (ke awal)
    }
  
  cout << "Masukkan interval tahun: ";
  cin >> b;

  while (b < -a || b > 9999 - a) { //ketika dia lebih kecil -a atau lebih besar dari 9999-a maka eror dan akan dibawa ke awal (meminta inputan lagi)
        cout << "eror (input 1000 <= a <= 9000)" << endl;
        goto y; //ke y (ke awal)
    }

   if (b < 0){ //jika interval yang dimasukin dibawah 0 atau minus maka
    for (int i = b; i <= 0; i++){ 
        if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) { //cek kabisat
        cout << a << " kabisat" << endl;
        } else {
        cout << a << " bukan kabisat" << endl;
      }
      a--; //nnanti dia berkurang
    }
  } else { //tapi kalau selain itu (lebih dri atau sama dengan nol)
    for (int i = 0; i <= b; i++){
        if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) { //cek kabisat
        cout << a << " kabisat" << endl;
        } else {
        cout << a << " bukan kabisat" << endl;
      }
      a++; // maka nanti dia nambah
    }
  }
  return 0;
}