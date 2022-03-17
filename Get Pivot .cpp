#include <iostream>
using namespace std;

int pivotIndex(int arr[],int n) {
    int start=0,end=n-1;
    int mid = start + (end-start)/2;

    while(start<end) {
        
        mid = start + (end-start)/2;
        if(arr[mid] >= arr[0])
        start = mid+1;

        else end = mid;
    }
    return start;
}

int main() {
    int arr[5] = {3,8,-1,-17,1};
    cout<<"Pivot Index is "<<pivotIndex(arr,5)<<endl;
    
}