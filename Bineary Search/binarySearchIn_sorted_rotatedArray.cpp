#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int s, int e,int k){
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==k){
            return mid;
        }else if(arr[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int getPivot(vector<int>& arr, int n){
    int s=0;int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}

int search(vector<int>& arr, int n, int key){
    int pivot = getPivot(arr, n);
    if(key >= arr[pivot] && key<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,key);
    }
    else{
        return binarySearch(arr,0,pivot-1,key);
    }
}

int main(){
    int n,k;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter Key: ";
    cin>>k;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr[i]=ele;
    }
    cout<<search(arr,n,k)<<endl;
    return 0;
}