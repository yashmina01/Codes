#include <bits/stdc++.h>
using namespace std;

string rev(string &s,int start,int end){

    if(start > end)
    return s;
    swap(s[start] , s[end]);
    start++;
    end--;

    rev(s,start,end);
}

int main() {
    string s; cin>>s;

    rev(s,0,s.length()-1);
    cout<<s<<endl;
    return 0;
}