#include<iostream>

using namespace std;

int main(){
    int y, n,c,t;
    cin>>y>>n;
    c = n/3;
    t = 0;

    while (y>0)
    {
        y -= n + c;
        t += 1;
    }
    cout<<t<<endl;

}