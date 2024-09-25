#include<iostream>

using namespace std;

int main(){
    int A, x, y;
    cin>>A>>x>>y;
    if (A == 1){
        cout<<x+y<<endl;
    }else if (A == 2 && x>y)
    {
        cout<<x-y<<endl;
    }else if (A == 3 && x != 0 or y != 0)
    {
        cout<<x*y<<endl;
    }else if (A == 4 || x != 0 or y != 0)
    {
        cout<<x/y<<endl;
    }else if (A == 5 && x != 0 or y != 0)
    {
        cout<<x%y<<endl;
    }else{
        cout<<"Error";
    }
    
    
    
}