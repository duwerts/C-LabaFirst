#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int a[5]; 
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        if (((a[i]>999 and a[i]<10000) or (a[i]<-999 and a[i]>-10000)) and a[i]%2>0 and a[i]%3!=0 and a[i]%5!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}