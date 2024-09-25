#include<iostream>

using namespace std;

int main(){
    int H, M, S;
    int H1, M1, S1;
    cin>>H>>M>>S>>H1>>M1>>S1;

    S += S1;
    M += S / 60;
    S %= 60;

    M += M1;
    H += M / 60;
    M %= 60;

    H += H1;
    H %= 24;

    cout<<H<<" "<<M<<" "<<S<<endl;
    
}