#include <bits/stdc++.h>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head,int d){

    Node* temp = new Node(d);           //new node created
    temp->next = head;                  //Pointing (temp->Next) to (prevoius Node)
    head = temp;                        //Making (temp Data) as Head 
}

void insertAtTail(Node* &tail,int d){

    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


void print(Node* &head){
    Node* temp = head;                  //For Traversal Of Linklist ,temp Node is created pointing head

    while(temp != NULL){                //Loop qill continue till (temp->next) reaches NULL 
        cout<< temp->data <<" ";        //(temp->data) will be printed
        temp = temp->next;              //For moving to next node ==> that (temp->next) contains address of next node,we will change that every time
    }
    cout<<endl;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;                 //Starting Mein 1 hi node hogi jo ki head and tail dono hogi

    print(head);

    cout<<"Inserting 15 At Head"<<endl;
    insertAtHead(head,15);
    print(head);

    cout<<"Inserting 20 At Head"<<endl;
    insertAtHead(head,20);
    print(head);

    cout<<"Inserting 100 At Tail"<<endl;
    insertAtTail(tail,100);
    print(head);

    return 0;
}