#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* right;
        node* left;

    node(int d){
        this ->data  = d;
        this ->left  = NULL;
        this ->right = NULL;
    }
};

node* buildTree(node* root){

    cout<<"Enter the Data :- "<<endl;
    int data;
    cin>>data;
    root = new node(data);  

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left "<< data <<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data for inserting in right "<< data <<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //purana level complete traverse ho chukka he 
            cout<<endl;
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }
        }
        else
        { 
        cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp -> left);
        }        

        if(temp->right){
            q.push(temp -> right);
        }
    }
}
}

int main() {
    
    node* root = NULL;

    root = buildTree(root);
    levelOrderTraversal(root);

    return 0;
}