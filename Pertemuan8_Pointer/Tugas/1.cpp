#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int ganjil[10];  //array ganjil berisi 10 elemen

    for (int i = 0; i < 10; ++i) {
        ganjil[i] = 2 * i + 1; //ini buat angka ganjilnya, sebenrnya mau pake mod tapi pake ini jd lebih pendek
    }

    for (int i = 0; i < 10; ++i) { //biar diikuti sm alamat
        cout << ganjil[i] << " = " << &ganjil[i] << endl; //output
    }
    return 0;
}
 