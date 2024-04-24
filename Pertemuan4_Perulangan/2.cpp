#include <iostream>
#include <cctype> //untuk tolower dan toupper
using namespace std;

int main() {
    system("CLS");
    
    int hapus = 0;
    char karakter;
    string hasil, input;

    cout << "Input Kalimat: "; 
    getline(cin, input);  
    cout << "Input karakter yang ingin dihapus: "; 
    cin >> karakter;

    for (char c : input) {
        if (c != tolower(karakter) && c != toupper(karakter)) { // kalau karakter tidak sama dgn yang ingin dihapus (pake topuuer dan tolower biar deteksi baik yg huruf besar atau kecil)
            hasil += c; // karakternya dimasukkan ke dalam hasil.
        } else {
            hapus++; //kalau karakter sama dengan yg dihapus maka ditambah 1
        }
    }
    system ("CLS");
    cout << hasil << endl; 
    cout << "Karakter terhapus = " << hapus;
    return 0;
}