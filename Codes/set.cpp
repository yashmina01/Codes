#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> ans;

    for(int i=0;i<10;i++) {
        int p; cin>>p;
    ans.insert(p);
    }


    for(auto x : ans){
        cout<<x<<" "; 
    }
    return 0;
}