#include <iostream>
using namespace std;

int main() {
    int I = 2, K = 7, L = 1, C = 9, U = 5, S = 6;

    system ("CLS");
        cout << "Hasil dari 3-1<I OR K-5<8+2 AND L+7>=9+3 adalah " << (3-1<I || K-5<8+2 && L+7>=9+3) << endl; 
        cout << "Hasil dari L%3>U AND (C/U<S OR 3*I-K>0) adalah " << (L%3>U && (C/U<S || 3*I-K>0)) << endl; 
        cout << "Hasil dari I-9>K OR L+3<4*C adalah " << (I -9>K || L+3<4*C) << endl; 
        cout << "Hasil dari I OR K AND L XOR 3 SHL 2 (bitwise) adalah " << (I | K & L ^ 3 << 2) << endl; 
}

/* cara manual
note: 
1. prioritas logika dan & relasi (!, (>, >=, <, <=), (==, !=), &&, ||)
2. prioritas bitwise (~, (<<, >>) &, ^, |)
a.  3-1<I OR K-5<8+2 AND L+7>=9+3
    kerjakan < dan >= dulu
    4 < I(2) = FALSE
    K(7)-5 < 8+2 = 2<10 = TRUE
    L(1)+7 >= 9+3 = 8 >= 12 = FALSE 
    maka, FALSE OR TRUE AND FALSE
    kerjakan and dulu
    TRUE AND FALSE = FALSE
    maka, FALSE OR FALSE = FALSE = 0
b.  L%3>U AND (C/U<S OR 3*I-K>0)
    kerjakan < dan > dulu
    L(1)%3 > U(5) = FALSE
    C(9)/U(5) < S(6) = TRUE
    3*I(2)-K(7) > 0 = 6-7 > 0 = -1 > 0 = FALSE 
    maka, FALSE AND (TRUE OR FALSE) = FALSE = 0
c.  I-9>K OR L+3<4*C
    kerjakan > dan < dulu
    I(2)-9 > K(7) = -7 > 7 = FALSE 
    L(1)+3 < 4*(9) = 4 < 36 = TRUE 
    maka, FALSE OR TRUE = TRUE = 1
d.  I OR K AND L XOR 3 SHL 2
    kerjakan dulu SHL
    3 SHL 2 = 0011 << 2 = 01100 = 12
    lalu kerjakan AND
    K(7) AND L(1) = 0111 AND 0001 = 0001 = 1
    lalu kerjakan XOR 
    0001 XOR 1100 = 1101 = 13
    lalu kerjakan OR
    I(2) OR 1101 = 0010 OR 1101 = 1111 = 15 */