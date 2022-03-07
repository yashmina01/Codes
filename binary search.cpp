#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){

    int low = 0,high = n-1, mid;
    while(low <= high){

        if(arr[mid] == key)
        return mid;
        
        if(key > arr[mid])
        low = mid+1;

        else high = mid-1;

        mid = (high + low)/2;
    }
    return -1;


}
int main(){
    int a[8] = {2,3,5,8,9,10,15,20};
    int b[7] = {1,4,6,9,13,15,21};
    
    cout<<binarySearch(a,8,2)<<endl;
    cout<<binarySearch(b,7,0)<<endl;


}