#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int> arr){

    int low=0,high=arr.size()-1;
    int mid = low + (high-low)/2;

    while(low<high){

        if(arr[mid] < arr[mid+1]){
            low = mid + 1;
        }
        else high = mid;
        mid = low + (high-low)/2;
    }   
    return low;
    }

int main(){
    vector<int> arr = {0,10,5,2};
    cout<<"Peak Element at index : "<<peakElement(arr)<<endl;
}