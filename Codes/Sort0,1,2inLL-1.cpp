Node* sortList(Node *head)
{


    //                          *******METHOD 1: Basically we just counted and replaced data first with 0,then 1 then 2******
    //                          ******* TC :-- O(n);
    // Write your code here.
    Node* temp = head;
    int count0 = 0,count1 = 0,count2 = 0;
    
    while(temp != nullptr){
        if(temp->data == 1)
            count1++;
        else if(temp->data == 2)
            count2++;
        else if(temp->data == 0)
            count0++;
        
        temp = temp->next;
    }
    
    temp = head;
    while(temp != nullptr){
        if(count0 != 0){
            temp->data = 0;
            temp = temp->next;
            count0--;
        }
        
        else if(count1 != 0){
            temp->data = 1;
            temp = temp->next;
            count1--;
        }
        else if(count2 != 0){
            temp->data = 2;
            temp = temp->next;
            count2--;
        }
    }
    return head;
}
