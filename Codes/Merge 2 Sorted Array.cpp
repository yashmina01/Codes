#include <bits/stdc++.h>
using namespace std;


    
    void printArray(vector<int> v)
    {
    for(int x:v)
        cout<<x<<" ";
    }



int main() {
    vector<int> v1 = {1,4,8,10,12};
    vector<int> v2 = {2,5,7,11};
    vector<int> v3;

    int n=v1.size()-1;
    int m=v2.size()-1;
    int i=0,j=0;
 
 
    while( i<=n && j<=m){
        if(v1[i] <= v2[j]){
            v3.push_back(v1[i++]);
        }
        else {
            v3.push_back(v2[j++]);
        }
    }
    while(i<=n){
        v3.push_back(v1[i++]);
    }

    while(j<=m){
        v3.push_back(v2[j++]);
    }

    printArray(v3);

}