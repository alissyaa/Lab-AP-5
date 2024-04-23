#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int tinggi;
  cout << "Input tinggi diamond (ganjil): ";
  cin >> tinggi;

  for (int i = 0; i < tinggi; i++) {
    for (int j = tinggi; j > i+1; j--) {
      cout << " ";
    }
    for (int k = 0; k <= i; k++) {
      cout << "* ";
    }
    cout << endl;
  }
  
  for (int i = tinggi; i > 0; i--) {
    for (int j = 0; j < tinggi - i; j++) {
        cout << " ";
    }
    for (int k = 0; k < i; k++) {
        cout << "* ";
    }
    cout << endl;
  }
  
  return 0;
}