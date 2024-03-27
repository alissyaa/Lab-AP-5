#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int umur;

    cout << "Berapa umur kamu? ";
    cin >> umur;

    if (umur < 0) {
        cout << "Kamu bukan manusia";
    } else {
        switch (umur) {
            case 0 ... 5: cout << "Kamu masih balita"; break;
            case 6 ... 17: cout << "Kamu masih remaja"; break;
            case 18 ... 55: cout << "Kamu masih dewasa"; break;
            case 56 ... 70: cout << "Kamu sudah lansia"; break;
            default: cout << "Alhamdulillah"; break;
        }
    }
    return 0;
}
