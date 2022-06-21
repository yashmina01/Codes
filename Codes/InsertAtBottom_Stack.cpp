#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>& s, int x) 
{
    //base case
    if(s.empty()){
        s.push(x);      //When the stack is empty we will push our element x
        return ;
    }
    
    int num = s.top();
    s.pop();
    
    //Recursive Call
    solve(s,x);
    s.push(num);
}

stack<int> main() {
    int x; cin>>x;
    stack<int> s;

    solve(s,x);
    return s;
}
