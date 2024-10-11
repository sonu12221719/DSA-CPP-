#include <bits/stdc++.h>
using namespace std;

class Heap{
    vector<int> heap;

    public:
    Heap(){}

    void insert(int val){
        heap.push_back(val);
        int index = heap.size()-1;
        heapifyMax(index);
    }

    void display(){
        for(int i:heap){
            cout<<i<<" ";
        }
        cout<<endl;
    }


    private:
    void heapifyMax(int index){
        if(index==0) return;

        int parent = (index-1)/2;
        if(heap[parent]<heap[index]){
            swap(heap[parent],heap[index]);
            heapifyMax(parent);
        }
    }

    void heapifyMin(int index){
        if(index==0) return;

        int parent = (index-1)/2;
        if(heap[parent]>heap[index]){
            swap(heap[parent],heap[index]);
            heapifyMin(parent);
        }
    }
};

int main(){
    int n;
    cin>>n;

    Heap h;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;

        h.insert(val);
    }
    h.display();
    return 0;
}