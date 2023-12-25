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
void insertAtHead(Node* &head,int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int data){
    Node* newNode = new Node(data);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;

}

void insertAtPos(Node* &head, int data, int pos){
    if(pos==0){
        insertAtHead(head,data);
        return;
    }
    Node* newNode = new Node(data);
    Node* temp = head;
    int currPos=0;
    while(currPos!=pos-1){
        temp=temp->next;
        currPos++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void updateAtPos(Node* &head,int data, int pos){
    Node* temp = head;
    int curr_pos=0;
    while(curr_pos!=pos){
        temp=temp->next;
        curr_pos++;
    }
    temp->data=data;
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    head = temp->next;
    free(temp);
}

void deleteAtTail(Node* &head){
    Node* secondLast = head;
    while(secondLast->next->next!=NULL){
        secondLast=secondLast->next;
    }
    Node* temp = secondLast->next;
    secondLast->next=NULL;
    free(temp);
    
}

void deleteAtPos(Node* &head, int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    Node* prev = head;
    int curr_pos=0;
    while(curr_pos!=pos-1){
        prev=prev->next;
        curr_pos++;
    }
    Node* temp = prev->next;
    prev->next=prev->next->next;
    free(temp);
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}

int main(){
    Node* head=new Node(5);
    print(head);
    // cout<<obj<<endl;
    // cout<<obj->data<<endl;
    // cout<<obj->next<<endl;
    insertAtHead(head,4);
    print(head);
    insertAtHead(head,3);
    print(head);
    insertAtTail(head,6);
    print(head);
    insertAtTail(head,8);
    print(head);
    insertAtPos(head,7,4);
    print(head);
    updateAtPos(head,9,4);
    print(head);
    deleteAtHead(head);
    print(head);
    deleteAtTail(head);
    print(head);
    deleteAtPos(head,3);
    print(head);


    return 0;
}