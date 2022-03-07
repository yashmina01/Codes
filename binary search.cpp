#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid = (low + high)/2;
        if(key == arr[mid])
        return mid;
        else if(key > arr[mid])
        return low = mid+1;
        else if(key != arr[mid])
        return -1;
        else return high = mid-1;
    }


}
int main(){
    int a[8] = {2,3,5,8,9,10,15,20};
    int b[7] = {1,4,6,9,13,15,21};
    
    cout<<binarySearch(a,8,-43)<<endl;
    cout<<binarySearch(b,7,15)<<endl;


}