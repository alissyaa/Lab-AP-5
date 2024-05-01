#include <iostream>
using namespace std;

int pangkat(int num1) {
    return num1 * num1;
}

int main() {
    system("CLS");
    int hasil1 = pangkat(3);
    int hasil2 = pangkat(6);
    int hasil3 = pangkat(9);
    int hasil4 = pangkat(12);
    
    cout << "pangkat(3)= " << hasil1 << endl;
    cout << "pangkat(6)= " << hasil2 << endl;
    cout << "pangkat(9)= " << hasil3 << endl;
    cout << "pangkat(12)= " << hasil4 << endl;
    return 0;
}