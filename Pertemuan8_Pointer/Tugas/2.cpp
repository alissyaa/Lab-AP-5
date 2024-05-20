#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int x, *px; x = 25;
    
    px = &x; //munnculinalamat
    *px = x; //jadiin nilai x=25 jd keluarnya 25

    return 0;
}

