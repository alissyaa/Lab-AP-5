#include <iostream>
#include <conio.h> //buat getch
using namespace std;

int main() {
    system("CLS");
    char *komp = "K O M P U T E R"; //masukin komp itu komputer
    komp +=8; //nunjuk huruf ke 8 (dari 0)
    cout << "Huruf kelima dari kata 'K O M P U T E R' ialah " << *komp; //output
    getch();
}