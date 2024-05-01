#include <iostream>
using namespace std;

//variabel global
int num3 = 10;

int sumNumber(int num1, int num2 = 10) {
    // int num 3 = 10;
    // variabel lokal
    return num1 + num2 + num3;
}

int main() {
    system("CLS");
    
    cout << num3 << endl;

    int hasil = sumNumber(5);
    
    cout << "Hasil " << hasil;

    return 0;
}
/* int sum(int num1, int num2) {


    return //untuk megnembalikan nilai dari fungsi, klo ga nnti tipe  data awalnya pake void
} */