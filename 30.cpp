#include<iostream>

using namespace std;

int main()
{
    int a1,a2,b1,b2,c1,c2;
    int A = 0;
    int B = 0;
    int C = 0;
    cin>>a1>>b1;
    cin>>a2>>c1;
    cin>>b2>>c2;
    if (a1 >b1){
        A += 3;
    }else if (a1<b1)
    {
        B += 3;
    }else if (a1 == b1)
    {
        A += 1;
        B += 1 ;
    }

    if (a2 >c1){
        A += 3;
    }else if (a2<c1)
    {
        C += 3;
    }else if (a2 == c1)
    {
        A += 1;
        C += 1 ;
    }


    if (b2 >c2){
        B += 3;
    }else if (b2<c2)
    {
        C += 3;
    }else if (b2 == c2)
    {
        B += 1;
        C += 1 ;
    }

    if (A >B && A > C){
        cout<<"A\n";
    }
    else if (B>A && B > C)
    {
        cout<<"B\n";
    }else if (C > A && C > B)
    {
        cout<<"C\n";
    }else if (A == B or A == B or A == C or B == A)
    {
        cout<<"Draw\n";
    }
    
}