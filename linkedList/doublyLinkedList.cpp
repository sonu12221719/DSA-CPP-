#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertAtHead(Node* &head, int d){
    Node* newNode = new Node(d);
    newNode->next=head;
    newNode->prev=NULL;
    head=newNode;

}

void insertAtTail(Node* &head, int d){
    Node* newNode = new Node(d);
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    newNode->prev=temp;
    temp->next=newNode;
}

void insertAtPos(Node* &head, int d, int pos){
    if(pos==0){
        insertAtHead(head,d);
        return;
    }
    Node* newNode = new Node(d);
    Node* temp = head;
    int curr_pos =0;
    while(curr_pos!=pos-1){
        temp=temp->next;
        curr_pos++;
    }
    newNode->next=temp->next;
    newNode->prev=temp;
    temp->next = newNode;
    
}

void deleteAtHead(Node* &head){
    Node* temp = head;
    head=head->next;
    head->prev=NULL;
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
    }

    int curr_pos=0;
    Node* previous=head;
    while(curr_pos!=pos-1){
        previous=previous->next;
        curr_pos++;
    }
    Node* temp = previous->next;
    previous->next=temp->next;

    if (temp->next != NULL) {
        temp->next->prev = previous;
    }
    // previous->next->prev=previous;
    delete(temp);
}

int getLen(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void print(Node* head){
    Node* temp = head;
    cout<<"NULL<-";
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void print1(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->prev<<" "<<temp->data<<" "<<temp->next<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(4);
    print(head);
    insertAtHead(head,3);
    print(head);
    insertAtHead(head,2);
    print(head);
    insertAtTail(head,5);
    print(head);
    cout<<"length of LinkedList: "<<getLen(head)<<endl;
    insertAtPos(head,6,3);
    print(head);
    deleteAtHead(head);
    print(head);
    cout<<"Length of LinkedList: "<<getLen(head)<<endl;
    deleteAtTail(head);
    print(head);
    cout<<"Length of LinkedList: "<<getLen(head)<<endl;
    deleteAtPos(head,1);
    print(head);
    cout<<"Length of LinkedList: "<<getLen(head)<<endl;
    print1(head);

    return 0;
}