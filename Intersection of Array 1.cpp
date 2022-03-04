#include <bits/stdc++.h>
using namespace std;

int printVector(vector<int> ans){           
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    } cout<<endl;
}

int main(){
    int a[5] = {1,2,3,4,3};
    int b[3] = {7,5,2};
    vector<int> ans;

    for(int i=0;i<5;i++){
        int element = a[i];     

        for(int j=0;j<3;j++){
            if(element == b[j]){
            ans.push_back(element);           //inserting common elements in vector ans
            b[j] = INT_MIN;                  //updating element to out of range so that it does'nt count as intersection again
            }
        }
    }
    printVector(ans);                       
}