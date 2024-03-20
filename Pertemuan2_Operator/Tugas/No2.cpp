#include <iostream>
#include <cmath>
using namespace std;

int main(){
    system("CLS");

    int a, b, c;
    double x1, x2;

    cout<<"Nilai A: "; cin>> a;
    cout<<"Nilai B: "; cin>> b;
    cout<<"Nilai C: "; cin>> c;

    x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    x2 = (-b-sqrt(b*b-4*a*c))/(2*a);

    system("CLS");
    cout << "x1 adalah " << x1 << endl;
    cout << "x2 adalah " << x2 << endl;
}