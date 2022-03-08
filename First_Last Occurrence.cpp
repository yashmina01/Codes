#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> arr,int key){

    int low=0,high=arr.size()-1;
    int mid = low + (high-low)/2;
    int ans=0;

    while(low <= high){
        
        int mid = low + (high-low)/2;

        if(arr[mid] == key){
            ans = mid;
            high = mid - 1;
        }

        else if(key < arr[mid]){
            high = mid - 1;
        }
        else low = mid + 1;

    } return ans;
}

int LastOcc(vector<int> arr,int key){

    int low=0,high=arr.size()-1;
    int mid = low + (high-low)/2;
    int ans=0;

    while(low <= high){
        
        int mid = low + (high-low)/2;

        if(arr[mid] == key){
            ans = mid;
            low = mid + 1;
        }

        else if(key < arr[mid]){
            high = mid - 1;
        }
        else low = mid + 1;

    } return ans;
}

int main(){
    vector<int> arr = {0,3,3,4,5,8,8,9,15};
    cout<<"First Occurrence  at index : "<<firstOcc(arr,8)<<endl;
    cout<<"Last Occurrence   at index : "<<LastOcc(arr,8)<<endl;
}