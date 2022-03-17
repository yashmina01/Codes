#include <bits/stdc++.h>
using namespace std;
 
int printVector(vector<pair<int,string> > v){

    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<" "<<endl;
    }
    cout<<endl;
}
int main(){

    vector<pair<int,string> > v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        string y;
        cin>>x>>y;
        v.push_back( {x,y} );
    }

    printVector(v);
}