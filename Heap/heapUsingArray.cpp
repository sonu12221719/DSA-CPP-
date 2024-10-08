#include <bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;

    Heap():size(0){
        arr[0]=-1;
    }

    void insert(int value){
        size+=1;
        int index=size;
        arr[index]=value;
        heapifyMax(index);
    }

    //Max-Heap
    void heapifyMax(int index){
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }

    //Min-Heap
    void heapifyMin(int index){
        while(index>1){
            int parent=index/2;
            if(arr[parent]>arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Heap h;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        h.insert(val);
    }

    h.print();

    return 0;
}