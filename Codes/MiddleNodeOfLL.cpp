#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
int getLength(Node* &head){
    Node* temp = head;
    int length = 0;
    
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    
    return length;
}

Node *findMiddle(Node *head) {
    // Write your code here
    int length = (getLength(head)/2);
    
    Node* temp = head;
    int l = 0;
    
    while(l != length){
        l++;
        temp = temp->next;
    }
    return temp;
}