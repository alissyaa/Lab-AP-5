#include <iostream>
using namespace std;

int main() {
    system('CLS');

    char nilai;

    cout << "Berapa nilai kamu: ";
    cin >> nilai;

    if (nilai = 'A') {
        cout << "Bagus, pertahankan";
    } else if (nilai = 'B') {
        cout << "Tingkatkan";
    } else if (nilai = 'C') {
        cout << "Lumayan";
    } else if (nilai = 'D') {
        cout << "Kurang";
    } else if (nilai = 'E') {
        cout << "Jelek";
    } else {
        cout << "Invalis, silahkan input dengan benar";
    }
    
    return 0;
}