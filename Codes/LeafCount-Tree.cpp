/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
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
    
***********************************************************/
void inOrder(BinaryTreeNode<int> *root,int &count){
    //base case
    if(root == NULL)
    return;
    
    

    inOrder(root->left,count);
    //Node has no child then it is called leaf
    
    if(root->left == NULL && root->right == NULL){
        count++;
    }
    inOrder(root->right,count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int count = 0;
    inOrder(root,count);
    return count;
    
}