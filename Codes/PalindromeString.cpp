#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;

    int start = 0,end = s.size()-1;
    while(start <= end){
        
        if(s[start] != s[end]){
        cout<<"Not Palindrome"<<endl;
        return 0;}

        else {
            start++;
            end--;
        }
    }
    cout<<"Palindrome String"<<endl;
}