#include <bits/stdc++.h>
using namespace std;

int printVector(vector<int> ans){           
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    } cout<<endl;
}
                                    //MUST CONDITION : Both the array must be sorted in non-decreasing order
int main(){
    int a[5] = {1,2,3,4,5};
    int b[3] = {1,3,5};
    vector<int> ans;
    
    int i=0,j=0;
    while(i<5 && j<3){              // loop till index of array
        if(a[i] < b[j])
        i++;

        else if(a[i] == b[j]){
        ans.push_back(a[i]);
        i++;
        j++;}

        else j++;
    }
    
    printVector(ans);                       
}