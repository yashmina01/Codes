#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v,int s,int e,int k) {
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    int key = k;

    while(start < end) {

        if(key < v[mid]) 
        end = mid-1;

        else if ( key > v[mid])
        start = mid+1;

        else return mid;
    } 
    return start;
}

int getPivot(vector<int> v) {
    int start = 0,end = v.size()-1;
    int mid = start + (end-start)/2;

    while(start <= end) {
        mid = start + (end-start)/2;

        if(v[mid] >= v[0] ) {
            start = mid + 1;
        }
        else end = mid - 1;
    }
    return start;
}

int main(){
    vector<int> v = {7,9,1,2,3};
    int n = v.size();
    int pivot = getPivot(v);
    int index;
    int key;
    cin>>key;

    if (key >= v[pivot] && key <= v[n-1]) 
    cout<<binarySearch(v,pivot,n-1,key)<<endl;

    else 
    cout<<binarySearch(v,0,pivot-1,key)<<endl;

}