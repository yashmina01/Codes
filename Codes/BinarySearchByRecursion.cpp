#include <bits/stdc++.h>
using namespace std;

int print(vector<int> arr,int start,int end){

    for (int i = start; i <= end; i++)
    cout<<arr[i]<<" ";
    
    cout<<endl;
}
bool binarySearch(vector<int> arr,int start,int end,int key){

    print(arr,start,end);
    cout<<endl;
    int mid = start + (end-start)/2;
    cout<<"Value Of Mid is "<<arr[mid]<<endl;

    if(start > end)
    return false;

    if(arr[mid]==key)
    return true;

    if(arr[mid] < key)
    return binarySearch(arr,mid+1,end,key);

    else if(arr[mid] > key)
    return binarySearch(arr,start,mid-1,key);

}

int main() {
    int n; cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int key; cin>>key;

    if(binarySearch(arr,0,arr.size()-1,key))
    cout<<"Element Found"<<endl;
    else cout<<"Not Found"<<endl;

    return 0;
}