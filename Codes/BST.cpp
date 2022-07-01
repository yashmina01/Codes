#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* right;
        Node* left;
    Node(int d){
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

Node* insertAtBST(Node* &root,int d){                               //Time Complexity of insertion in BST :- O(logN)
    //base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root->data){
    root->right = insertAtBST(root->right,d);                       //right side mein insert he    
    }
    else {
    root->left  = insertAtBST(root->left,d);                       //left side mein insert karna he   
    }

    return root;
}

Node* minVal(Node* &root){                                  //In BST leftmost node has minimum value
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* &root){                                  //In BST rightmost node has maximum value
    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root,int value){
    //base case
    if(root == NULL)
        return root;

    if(root->data == value){
        
        //0 Child
        if(root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }  

        //1 Child from left 

        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }  

        //1 Child from right        
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }  

        //2 Child
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }

    }
    else if(root->data > value){
        root->left = deleteFromBST(root->left, value);                   //Left part mein jaao
        return root;                                                  
    }
    else if(root->data < value){
    root->right = deleteFromBST(root->left , value);                    //right part mein jaao
        return root;                    
    }
}


void takeinput(Node* &root){

    int data;
    cin>>data;

    while(data != -1){
        root = insertAtBST(root,data);
        cin>>data;
    }
}

void inOrder(Node* root){
    //base case
    if(root == NULL)
    return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Node* root){
    //base case
    if(root == NULL)
    return ;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){
    //base case
    if(root == NULL)
    return ;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
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
    Node* root = NULL;

    cout<<"Enter data to insert in BST"<<endl;
    takeinput(root);

    cout<<"Printing our BST in levelOrder "<<endl; 
    levelOrderTraversal(root);
    cout<<endl;
    
    cout<<"Printing our BST in InOrder "<<endl;
    inOrder(root);
    cout<<endl;

    cout<<"Printing our BST in PreOrder "<<endl;
    preOrder(root);
    cout<<endl;

    cout<<"Printing our BST in PostOrder "<<endl;
    postOrder(root);    cout<<endl;
    cout<<endl;

    cout<<"Minimum value of BST is "<<minVal(root)->data<<endl;

    cout<<"Maximum value of BST is "<<maxVal(root)->data<<endl;
    cout<<endl;

    //Deletion

    cout<<"Printing BST After Deletion"<<endl;
    root = deleteFromBST(root,30);

    cout<<"Printing our BST in levelOrder "<<endl; 
    levelOrderTraversal(root);
    cout<<endl;
    
    cout<<"Printing our BST in InOrder "<<endl;
    inOrder(root);
    cout<<endl;

    cout<<"Printing our BST in PreOrder "<<endl;
    preOrder(root);
    cout<<endl;

    cout<<"Printing our BST in PostOrder "<<endl;
    postOrder(root);    cout<<endl;
    cout<<endl;
    
    return 0;
}   