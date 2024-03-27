#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int tinggi;
    string hasil;

    cout << "Berapa tinggimu: ";
    cin >> tinggi;

    hasil = (tinggi > 200) ? "Kamu berbakat menjadi pemain basket": "kamu belajar aja";

    cout << hasil << endl;
    return 0;
}