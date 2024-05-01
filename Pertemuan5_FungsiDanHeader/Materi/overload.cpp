#include <iostream>
using namespace std;

int operasi(int num1, int num2) {
    return num1 * num2;
}

float operasi(float num3, float num4) {
    return num3 / num4;
}
    
int main() {
    system("CLS");

    int x = 5, y = 4;
    float n = 2.3, m = 2.2;

    cout << "Hasil Perkalian: " << operasi(10, 5) << endl;
    cout << "Hasil Pembagian: " << operasi(10.5 , 5) << endl;
    
    return 0;
}