#include <bits/stdc++.h>
using namespace std;

int print(vector<int> arr,int start,int end){

    for (int i = start; i <= end; i++)
    cout<<arr[i]<<" ";
    
    cout<<endl;
}

int peakElement(vector<int> arr,int start , int end){

    int mid = start + (end-start)/2;
    print(arr,start,end);

    cout<<"Value Of Mid : "<<arr[mid]<<endl;
    cout<<endl;

    if(start > end)
    return -1;
    
    if(start == end)
    return mid;

    if(arr[mid] < arr[mid+1])
    return peakElement(arr,mid+1,end);

    else return peakElement(arr,start,mid);
}

int main() {
    int n; cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int ans = peakElement(arr,0,n-1);
    cout<<ans<<endl;

    return 0;
}