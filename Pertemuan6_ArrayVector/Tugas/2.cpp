#include <iostream>
#include <cmath> //untuk sqrt
#include <iomanip> //untuk set precision
using namespace std;

//buat rumus
float rumus(int A, int B, int C) {
    return sqrt(A * A + B * B + C * C);
}

int main() {
    int angka[3][3]; //karena 3x3

    cout << "Masukkan efisiensi dari tabel 3x3: " << endl;

    //masukin nilai efisiensinya
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> angka[i][j];
        }
    }

    //cari efisiensi tertinggi
    double efisiensitinggi = 0;
    for (int i = 0; i < 3; ++i) { //untuk baris pertama
        for (int j = 0; j < 3; ++j) { //untuk baris kedua
            for (int k = 0; k < 3; ++k) { //untuk baris ketiga
                if (i != j && j != k && i != k) { //dicek apakah i j k itu beda beda
                    double efisiensi = rumus(angka[0][i], angka[1][j], angka[2][k]); //simpan nilai tertingginya
                    efisiensitinggi = max(efisiensitinggi, efisiensi); 
                }
            }
        }
    }

    cout << fixed << setprecision(1) << "Nilai efisiensi: " << efisiensitinggi << endl; //set presicion(1) nampilin satu angka di belakgan koma
    return 0;
}
