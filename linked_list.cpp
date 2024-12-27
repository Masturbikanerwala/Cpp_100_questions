#include<iostream>
using namespace std;

// Create Node

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// Insert at Tail

void insertAtTail(Node* &head, int data){

Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

// Linked List Print

void print(Node* &head){

    if(head == NULL){
        cout<<"Linked List Empty!"<<endl;
        return;
    }

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp= temp->next;
    }

    cout<<"NULL"<<endl;

}

int main(){
    Node* head = NULL;

    print(head);

    cout<<"Insert 10 at tail : "<<endl;
    insertAtTail(head, 10);

    print(head);
    cout<<"Insert 20 at tail : "<<endl;

    insertAtTail(head, 20);
    print(head);
}
