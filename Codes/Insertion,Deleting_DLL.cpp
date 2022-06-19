#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev = NULL;
        Node* next = NULL;
    
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//returns lenght of linkedlist
void getLenght(Node* &head){

    Node* temp = head;
    int length  = 0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    cout<<length<<endl;
}

//inserts head of linked list
void insertAtHead(Node* &head,Node* &tail,int d){
    
    //inserting at empty list
    if(head == NULL){
        Node* node1 = new Node(d);
        head = node1;
        tail = node1;
        head = node1;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node* &head,Node* &tail,int d){

    //inserting tail at empty list
    if(tail == NULL){                       //**Here we just make sure if we trying to insert head in empty list 
        Node* node1 = new Node(d);          
        tail = node1;
        head = node1;
    }
    else{                                   //**Here inserting in non empty list
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(Node* &head,Node* tail,int position,int d){

    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
    
}

void deleteNode(int position,Node* &head,Node* &tail){

if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
else {
    Node* current = head;
    Node* previous = NULL;

    int count = 1;
    while(count < position){
        previous = current;
        current = current->next;
        count++;
    }

    current->prev = NULL;
    previous->next = current->next;

    if(current->next ==NULL){                       //**Here we make sure that if we deleting last node then we should update the tail
        tail = previous;
        delete current;
        current->prev = NULL;
    }
    else{
        current->next->prev = current->prev;
        current->next = NULL;
        delete current;
    }
}
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    
    insertAtHead(head,tail,1);
    print(head);

    insertAtTail(head,tail,5);
    print(head);

    insertAtPosition(head,tail,2,2);
    print(head);

    insertAtPosition(head,tail,3,3);
    print(head);

    insertAtPosition(head,tail,4,4);
    print(head);

    deleteNode(5,head,tail);
    print(head);

    cout<<"HEAD : "<<head->data<<endl;
    cout<<"TAIL : "<<tail->data<<endl;

    return 0;
}