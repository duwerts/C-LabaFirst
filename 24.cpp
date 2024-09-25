#include <iostream>
#include <cmath>
using namespace std;

bool KingMove(int kingX, int kingY, int x, int y) {
    return abs(kingX - x) <= 1 && abs(kingY - y) <= 1;
}

int main() {
    int cells[5][2]; 
    int kingX, kingY;

    for (int i = 0; i < 5; i++) {
        cin >> cells[i][0] >> cells[i][1];
    }

    cin >> kingX >> kingY;

    for (int i = 0; i < 5; i++) {
        int x = cells[i][0];
        int y = cells[i][1];
        
        if (KingMove(kingX, kingY, x, y)) {
            cout << x << " " << y << endl; 
        }
    }

    return 0;
}
