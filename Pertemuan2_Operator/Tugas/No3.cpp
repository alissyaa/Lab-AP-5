#include <iostream>
#include <cmath> //buat sqrt
#include <cctype> //buat toupper
using namespace std;

#define phi 3.14 //tetapin phi nya

int main(){
    system ("CLS");

    float a, r, s, t, tLimas, a1p, a2p, a3p, LPKerucut, VolKerucut, LPLimasSegitiga, VolLimasSegitiga, LPBola, VolBola, LPPrisma, VolPrisma, LAlasPrisma, KAlasPrisma;
    char choice;
    cout << "Program menghitung Luas Permukaan dan Volume" << endl;      
    cout << "A. Kerucut" << endl; 
    cout << "B. Limas" << endl; 
    cout << "C. Bola" << endl; 
    cout << "D. Prisma" << endl; 
    cout << "Pilih A/B/C/D: ";
    cin >> choice;

    choice = toupper(choice); //biar kalau ada yang masukin huruf kecil tetap bisa
    
    switch(choice) {
        case 'A': 
        system("cls");
            cout << "Kerucut area" << endl;
            cout << "Masukkan Jari-jari (cm) : "; cin >> r;
            cout << "Masukkan tinggi (cm): "; cin >> t;
            LPKerucut = phi * r * (r + sqrt(t * t + r * r));
            VolKerucut = (1.0/3.0) * phi * r * r * t;
            cout << "Luas Permukaan Kerucut ialah " << LPKerucut << " cm^2"<< endl;
            cout << "Volume Kerucut ialah " << VolKerucut << " cm^3"<< endl;
            break;
        case 'B': 
        system("cls");
            cout << "Limas Segitiga area" << endl;
            cout << "Masukkan alas (cm) : "; cin >> a;
            cout << "Masukkan tinggi (cm): "; cin >> t;
            cout << "Masukkan tinggi limas (cm): "; cin >> tLimas;
            LPLimasSegitiga = 0.5 * a * t + 3 * 0.5 * a * tLimas;
            VolLimasSegitiga = (1.0/6.0) * a * t * tLimas;
            cout << "Luas Permukaan Limas Segitiga ialah " << LPLimasSegitiga << " cm^2"<< endl;
            cout << "Volume Limas Segitiga ialah " << VolLimasSegitiga << " cm^3"<< endl;
            break;
        case 'C': 
        system("cls");
            cout << "Bola area" << endl;
            cout << "Masukkan jari-jari (cm): "; cin >> r;
            LPBola = 4 * phi * r * r;
            VolBola = (4.0/3.0) * phi * r * r * r;
            cout << "Luas Permukaan Bola ialah " << LPBola << " cm^2"<< endl;
            cout << "Volume Bola ialah " << VolBola << " cm^3"<< endl;
            break;
        case 'D': 
        system("cls");
            cout << "Prisma area" << endl; //saya pakai rumus prisma segitiga
            cout << "Masukkan panjang alas (bagian tinggi) prisma (cm) : "; cin >> a1p;
            cout << "Masukkan panjang alas (bagian bawah) prisma (cm) : "; cin >> a2p;
            cout << "Masukkan panjang alas (bagian miring) prisma (cm) : "; cin >> a3p;
            cout << "Masukkan tinggi (cm): "; cin >> t;
            LAlasPrisma = 0.5 * a1p * a2p;
            KAlasPrisma = a1p + a2p + a3p;
            LPPrisma = (2 * LAlasPrisma) + (KAlasPrisma * t);
            VolPrisma = LAlasPrisma * t;
            cout << "Luas Permukaan Prisma ialah " << LPPrisma << " cm^2"<< endl;
            cout << "Volume Prisma ialah " << VolPrisma << " cm^3"<< endl;
            break;
        default: cout << "huruf yang kamu masukin salah :(( ayo belajar membaca lagi";
    }
}