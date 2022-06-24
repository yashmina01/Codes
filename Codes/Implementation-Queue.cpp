#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
};

class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){
        front=0;
        rear=0;
        }

    void push(int x)
{
        arr[rear] = x;
        rear++;
}
    int pop()
{
        if(front == rear)
        return -1;
        else {
            int ans = arr[front];
            arr[front] = INT_MIN;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
            return ans;
        }
}   

    int top() {
        // Implement the front() function
        if(front == rear)
            return -1;
        else return arr[front];
    }
    
    bool isEmpty() {
        // Implement the isEmpty() function
        if(front == rear)
            return true;
        else return false;
    }
};

int main()
{

        MyQueue *sq = new MyQueue();
        sq->push(5);
        sq->push(10);
        sq->push(100);

        if(sq->isEmpty())
        cout<<"Queue is empty "<<endl;
        else cout<<"Queue is not empty "<<endl;

        sq->pop();
        sq->pop();
        sq->pop();

        if(sq->isEmpty())
        cout<<"Queue is empty "<<endl;
        else cout<<"Queue is not empty "<<endl;
}