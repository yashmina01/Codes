
void solve(stack<int>&inputStack,int count, int size){

    //base case
    if(count == size/2){
        inputStack.pop();           //jab base case reach ho jaee ,element (middle) pop krr do
        return ;
    }
    
    int num = inputStack.top();    //har call pe top element ko nikal ke rkhh do
    inputStack.pop();               
    
    //Recursive Call
    solve(inputStack,count+1,size);     //har recursive call pe count ++ hoga na

    inputStack.push(num);               //jab vapas aaoge ,jis stack se jo no. nikalee the usse push krrte aao

}

void deleteMiddle(stack<int>&inputStack, int N){

    int count = 0;
    solve(inputStack,count,N);
}