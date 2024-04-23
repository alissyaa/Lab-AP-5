#include <iostream>
#include <string>

using namespace std;

void Dibalik(string str) {
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i] << endl;
    }
}

int main() {
    string kalimat;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    Dibalik(kalimat);

    return 0;
}