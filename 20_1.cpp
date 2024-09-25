#include<iostream>

using namespace std;

int main(){
    for (int i = 0; i < 5; ++i) {
        int num;
        cin >> num;
        
        if ((num > 1000 && num < 9999 && num % 3 == 0) || 
            (num > 1000 && num < 9999 && num % 5 == 0 && num > 0 && num % 2 != 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}