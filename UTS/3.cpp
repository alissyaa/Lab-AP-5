#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int bilangan, ulang;

y: 
    cout << "\nMasukkan suatu bilangan bulat: ";
    cin >> bilangan;

    if (bilangan <= 0) {
        cout << "masukkan bilangan bulat positif!" << endl;
        goto y;
    } 
        
    bool prima = true;
    if (bilangan <= 1) {
        prima = false;
    } else {
        for (int i = 2; i <= bilangan/2; i++) {  
            if (bilangan % i == 0) {
                prima = false;
                break; 
            }
        }
    }
    
    if (prima) {
        cout << bilangan << " adalah bilangan prima" << endl;
    } else {
        cout << bilangan << " bukan bilangan prima" << endl;
    }

    cout << "\nApakah anda ingin mengulang? (y/t)" << endl;
    cin >> ulang;
    if (ulang == 'Y' || ulang == 'y') {
        goto y;
    }

    return 0;
}
