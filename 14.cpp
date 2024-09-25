#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    double A, B, C;
    cin>>A>>B>>C;
    double x1  = (C - B)/ A;
    double x2 = (-C - B)/A;

    cout<<fixed<<setprecision(3)<<x1<<" "<<x2<<endl;
}