#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){

    cout<<"Enter the data "<<endl;
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
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

void inOrder(node* root){
    //base case
    if(root == NULL)
    return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node* root){
    //base case
    if(root == NULL)
    return ;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){
    //base case
    if(root == NULL)
    return ;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main() {
    node* root = NULL;
    root = buildTree(root);

    // levelOrderTraversal(root);
    // cout<<"InOrder"<<endl;
    cout<<"Inorder : ";
    inOrder(root);
    cout<<endl;

    cout<<"PreOrder : ";
    preOrder(root);
    cout<<endl;

    cout<<"PostOrder : ";
    postOrder(root);
    return 0;
}