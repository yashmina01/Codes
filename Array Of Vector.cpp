#include <bits/stdc++.h>
using namespace std;

int printVector(vector<int> v){
    cout<<"Size : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int N;                      //no of vectors we want to create 
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++){
        int n;                  //n is size of vector we want to create
        cin>>n;

        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);  //storing values in each vector we created
        }
    }
        
    for(int i=0;i<N;i++){       //For Printing N vector we created
    printVector(v[i]);
    }
}