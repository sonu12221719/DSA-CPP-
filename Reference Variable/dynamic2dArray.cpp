#include<iostream>
using namespace std;

int main(){
    cout<<"Enter n and m: ";
    int n,m;
    cin>>n>>m;

    //creating 2d array
    int** arr = new int*[n];

    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }

    //taking input
    cout<<"Enter Array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    //output
    cout<<"array are: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}