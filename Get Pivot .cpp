#include <iostream>
using namespace std;

int pivotIndex(int arr[],int n) {
    int s=0,e=n-1;
    int mid = s + (e-s)/2;
    while(s<e) {
        mid = s + (e-s)/2;
        if(arr[mid] >= arr[0])
        s = mid+1;

        else e = mid;
    }
    return s;
}

int main() {
    int arr[5] = {3,8,-1,-17,1};
    cout<<"Pivot Index is "<<pivotIndex(arr,5)<<endl;
    
}