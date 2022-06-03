#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> nums(n);
    vector<int> ans;
    
    for(int i=0;i<n;i++)
    cin>>nums[i];

    unordered_map<int,int> mp;      //Printing Duplicate Element     
    for(auto no : nums)             //Time Complexity - O(N)
    mp[no]++;                       //Space Complexity - O(N)

    for(auto it:mp){
    if(it.second >= 2)
    ans.push_back(it.first);
}
    for(auto y :ans)
    cout<<y<<" ";
    return 0;
}