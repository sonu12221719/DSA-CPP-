#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;

    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    return 0;
}