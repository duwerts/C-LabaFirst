#include<iostream>
#include<cmath>


using namespace std;

int main() {
    int a, b, sum = 0;

    cin >> a;
    a = abs(a);


    while (a > 0) {
        b = a % 10;  
        sum += b;        
        a /= 10;       
    }

    cout<<sum<<endl;
}