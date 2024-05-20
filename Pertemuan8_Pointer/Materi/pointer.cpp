#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    //variabel biasa
    int angka= 10; //deklarasi dan assignment
    cout<<angka<<endl; //menampilkan isi dari variabel angka
    cout<<&angka<<endl; //menampilkan alamat dari variabel

    int *ptrAngka; //deklarasi variabel pointer
    cout<<*ptrAngka<<endl; //menampilkan isi dari variabel 
    cout<<ptrAngka<<endl; //menampilkan alamat dari 
    
    ptrAngka= &angka;

    cout<<*ptrAngka<<endl;
    cout<<ptrAngka<<endl;
    cout<<&ptrAngka<<endl;

    angka= 11;

    cout<<*ptrAngka<<endl;

    return 0;
}