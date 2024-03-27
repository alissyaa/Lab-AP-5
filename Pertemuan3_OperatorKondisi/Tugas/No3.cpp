#include <iostream>
using namespace std;

int main() {
    system ("CLS");
    float bb, tinggi, bmi;

    cout << "Masukkan berat badan anda (kg): ";
    cin >> bb;

    cout << "Masukkan tinggi anda (m) (cth: 170 cm = 1.7 m): ";
    cin >> tinggi;

    bmi = bb / (tinggi * tinggi);

    system("CLS");
    if (bmi < 18.5) {
        cout << "BMI anda: = " << bmi << endl;
        cout << "Kategori berat badan: Berat Badan Kurang" << endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "BMI anda: = " << bmi << endl;
        cout << "Kategori berat badan: Berat Badan Normal" << endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout << "BMI anda: = " << bmi << endl;
        cout << "Kategori berat badan: Berat Badan Berlebih" << endl;
    } else {
        cout << "BMI anda: = " << bmi << endl;
        cout << "Kategori berat badan: Obesitas" << endl;
    }

    return 0;
}
