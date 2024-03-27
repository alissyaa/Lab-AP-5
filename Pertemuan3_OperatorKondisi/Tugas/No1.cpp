#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int bil;
  string hasil;
  
  cout << "Masukkan bilangan : ";
  cin >> bil;

  hasil = (bil % 2 == 0) ? "Bilangan Genap" : "Bilangan Ganjil"; //karena di soal hanya 2 pilihan (ganjil atau genap) jadi pakai ternary

  cout << hasil << endl;
  return 0;
}