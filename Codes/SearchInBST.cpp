/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
*/

**//    RECURSIVE METHOD
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    if(root == NULL)
        return false;
    
    if(root->data == x)
        return true;
   
    if(root->data > x)            //BST mein right wale saare bade honge toh left mein
    searchInBST(root->left,x);
    
    else searchInBST(root->right,x); //BST mein left wale saare chote honge toh left mein
}

**//    ITERATIVE METHOD
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    BinaryTreeNode<int> *temp = root;
    
    while(temp != NULL){
        
        if(temp->data == x)
            return true;
        if(temp->data > x){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
}
    return false;
}