#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start,int end){

    int mid = start + (end-start)/2;

    int l1 = mid-start + 1;
    int l2 = end - mid;
    
    int *arr1 = new int[l1];
    int *arr2 = new int[l2];

    //Copying Values To Temp Arrays
    int mainArrayIndex = start;
    for(int i=0;i<l1;i++)
    arr1[i] = arr[mainArrayIndex++];

    mainArrayIndex = mid+1;
    for(int j=0;j<l2;j++)
    arr2[j] = arr[mainArrayIndex++];

    //Merging 2 Sorted Arrays
    int i = 0,j = 0;
    mainArrayIndex = start;

    while(i < l1 && j < l2){

        if(arr1[i] < arr2[j])
        arr[mainArrayIndex++] = arr1[i++];

        else arr[mainArrayIndex++] = arr2[j++]; 
    }

    //Putting Left Element 
    while(i < l1)
    arr[mainArrayIndex++] = arr1[i++];

    while(j < l2)
    arr[mainArrayIndex++] = arr2[j++];

}

void mergeSort(int arr[],int start,int end){

    if(start >= end)
    return ;

    int mid = start + (end-start)/2;

    //Left Side Of Array
    mergeSort(arr,start,mid);

    //Right Side Of Array
    mergeSort(arr,mid+1,end);

    //Merging The Arrays
    merge(arr,start,end);

}

int main() {
    int arr[7] = {28,27,43,3,9,82,10};
    int n = 7;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}