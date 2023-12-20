#include<iostream>
using namespace std;

int getSum(int* arr, int n){
    int sum = 0;
    for(int i=0; i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    cout<<"Enter size: ";
    int n;
    cin>>n;
    //int arr1[n]; //bad practice
    //Because this is static array of variable length and static array is perform in stack. 
    //And stack contain less amount of memory with through error if we demand larger amount of memory
    //So, for making array of varible length we should declare array dynamically because Dynamic array
    //works in heap which have larger amount of space 

    //heap only return address of space, which type of variable we want. So for storing storing this 
    //we need reference varible like
    //int* a = new int;//this is a variable of int datatype which is "new int " will provide space in 
    //heap memory

    //create a array of dynamically
    int* arr = new int[n];//Good practice

    cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = getSum(arr,n);
    cout<<"Answer: "<<ans<<endl;

    //static array is declared in compile time while dynamic array is declare in run time
    //static variable release their space after scope or we can say work but dynamic variable donot
    //for releasing dynamic variable space we use 'delete' keyword
    //static varible takes only size of varible in stack but dynamic variable takes sum of size of reference variable in stack of 8byte and in heap memory size of varible or value
    
    cout<<"Before Delete: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete []arr;//deleting array from heap memory
    //cout<<"After Delete: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}