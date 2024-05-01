#include <iostream>
using namespace std;

int faktorial(int input) {
    if (input > 1) {
        return input * faktorial(input-1);
    } else {
        return 1;
    }
}
int main() {
    system("CLS");
    
    int bilangan;
    
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    cout << "Hasil dari 5! = " << faktorial(bilangan);
    
    return 0;
}