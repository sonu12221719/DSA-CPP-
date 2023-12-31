// //using array

// #include<iostream>
// using namespace std;

// class Stack{
//     int* arr;
//     int top;
//     int size;

//     public:
//     Stack(int s){
//         this->size=s;
//         arr=new int[size];
//         top=-1;
//     }

//     void push(int element){
//         if(size-top>1){
//             top++;
//             arr[top]=element;
//         }
//         else{
//             cout<<"Stack is overflow."<<endl;
//         }
//     }

//     void pop(){
//         if(top>=0){
//             top--;
//         }
//         else{
//             cout<<"Stack is underflow."<<endl;
//         }
//     }

//     int peek(){
//         if(top>=0){
//             return arr[top];
//         }
//         else{
//             cout<<"Stack is empty."<<endl;
//             return -1;
//         }
//     }

//     bool isEmpty(){
//         if(top==-1){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }
// };

// int main(){
//     string str="sonu";
//     Stack st(str.length());
    
//     for(int i=0;i<str.length();i++){
//         char ch=str[i];
//         st.push(ch);
//     }

//     string ans="";

//     while(!st.isEmpty()){
//         char ch=st.peek();
//         ans.push_back(ch);
//         st.pop();
//     }
//     cout<<ans<<endl;

//     return 0;
// }


//using LinkedList
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

class Stack{
    int capacity;
    Node* top;
    int curr_size;

    public:
    Stack(int c){
        this->capacity=c;
        top=NULL;
        curr_size=0;
    }

    void push(int element){
        if(capacity==curr_size){
            cout<<"Stack is overflow."<<endl;
        }
        Node* newNode = new Node(element);
        newNode->next=top;
        top=newNode;
        curr_size++;
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack is underflow."<<endl;
            return;
        }
        else{
            Node* temp = top;
            top=top->next;
            delete(temp);
            curr_size--;
        }
    }

    int peek(){
        if(top==NULL){
            cout<<"Stack is empty."<<endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty(){
        if(top==NULL){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    string str="sonu";
    Stack st(str.length());
    
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        st.push(ch);
    }

    string ans="";
    while(!st.isEmpty()){
        char ch=st.peek();
        ans.push_back(ch);

        st.pop();
    }

    cout<<"Reverse string is: "<<ans<<endl;
    return 0;
}