#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> maxi;

    for(int i=0;i<10;i++) {
        int p; cin>>p;
    maxi.push(p);
    }
    int n = maxi.size();

    for(int i=0;i<n;i++) {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    return 0;
}