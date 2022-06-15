#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr,int start,int end){

    int pivot = arr[start];
    int count = 0;                          //counting element less than pivot
    for(int i=start+1;i<=end;i++){
        if(arr[i] <= pivot)
        count++;
    }

    int pivotIndex = start + count;
    swap(arr[start] , arr[pivotIndex]);    

    int i = start,j = end;
    while(i < pivotIndex && j > pivotIndex){

        while(pivot >= arr[i])            //MAKE SURE SIRF EK PE Equal(=) wala sign laga rhe ho
        i++;

        while(pivot < arr[j])
        j--;

        if(i < pivotIndex && j > pivotIndex){       //here we will again check the codition
            swap(arr[i++] , arr[j--]);
        }

    }
    return pivotIndex;                              //returning Pivot True Index

}

void quickSort(vector<int>&arr,int start,int end){

    if(start >= end)
    return ;

    int p = partition(arr,start,end);

    quickSort(arr,start,p-1);                   //Applying Quick Sort For LEFT Part
    quickSort(arr,p+1,end);                     //Applying Quick Sort For Right Part

}

int main() {
    int t; cin>>t;

    while(t--){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
    return 0;
}