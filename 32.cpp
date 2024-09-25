#include <iostream>
using namespace std;

int main() {
    int a1, a2, b1, b2, c1, c2;
    int A = 0, B = 0, C = 0;
    int dA = 0, dB = 0, dC = 0;

    cin >> a1 >> b1; 
    cin >> a2 >> c1; 
    cin >> b2 >> c2; 

    if (a1 > b1) A += 3;
    else if (a1 < b1) B += 3;
    else { A++; B++; }
    dA += (a1 - b1);
    dB += (b1 - a1);

    if (a2 > c1) A += 3;
    else if (a2 < c1) C += 3;
    else { A++; C++; }
    dA += (a2 - c1);
    dC += (c1 - a2);


    if (b2 > c2) B += 3;
    else if (b2 < c2) C += 3;
    else { B++; C++; }
    dB += (b2 - c2);
    dC += (c2 - b2);

    if (A > B && A > C) cout << "A\n";
    else if (B > A && B > C) cout << "B\n";
    else if (C > A && C > B) cout << "C\n";
    else {
        // Якщо очки рівні, порівнюємо різницю м'ячів
        if (A == B && A > C) {
            if (dA > dB) cout << "A\n";
            else if (dB > dA) cout << "B\n";
            else cout << "Draw\n";
        } else if (A == C && A > B) {
            if (dA > dC) cout << "A\n";
            else if (dC > dA) cout << "C\n";
            else cout << "Draw\n";
        } else if (B == C && B > A) {
            if (dB > dC) cout << "B\n";
            else if (dC > dB) cout << "C\n";
            else cout << "Draw\n";
        } else {
            cout << "Draw\n";
        }
    }

    return 0;
}