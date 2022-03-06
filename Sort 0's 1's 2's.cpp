#include <bits/stdc++.h>
using namespace std;

int printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

int sortTwo(vector<int> &v){
    int low=0,mid=0,high= v.size();

    while(mid<=high){     
        
        if(v[mid] == 1)
        mid++;
        
        if(v[mid] == 0){
            swap(v[mid] , v[low]);
            low++;
            mid++;
        }

        if(v[mid] == 2){
            swap(v[mid] , v[high] );
            high--;
        }
    }
}
int main(){

    vector<int> v ={0,0,2,2,1,0,1,2,0};
    sortTwo(v);   
    printVector(v); 
}
