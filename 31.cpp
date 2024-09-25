#include <iostream>
using namespace std;

int main() {
    int pA = 0, pB = 0, pC = 0;
    int dA = 0, dB = 0, dC = 0;

    int a, b, c, d, e, f;
    cin >> a >> b; 
    cin >> c >> d; 
    cin >> e >> f; 

    if (a > b) pA += 3;
    else if (a < b) pB += 3;
    else pA++, pB++;
    dA += a - b;
    dB += b - a;

    if (c > d) pA += 3;
    else if (c < d) pC += 3;
    else pA++, pC++;
    dA += c - d;
    dC += d - c;

    if (e > f) pB += 3;
    else if (e < f) pC += 3;
    else pB++, pC++;
    dB += e - f;
    dC += f - e;

    if (pA > pB && pA > pC) cout << "A";
    else if (pB > pA && pB > pC) cout << "B";
    else if (pC > pA && pC > pB) cout << "C";
    else cout << "Draw";

    return 0;
}