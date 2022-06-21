#include <bits/stdc++.h>
using namespace std;

class Stack{
    public: 
        int *arr;
        int top;
        int size;
    
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else {
            cout<<"Stack is OverFlow "<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else {
            cout<<"Stack is UnderFlow "<<endl;
        }
    }

    int peek(){

        if(top >= 0){
            return arr[top];
        }
        else {
        cout<<"Stack is empty"<<endl;
        return -1;
        }
    }

    bool isEmpty(){
        if(top == -1)
        return true;
        else 
        return false;
    }

    void print(){
        if(top >= 0){
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else 
        cout<<"Stack is empty"<<endl;
    }
};

int main() {
    Stack s(5);
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    s.peek();

    s.print();
    s.pop();
    s.pop();
    s.print();

    s.peek();
    s.pop();
    s.pop();
    s.pop();

    if(s.isEmpty())
    cout<<"Stack is empty mere dost "<<endl;
    else 
    cout<<"Stack is not empty mere dost "<<endl;    
}