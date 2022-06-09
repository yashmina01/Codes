#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    map<string,int> mp;

    for(int i=0;i<n;i++){
        string s; cin>>s;
        mp[s]++;
    }
    int temp = 0;
    for(auto x: mp)
        temp = max(x.second , temp);

    for(auto y : mp){
        if(y.second == temp){
            cout<<y.first<<endl;
        }
    }
    return 0;
}