#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        //Memory Free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl; 
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

void insertAtHead(Node* &head,int d){
    
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position == 1){
        insertAtHead(head,d);
    }
  
    Node* temp = head;
    int count = 1;

    while(count < position-1){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,d);
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}
void deleteNode(int position,Node* &head,Node* &tail){              //****IMPORTANT**** 
                                                        
    //Deleting the start node                           Jab bhi koi node delete krre usse phele usko NULL pe point krrva dena else Segmentation Fault
    if(position == 1){                                 //ek free(temp) bhii hotha he inbuilt delete krrne ka
        Node* temp = head;
        head = head->next;
        //Deleting free first node
        temp->next = NULL;
        delete temp;
    }
    else {
        //Deleting Middle or last node
        Node* current = head;
        Node* previous = NULL;
        int count = 1;

        while(count < position){
            previous = current;
            current = current->next;                //Linkedlist mein aage traverse krrne ke liye
            count++;
        }
        previous->next = current->next;
        
        if(current->next == NULL){                          //**Here if check if deleted node is last node(TAIL) ,then we should update the tail
            tail = previous;
            delete current;
        }
        else    {                                         //previous ko current ke aage wale pe point karvaa diya then
        current->next = NULL;                             //current ko delete krr diya      free(current) bhi hotha he inbuilt
        delete current;
        }
    }
}

int main() {
    Node* node1 = new Node(2);

    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head,1);
    print(head);

    insertAtTail(tail,3);
    print(head);

    insertAtTail(tail,4);
    print(head);

    insertAtTail(tail,5);
    print(head);


    insertAtTail(tail,6);
    print(head);


    insertAtTail(tail,7);
    print(head);

    deleteNode(7,head,tail);
    print(head);

    cout<<"Head  : "<<head->data<<endl;
    cout<<"Tail  : "<<tail->data<<endl; 
}