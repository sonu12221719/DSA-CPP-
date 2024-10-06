#include <iostream>
using namespace std;

//1234
//1234
//1234
//1234

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}