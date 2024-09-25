#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    int arr[4] = {a, b, c, d};

    sort(arr, arr + 4, greater<int>());
    for (int i = 0; i < 4; i++){
        cout<<arr[i]<<" "<<endl;
    }

}