#include<iostream>

using namespace std;

int main(){
    for (int i = 0; i < 5; ++i){
        int X;
        cin>>X;
        int x1 = X/10;
        int x2 = X%10;
        if (x1 != x2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}