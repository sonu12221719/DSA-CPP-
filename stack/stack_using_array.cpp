#include<iostream>
using namespace std;

class Stack{
    private:
    int *arr;
    int size;
    int top;

    public:
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack is Overflow."<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is underflow."<<endl;
        }

    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty."<<endl;
            return -1;
        }

    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack st(5);
    st.push(41);
    st.push(42);
    st.push(43);
    st.push(44);
    cout<<"Peek element is: "<<st.peek()<<endl;
    st.pop();
    cout<<"Peek element is: "<<st.peek()<<endl;
    cout<<"Is Stack empty"<<st.isEmpty()<<endl;
    return 0;
}