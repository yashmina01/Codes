#include <bits/stdc++.h>
using namespace std;

int main() {
    stack <int> s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    s.push(30);

    int size = s.size();
    vector<int> arr(s.size());

    cout<<"Stack Before Reversal "<<endl;
    int i=0;
    while(!s.empty()){
        cout<<s.top()<<" ";
        arr[i] = s.top();
        i++;
        s.pop();
    }
    cout<<endl;

    for(int i=0;i<size;i++){
        s.push(arr[i]);
    }

    cout<<"Stack After Reversal "<<endl;
    while(!s.empty()){
    cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}