#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  string nama;

  cout << "Input nama anda: ";
  cin >> nama;

  for (char c : nama) { 
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            c = 'o';
        }
        cout << c ;
    }    

  return 0;
}