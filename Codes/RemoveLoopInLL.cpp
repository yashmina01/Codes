#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    
    Node* FloydDectectLoop(Node* head){
        if(head == NULL)
        return head;
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && slow != NULL){
            fast = fast->next;
            
            if(fast != NULL)
            fast = fast->next;
            slow = slow->next;
            
            if(fast == slow)
            return slow;
        }
        return NULL;
    }
    
    Node* getStartNode(Node* head){
        if(head == NULL)
        return head;
        
        Node* slow = head;
        Node* intersection = FloydDectectLoop(head);
        
        if(intersection == NULL)                            //Always make sure that pointers are not NULL 
        return NULL;
        
        while(slow != intersection){
            slow = slow->next;
            intersection = intersection->next;
        }
        
        return slow;
    }

    void removeLoop(Node* head)
    {
        // just remove the loop without losing any nodes
        if(head == NULL || head->next == nullptr)
        return ;
        
        Node* startOfLoop = getStartNode(head);
        Node* temp = startOfLoop;
        
        if(startOfLoop == nullptr)
        return;
        
        while(temp->next != startOfLoop){
            temp = temp->next;
        }
        temp->next = NULL;                             //By this we are cutting loop node(where loop begin) to NULL pointer
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n )
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}