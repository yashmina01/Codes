#include <bits/stdc++.h>
using namespace std;

void print(int arr[] , int size){

    cout<<"Size Of Array : "<<size<<endl;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
bool search(int arr[],int size,int k){

    print(arr,size);
    if(size == 0)
    return false;

    if(arr[0] == k)
    return true;

    search(arr+1,size-1,k);

}

int main() {
    
    int size; cin>>size;

    int arr[size];
    for(int i=0;i<size;i++)
    cin>>arr[i];

    cout<<"Enter Key To Find "<<endl; 
    int key; cin>>key;

    if(search(arr,size,key)){
        cout<<"Element Found "<<endl;
    }
    else {
        cout<<"Not Found"<<endl;
    }
    return 0;
}