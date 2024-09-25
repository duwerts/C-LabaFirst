#include<iostream>

using namespace std;

int main(){
    int a, b, o;
    cin >> o >> a >> b;

    switch (o)
    {
    case 1:
        cout<<a+b<<endl;
        break;
    case 2:
        cout<<a-b<<endl;
        break;
    case 3:
        cout<<a*b<<endl;
        break;
    case 4:
        if(b==0 or a == 0) {
            cout<<"Error"<<endl;
        }else {
            cout<<a/b<<endl;
        }
        break;
    case 5:
        if(b==0 or a == 0) {
            cout<<"Error"<<endl;
        }else {
            cout<<a%b<<endl;
        }
        break;


    default:
        cout<<"Error"<<endl;
        break;
    }
}