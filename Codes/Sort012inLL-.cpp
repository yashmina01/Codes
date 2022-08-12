class Solution
{
    public:
    
    void insertAtTail(Node* &tail , Node* curr){
        tail->next = curr;
        tail = curr;
    }
    
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
                                                     //******Method 2: If replacement is not allowed******
        
        Node* zeroHead = new Node(-1);
        Node* zeroTail = zeroHead;
        Node* oneHead = new Node(-1);
        Node* oneTail = oneHead;
        Node* twoHead = new Node(-1);
        Node* twoTail = twoHead;
        
        Node* curr = head;
        while(curr != nullptr){
            int value = curr->data;
            
            if(value == 0){
                insertAtTail(zeroTail , curr);
                curr = curr->next;
            }
            
            else if(value == 1){
                insertAtTail(oneTail , curr);
                curr = curr->next;
            }
            else if(value == 2){
                insertAtTail(twoTail , curr);
                curr = curr->next;
            }
        }
        
        if(oneHead->next != nullptr)
        zeroTail->next = oneHead->next;
        else zeroTail->next = twoHead->next;
        
        oneTail->next = twoHead->next;
        twoTail->next = nullptr;
        
        head = zeroHead->next;                              //Do not forget to update the head pointer
        
        delete(zeroHead);
        delete(oneHead);
        delete(twoHead);
        
        return head;
    }