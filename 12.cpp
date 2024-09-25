#include<iostream>
#include<iomanip>


using namespace std;

int main(){
    double p;
    cin>>p;

    double w = 1 - p/100.0;
    double h = 1 + 2 *p/100.0;

    double a = w*h;
    double pc = abs((a - 1) * 100);
    cout<<fixed<<setprecision(3)<<pc<<endl;

}