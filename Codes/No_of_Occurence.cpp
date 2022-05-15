#include <bits/stdc++.h>
using namespace std;


int firstOcc(vector<int> arr,int key){

    int start = 0,end = arr.size()-1,mid = start + (end-start)/2;
    int first = 0;

    while(start <= end){
        mid = start + (end-start)/2;

        if(arr[mid] == key){
        first = mid;
        end = mid - 1;
        }

        else if(arr[mid] < key)
        start = mid + 1;

        else 
        end = mid - 1;
    }
    return first;
}

int lastOcc(vector<int> arr,int key){

    int start = 0,end = arr.size()-1;
    int mid = start + (end-start)/2;
    int last = 0;

    while(start <= end){
        mid = start + (end-start)/2;

        if(arr[mid] == key){
        last = mid;
        start = mid + 1;
        }

        else if(arr[mid] < key)
        start = mid + 1;

        else 
        end = mid - 1;
    }
    return last;
}


int main(){
    int n; cin>>n;
    vector <int> arr(n);

    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<"Enter Key "<<endl;
    int key; cin>>key;

    int x = firstOcc(arr,key);
    int y = lastOcc(arr,key);

    cout<<"No of Occurences of Provided key is : "<<(y-x)+1<<endl;
}