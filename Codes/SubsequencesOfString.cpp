#include <bits/stdc++.h>
using namespace std;

void subSequences(string str,int index,string output,vector<string>& ans){

    //base base
    if(index >= str.length()){
        ans.push_back(output);          //After Reaching Last Index Store the subsequences he made
        return ;
    }

    //Exclude The Index Element
    subSequences(str,index+1,output,ans);

    //Include Thee Index Element
    char element = str[index];
    output.push_back(element);
    subSequences(str,index+1,output,ans);
}

int main() {
    string str; cin>>str;
    int index = 0;
    string output = "";
    vector<string> ans;                 //Vector of String ,Subsequences Will Be Stored in it

    subSequences(str,index,output,ans);

    for(auto x: ans)
    cout<<x<<endl;
    return 0;
}