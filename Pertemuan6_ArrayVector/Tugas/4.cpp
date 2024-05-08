#include <iostream> 
#include <vector> //untuk vector
#include <sstream> 

using namespace std;

int main() {
    vector<int> panjang; 
    string x; 

    cout << "Masukkan sebuah deret angka: ";  
    getline(cin, x);         

    istringstream stream(x); //stringstream untuk misahin string input angka yg dtd dipidah jd spasi jadi angka integer trus dimasukin ke vektor
    int angka;                
    while (stream >> angka) 
        panjang.push_back(angka); //masukin angka ke vektor

    cout << "Panjang vektor: " << panjang.size() << endl;  

    for (auto i = panjang.begin(); i != panjang.end(); ++i) { //cekvektor
        cout << *i << endl; 
        panjang.erase(i); //hapus elemendari vektor
        --i; 
    }

    cout << "Panjang vektor setelah dihapus: " << panjang.size() << endl; //nampilon hasil setelah dihapus
    return 0;  
}
