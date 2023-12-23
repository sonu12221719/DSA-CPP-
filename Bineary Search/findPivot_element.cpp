#include<iostream>
#include<vector>
using namespace std;

int getPivot(vector<int>& arr, int n){
    int s=0;int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        
        if(arr[mid]<arr[e]){
            e=mid;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return arr[s];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    cout<<"Enter Array: ";
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr[i]= element;
    }
    
    cout<<"Pivot element is: "<<getPivot(arr,n)<<endl;
    

    return 0;
}